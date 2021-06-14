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
// int gcd(int a, int b, int &x, int &y)
// {
//     if (b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     int x1, y1;
//     int d = gcd(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }

// bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g)
// {
//     g = gcd(abs(a), abs(b), x0, y0);
//     if (c % g)
//     {
//         return false;
//     }

//     x0 *= c / g;
//     y0 *= c / g;
//     if (a < 0)
//         x0 = -x0;
//     if (b < 0)
//         y0 = -y0;
//     return true;
// }
// ll dp[1000];
// ll solve(ll x)
// {
//     if (x == 0)
//         return 0;
//     else if (x < 0)
//         return 1e13;
//     else if (dp[x] != -1)
//         return dp[x];
//     else
//     {
//         // ll ans = 1 + min(x - 10, x - 12);
//         dp[x] = 1 + min(solve(x - 10), solve(x - 12));
//         return dp[x];
//     }
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         if (n % 2 == 0)
//         {
//             cout << "-1" << endl;
//             continue;
//         }
//         memset(dp, -1, sizeof(dp));
//         ll arr[2];
//         // arr[0] = 10;

//         // arr[1] = 12;
//         // ll i;
//         // ll dp[n + 1];
//         // int x, y, g;
//         // if (find_any_solution(5, 6, n / 2, x, y, g))
//         // {
//         //     cout << -1 << endl;
//         //     continue;
//         // }
//         // memset(dp, 0, sizeof(dp));
//         // if (n >= 10)
//         //     dp[10] = 1;
//         // if (n > 12)
//         //     dp[12] = 1;

//         // for (i = 1; i <= n; i++)
//         // {
//         //     for (ll j = 0; j < 2; j++)
//         //     {
//         //         ll left = i - arr[j];
//         //         if (left >= 0)
//         //         {
//         //             dp[i] = dp[left] + 1;

//         //         }
//         //     }
//         // }
//         solve(n);
//         if (dp[n] <=n)
//             cout << dp[n] << endl;
//         else
//             cout << -1 << endl;
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
ll n;
ll dp[160];
ll solve(ll x)
{
    if (x == 0)
        return 0;
    else if (x < 0)
        return 1e9;
    else if (dp[x] != -1)
        return dp[x];
    else
    {
        ll ans = 1 + min(solve(x - 10), solve(x - 12));
        dp[x] = ans;
        return ans;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        memset(dp, -1, sizeof(dp));
        ll ans = solve(n);
        if (ans >= n)
            cout << -1 << endl;
        //    solve(n);
        else
            cout <<ans << endl;
    }
}