#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
bool comp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    return (a.first<b.first);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> x;
        vector<ll> y;
        ll i;
        rep(i,n)
        {
            ll inp;
            cin>>inp;
            x.pb(inp);
            cin>>inp;
            y.pb(inp);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        ll rangex,rangey;
        // if(n%2==0)
        // {
        //     rangex=(x[n/2]-x[n/2-1]);
 
        // }
        // else
        // {
        //     rangex=(x[n/2+1]-x[n/2-1]);
        // }
        // if(n%2==0)
        // {
        //     rangey=(y[n/2]-y[n/2-1]);
 
        // }
        // else
        // {
        //     rangey=(y[n/2+1]-y[n/2-1]);
        // }
        rangey=y[n/2]-y[(n-1)/2];
        rangex=x[n/2]-x[(n-1)/2];
        rangex++;
        rangey++;
        cout<<(rangey*rangex)<<endl;
    }
}