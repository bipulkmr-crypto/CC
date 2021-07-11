#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
int k;
// ll cnt = 0;
// // ll dp[1e3 + 1][1e3 + 1];
// void solve(int a, int b)
// {
//     if (a == 0 && b < k)
//     {
//         return;
//     }
//     else
//     {
//         if (b >= k && a > 0)
//         {
//             solve(a - 1, b);
//             solve(a, b - k);
//             cnt += 2;
//             cnt %= mod;
//         }
//         else if (b >= k)
//         {
//             cnt += 1;
//             solve(a, b - k);
//             cnt %= mod;
//         }
//         else
//         {
//             cnt += 1;
//             solve(a - 1, b);
//             cnt %= mod;
//         }
//     }
// }
ll dp[100001];
ll sum[100001];
void pre()
{
    int i, j;
    dp[0] = 1;
    dp[1] = 1;
    if (k == 1)
        dp[1] += 1;
    for (i = 2; i <= (int)1e5; i++)
    {
        dp[i] = dp[i - 1];
        int cnt = 0;
        if (i >= k)
            dp[i] += dp[i - k];
        // dp[i] += (cnt * dp[i - 1] % mod);
        dp[i] %= mod;
    }
    sum[0] = 0;
    fu(i, 1, 100000)
    {
        sum[i] = sum[i - 1] + dp[i];
        sum[i] %= mod;
    }
}
void still_single()
{
    int a, b;
    cin >> a >> b;
    ll ans = sum[b] - sum[a - 1];
    ans = (ans + mod) % mod;
    cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    cin >> k;
    memset(dp, 0, sizeof(dp));
    pre();
    while (t--)
    {
        // cnt = 0;b
        still_single();
    }
    return 0;
}