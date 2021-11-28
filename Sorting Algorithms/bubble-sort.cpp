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



int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Sorts right to left
    for (int i = 0; i < n-1; i++)
    {   bool flag=false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                flag=true;
            }
                
        }
        if(!flag)
            break;
    }
    
    for(auto i:arr)
        cout<<i<<" ";
    


    return 0;
}