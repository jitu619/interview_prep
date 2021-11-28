#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

#define pb push_back
#define vi vector<int>
#define lli long long int
#define ull unsigned long long int
#define mod 1000000007

void merge(int *arr,int low,int mid,int high){
    int lsize=mid-low+1,rsize=high-mid;

    int larr[lsize],rarr[rsize];

    for(int i=0;i<lsize;i++)
        larr[i]=arr[low+i];

    for(int j=0;j<rsize;j++)
        rarr[j]=arr[mid+1+j];
    
    int i=0,j=0,k=low;


    while(i<lsize && j<rsize){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;
        }else{
            arr[k]=rarr[j];
            j++;
        }
        k++;
    }

    while(i<lsize){
        arr[k]=larr[i];
        k++;
        i++;
    }

    while(j<rsize){
        arr[k]=rarr[j];
        j++;
        k++;
    }

}

void mergesort(int *arr,int low,int high){
	// deb2(low,high);
    if(low>=high)
        return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    mergesort(arr,0,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}