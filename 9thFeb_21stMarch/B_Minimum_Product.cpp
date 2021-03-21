#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        ll n;
        cin >> n;
        if (a == b)
            cout << ((a - n) * b) << endl;
        else
        {
            ll mini1 = max(x, ((a + b - n) / 2));
            ll diff = n - (a - mini1);
            ll mini2 = max(y, ((a + b - n) / 2 - diff));
            cout<<(mini1*mini2)<<endl;
        }

        // ll z = (a + b - n) / 2;
        // ll mini2;
        // ll mini1;
        // mini1 = max(x, z);
        // ll left = n - (a - mini1);
        // if (left > 0)
        //     mini2 = max(y, b - left);
        // ll ans1 = mini1 * mini2;
        // mini1 = max(y, z);
        // left = n - (b - mini1);
        // if(left >0)
        // mini2 = max(x, a - left);
        // ll ans2 = mini1 * mini2;
        // cout << (min(ans1, ans2)) << endl;
    }
}