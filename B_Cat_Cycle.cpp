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
        ll n, k;
        cin >> n >> k;
        // if(k<=(n/2))
        // {
        //     cout<<k<<endl;
        // }
        // else
        // {
        //     ll ans=(k+k/2)%n;
        //     cout<<ans<<endl;
        // }
        ll i;
        ll posa = n-1, posb = 0;
        for (i = 1; i <= k; i++)
        {
            if (abs(posa - posb) == 0)
            {
                posb += 1;
                posb = posb % n ;
                // posa;
                // posa=
            }
            else
            {
                posa-=1;
                posb+=1;
                posa%=n;
                posb%=n;
            }
        }
        cout<<(posb+1)<<endl;
    }
}