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
    ll n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while (k--)
    {
        ll t1, t2, f1, f2;
        cin >> t1 >> f1 >> t2 >> f2;
        ll ans = 0;
        if ((t1 == t2) && (f1 == f2))
        {
            cout << ans << endl;
        }
        else
        {
            if (t1 == t2)
            {
                ans = abs(f1 - f2);
            }
            else
            {
                ans += abs(t1 - t2);
                if (f1 <= a)
                {
                    ans += a - f1;
                }
                else
                {
                    ans += f1 - b;
                }
                if (f2 <= a)
                {
                    ans += a - f2;
                }
                else
                {
                    ans += f2 - b;
                }
                ans += abs(f2 - f1);
            }
            cout << ans << endl;
        }
    }
}