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
        ll p, a, b, c;
        ll x1, x2, x3;
        ll ans=2e18;
        cin >> p >> a >> b >> c;
        ll mini = min({a, b, c});
        if (p == 0)
            cout << 0<< endl;
        else
        {
            ans=min(ans,(a-p%a)%a);
            ans=min(ans,(b-p%b)%b);
            ans=min(ans,(c-p%c)%c);
            cout<<ans<<endl;
        }
    }
}