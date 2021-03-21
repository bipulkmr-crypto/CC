// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, u, r, d, l;
//         cin >> n >> u >> r >> d >> l;
//         if ((u == n) && (d == n) && (l == 0 || r == 0))
//             cout << "NO\n";
//         else if (((l == n) && (r == n) && (d == 0 || u == 0)))
//             cout << "NO\n";
//         else if ((r == 0 || l == 0) && u == 0 && d == n )
//             cout << "NO\n";
//         else if ((r == 0 || l == 0) && d == 0 && u == n)
//             cout << "NO\n";
//         else if (r == 0 && (l == 0 || r == 0) && l == n)
//             cout << "NO\n";
//         else if ((l == 0 || r == 0) && l == 0 && r == n)
//             cout << "NO\n";
//         else if ((r == 0 || l == 0) && u == 0 && d == n - 1)
//             cout << "NO\n";
//         else if ((r == 0 || l == 0) && d == 0 && u == n - 1)
//             cout << "NO\n";
//         else if (r == 0 && (l == 0 || r == 0) && l == n - 1)
//             cout << "NO\n";
//         else if ((l == 0 || r == 0) && l == 0 && r == n - 1)
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
// }
// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, u, r, d, l;
//         cin >> u >> u >> r >> d >> l;
//         ll mask = 0;
//         for (mask = 0; mask < 16; mask++)
//         {
//             if (mask & 1)
//             {
//                 u--;
//                 r--;
//             }
//             if (mask & 2)
//             {
//                 u--;
//                 l--;
//             }
//             if (mask & 4)
//             {
//                 l--;
//                 d--;
//             }
//             if (mask & 8)
//             {
//                 d--;
//                 r--;
//             }
//             if (min({u, l, d, r}) >=0 && max({u, l, r, d}) <= (n - 2))
//             {
//                 cout << "YES\n";
//                 break;
//             }
//             else
//             {
//                 cout << "NO\n";
//             }
//         }
//     }
// }
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
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
bool solve(ll n, ll u, ll r, ll d, ll l, ll mask)
{
    bool flag = true;
    if (mask & 1)
    {
        u--;
        l--;
    }
    if (mask & 2)
    {
        l -= 1;
        d--;
    }
    if (mask & 4)
    {
        d--;
        r--;
    }
    if (mask & 8)
    {
        r--;
        u--;
    }
    if ((min(min(u, r), min(l, d))) >= 0 && max(max(u, l), max(r, d)) <= (n - 2))
    {
        return true;
    }
    else
        return false;
}
bool dom()
{
    ll n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    for (ll mask = 0; mask < 16; mask++)
    {
        bool ans = solve(n, u, r, d, l,mask);
        if (ans)
            return true;
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        if (dom())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}