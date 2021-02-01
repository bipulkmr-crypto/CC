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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll i;
        ll arr[n];
        ll c1[n]={0};
        ll c2[n]={0};
        rep(i, n)
        {
            cin >> arr[i];
        }
        if(arr[0]%2==0)
        {
            c1[0]++;
        }
        else
        {
            c2[0]++;
        }
        fu(i,1,n-1)
        {
            if (arr[i] % 2)
            {
                c2[i] = c2[i - 1] + 1;
                c1[i]=c1[i-1];
            }
            else
            {
                c1[i] = c1[i - 1] + 1;
                c2[i]=c2[i-1];
            }
        }
        while (q--)
        {
            ll l,r;
            cin>>l>>r;
            ll d1,d2;
            if(l>0)
            {
            d1=c1[r]-c1[l-1];
            d2=c2[r]-c2[l-1];
            }
            else
            {
            d1=c1[r];
            d2=c2[r];
            }
            ll ans=(d1*d2);
            cout<<ans<<endl;
        }
    }
}