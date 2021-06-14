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
// #define size 1000001
// vector<bool> isprime(size, true);
// vector<ll> primes;
// void seive()
// {
//     ll i, j;
//     isprime[0] = isprime[1] = false;
//     for (i = 2; i * i < size; i++)
//     {
//         if (isprime[i])
//         {
//             for (j = i * i; j < size; j += i)
//             {
//                 isprime[j] = false;
//             }
//         }
//     }
//     for (ll i = 0; i < size; i ++)
//     {
//         if (isprime[i])
//         {
//             primes.pb(i);
//         }
//     }
// }
// ll coin[] = {2ll, 3ll, 5ll, 7ll};
// ll dp[size];
// ll solve(ll x)
// {
//     if (x == 0)
//         return 0;
//     else if (x < 0)
//         return 1e10;
//     else
//     {
//         ll mini = 1e10;
//         for (ll j = 0; j < 4; j++)
//         {
//             if (x >= coin[j])
//                 mini = min(1 + solve(x - coin[j]), mini);
//         }
//         if (mini >= x)
//         {
//             dp[x] = -1;
//         }
//         else
//             dp[x] = mini;
//         return dp[x];
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     memset(dp, -1, sizeof(dp));
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         solve(i);
//     }
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         // ll i, j;
//         cout << dp[n] << endl;
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
ll dp[1000001];
ll solve(ll x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x < 0)
        return 1e9;
    else if (dp[x] != -1)
        return dp[x];
    else
    {
        ll ans = 1 + min({solve(x - 2), solve(x - 3), solve(x - 5), solve(x - 7)});
        dp[x] = ans;
        return ans;
    }
}

int main()
{
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = solve(n);
        if (ans >= n)
        {
            dp[n] = -1;
            ans = -1;
        }
        cout << ans << endl;
    }
}