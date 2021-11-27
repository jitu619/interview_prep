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
    vector<bool> primes(n+1,true);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if(primes[i-1]==true){
            for(int j=2;i*j<=n;j++){
                primes[i*j-1]=false;
            }
        }
    }


    for(int i=2;i<=n;i++){
        if(primes[i-1]){
            cout<<i<<" ";
        }
    }
    


    return 0;
}