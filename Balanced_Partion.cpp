// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// vector<ll> p;
// ll good(ll mid, vector<pair<ll, ll>> v)
// {
//     ll c1 = 0, c2 = 0;
//     ll n = v.size();
//     ll i;
//     rep(i, n)
//     {
//         if ((v[i].first - v[i].second) > mid)
//             c1 += p[i];
//         else if ((v[i].first - v[i].second) < mid)
//             c2 += p[i];
//     }
//     if (c1 == c2)
//         return 0;
//     else if (c1 > c2)
//         return -1;
//     else
//         return 1;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         p.resize(n);
//         vector<pair<ll, ll>> v;

//         ll i = 0;
//         ll c1 = 0, c2 = 0;
//         while (n--)
//         {
//             ll x, y;
//             ll temp;
//             cin >> x >> y >> temp;
//             v.pb(make_pair(x, y));
//             p[i] = temp;
//             i++;
//         }
//         ll low = -1000, high = 1000, mid;
//         ll ans = 0;
//         bool flag = false;
//         while (high - low > 1)
//         {
//             mid = low + (high - low) / 2;
//             ll val = good(mid, v);
//             if (val == 0)
//             {
//                 ans = mid;
//                 flag = true;
//                 break;
//             }
//             else if (val == 1)
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         if(good(low,v)==0)
//         flag=true;
//         if((good(high,v))==0)
//         flag=true;
//         if (flag)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }'
//2nd Approach using prefix sum
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
        ll n;
        cin >> n;
        ll v[4000] = {0};
        ll i = 0;
        ll c1 = 0, c2 = 0;
        rep(i, n)
        {
            ll x, y;
            ll temp;
            cin >> x >> y >> temp;
            v[x - y + 1000] = temp;
        }
        for (i = 1; i < 4000; i++)
        {
            v[i] += v[i - 1];
        }
        bool flag = false;
        rep(i, 4000)
        {
            if (v[i] == (v[3999] - v[i]))
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}