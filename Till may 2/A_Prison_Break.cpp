// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
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
//         ll p, q;
//         cin >> p >> q;
//         ll a = min(p, q);
//         ll b = max(p, q);
//         ll level = a / 2;
//         ll ans = 0;
//         if (a == 1)
//             cout << b << endl;
//         else
//         {
//             if (level & 1)
//                 ans += 1;
//             ans += 2 * (a - 2);
//             while (level--)
//             {
//                 if (b < 0)
//                     break;
//                 ans += 2 * b;
//                 b -= 2;
//             }
//             cout << ans << endl;
//         }
//     }
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
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
        // ll a, b;
        // cin >> a >> b;
        ll p, q;
        cin >> p >> q;
        ll a = min(p, q);
        ll b = max(p, q);
        if (a == 1 || b == 1)
            cout << (a * b) << endl;
        else if (a == 2 && b == 2)
            cout << 4 << endl;
        else
        {
            ll x = a / 2;
            ll y = x;
            a -= 2;
            ll ans = 0;
            while (a >= 0)
            {
                ans += a;
                a -= 2;
            }

            while (x-- )
            {
                ans += b;
                b -= 2;
            }

            ans = ans * 2;
            // while (a >= 0 && b >= 0)
            // {
            //     ans += (a + b);
            //     a -= 2;
            //     b -= 2;
            // }
            // ans *= 2;
            if (a > 0)
                ans += a;
            // if (b == 1)
            //     ans += 1;
            // if(b>0)
            // ans+=b;

            if (y & 1)
                ans += 2*b;
            cout << ans << endl;
        }
        // ll p, q;
        // cin >> p >> q;
        // ll a = min(p, q);
        // ll b = max(p, q);
        // ll ans = a * ((a - 2) / 2);
        // ans += b * (b / 2);
        // ans *= 2;
        // ans += (a - 2) % 2;
        // ans += b % 2;
        // cout << ans << endl;
    }
}