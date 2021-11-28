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

    // Sorts left to right.
    for (int i = 0; i < n-1; i++)
    {
        int min_idx=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
        
    }
    
    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}