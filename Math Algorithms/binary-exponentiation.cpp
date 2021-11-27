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
    int a,b;
    cin>>a>>b;
    long long res = 1;
    while(b>0){
        if(b%2==1)
            res*=a;
        
        a*=a;
        b/=2;
    }

    cout<<res;

    return 0;
}