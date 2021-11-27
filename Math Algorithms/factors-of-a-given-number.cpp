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
    
    vector<int> factors;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            factors.push_back(i);
            if(i!=sqrt(n)){
                factors.push_back(n/i);
            }
        }
        
    }
    
    for(auto factor:factors){
        cout<<factor<<" ";
    }

    return 0;
}