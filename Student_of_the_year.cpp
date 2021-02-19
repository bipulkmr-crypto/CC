#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll i,j;
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        a[i]=__builtin_popcountll(inp);
    }
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        b[i]=__builtin_popcountll(inp);
    }
    sort(a,a+n);
    sort(b,b+n);
    rep(i,n)
    {
        if(a[i]>b[i])
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}