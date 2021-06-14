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
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, n;
        cin >> n >> k;
        ll arr[n];
        ll i;
        ll dp[100001][101];
        ll prefix[100001][101];
        int j;
        ll b[k];
        rep(i, n) cin >> arr[i];
        rep(i, k)
        {
            b[j] = j + 1;
        }
        rep(i, n)
        {
            dp[i][0] = 0;
            prefix[i][0] = 0;
            for (j = 1; j < k; j++)
            {
                dp[i][j] = LLONG_MIN;
                prefix[i][j] = LLONG_MIN;
            }
        }
        dp[0][1] = arr[0] * b[0];
        prefix[0][1] = dp[0][1];
        for (i = 1; i < n; i++)
        {
            for (j = 1; j <= k; j++)
            {
                dp[i][j] = max(dp[i - 1][j], prefix[i - 1][j - 1] + arr[i] * b[j - 1]);
                dp[i][j] = max(dp[i][j], LLONG_MIN);
                prefix[i][j] = max(prefix[i - 1][j], dp[i][j]);
            }
        }
        ll ans = LLONG_MIN;
        for (i = 0; i < n; i++)
        {
            ans = max(ans, dp[i][k]);
        }
        cout << ans << endl;
    }
}
//this will give only partial as the for k=1;
// int main()
// {
//     int t;
//     cin >> t; while (t--)
//     {
//         int n, k; cin >> n >> k;
//         int arr[n];
//         int i;
//         bool flag = false;
//         rep(i, n)cin >> arr[i];
//         ll sum = 0;
//         ll ans = 0;
//         rep(i, n)
//         {
//             if (arr[i] > 0)flag = true;
//             sum = max((ll)arr[i], arr[i] + sum);
//             ans = max(ans, sum);
//         }
//         if (!flag)
//         {
//             cout << (*max_element(arr, arr + n)) << endl;
//             continue;
//         }
//         // ans = max(ans, sum);
//         cout << ans << endl;
//     }
// }