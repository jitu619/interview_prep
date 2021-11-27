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

int gcd(int a,int b){
    if(a==0)
        return b;
    
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);

    return 0;
}