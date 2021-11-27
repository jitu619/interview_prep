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
    bool flag=true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            cout<<"Not prime\n";
            flag=false;
            break;
        }
    }
    if(n==1){
        flag=false;
        cout<<"Not Prime\n";
    }
    if(flag){
        cout<<"prime\n";
    }
    
    return 0;
}