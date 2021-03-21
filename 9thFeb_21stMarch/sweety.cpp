#include<bits/stdc++.h>
using namespace std;
typedef long long  int ll;
#define mod (ll)1e9+7
ll fin(ll x)
{
    ll fact=1,i=1;
    for(i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    ll t;cin >> t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll p=1;
        ll a=fin(n);
        ll b=fin(n-r);
        ll c=fin(r);
        p=a/(b*c);
        // p=(fin(n)/(fin(n-r)*fin(r)))%mod; it is giving answer 17 but it should come 10
        p%=mod;

        cout<<p<<endl;

    }

}