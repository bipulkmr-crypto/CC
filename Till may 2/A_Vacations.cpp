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
// ll dp[101];
// ll arr[101];
// ll n;
// ll solve(ll task, ll pos)
// {
//     if (pos == n - 1)
//     {
//         if (arr[pos] == 3)
//         {
//             return 0;
//         }
//         else
//         {
//             if (arr[pos] != task)
//                 return 0;
//             else
//             {
//                 return 1;
//             }
//         }
//     }
//     else
//     {
//         ll j;
//         ll ans = 0;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] == 0)
//                 ans += 1;
//             else
//             {
//                 ans += (min(solve(2), solve(3)));
//             }
//         }
//         return ans;
//     }
// }
// int main()
// {
//     cin >> n;
//     // memset(dp, -1, sizeof(dp));
//     ll i;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     ll ans = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += 1;
//         }
//         else
//         {
//             if (arr[i] == 3)
//             {
//                 ans += min(solve(1), solve(2));
//             }
//         }
//     }
//     cout << ans << endl;
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
vll arr;
ll n;
ll dp[101][4];
ll solve(ll pos, ll prevtask)
{
    if (pos >= n)
        return 0;
    else if (pos == n - 1)
    {
        if (arr[pos] == prevtask && arr[pos] != 3)
        {
            return 1;
        }
        else if (arr[pos] == 0)
        {
            return 1;
        }
        else
            return 0;
    }
    else if (dp[pos][prevtask] != -1)
        return dp[pos][prevtask];
    else
    {
        ll ans = 0;
        if (arr[pos] == 0)
            ans += 1 + solve(pos + 1, 0);
        else if (arr[pos] != prevtask && arr[pos] != 3)
        {
            ans = solve(pos + 1, arr[pos]);
        }
        else if (arr[pos] == 3)
        {
            if (prevtask == 0)
                ans = min(solve(pos + 1, 2), solve(pos + 1, 1));
            else if (prevtask == 1)
                ans = min(solve(pos + 1, 2), 1 + solve(pos + 1, 1));
            else if (prevtask == 2)
                ans = min(solve(pos + 1, 1), 1 + solve(pos + 1, 2));
            else
                ans = min(solve(pos + 1, 2), solve(pos + 1, 1));
        }
        else
            ans = 1 + solve(pos + 1, 0);
        dp[pos][prevtask] = ans;
        return ans;
    }
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    arr.resize(n);
    ll i;
    rep(i, n) cin >> arr[i];
    ll ans = 0;
    if (arr[0] == 0)
        ans += 1;
    ans += solve(1, arr[0]);
    cout << ans << endl;
}