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
        ll d;
        cin >> d;
        ll n = 1;
        vector<ll> v;
        ll j;
        ll i, im = (ll)(sqrt(n));
        for (i = d + 1;; i++)
        {
            ll t = 1;
            for (j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    t = 0;
                    break;
                }
            }
            if (t)
            {
                v.pb(i);
                break;
            }
        }
        for(i=v.back()+d; ;i++)
        {
            ll t=1;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    t=0;
                    break;
                }
            }
            if(t)
            {
                v.pb(i);
                break;
            }
        }
        cout<<(min((v[0]*v[1]),(v[0]*v[0]*v[0])))<<endl;
    }
}