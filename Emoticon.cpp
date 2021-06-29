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
int count(string a, string b)
{
    int m = a.length();
    int n = b.length();

    int lookup[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; ++i)
        lookup[0][i] = 0;
    for (int i = 0; i <= m; ++i)
        lookup[i][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];
                 
            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}
void still_single()
{
    string s;
    cin >> s;
    int n = s.length();
    int i, j;
    ll ans = 0;
    //naive solution
    // rep(i, n)
    // {

    //     if (s[i] == 'K')
    //     {
    //         int cnt1 = 0, cnt2 = 0;
    //         for (j = i + 1; j < n; j++)
    //         {
    //             if (s[j] == 'E')
    //             {
    //                 cnt1++;
    //                 for (int k = j + 1; k < n; k++)
    //                 {
    //                     if (s[k] == 'K')
    //                         ans++;
    //                 }
    //             }
    //         }
    //         // ans += (cnt1 * cnt2);
    //         // break;
    //     }
    // }
    // cout << ans << endl;
    // DP solution
    //=======================================================================================================================
    // int dp[4][n + 1];
    // string b = "KEK";
    // // int i;
    // memset(dp, 0, sizeof(dp));
    // // int i;
    // fu(i, 0, n)
    // {
    //     dp[0][i] = 0;
    // }
    // fu(i, 0, 4)
    // {
    //     dp[i][0] = 1;
    // }

    // fu(i, 1, 3)
    // {
    //     fu(j, 1, n)
    //     {
    //         if (b[i - 1] == s[j - 1])
    //         {
    //             dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    //         }
    //         else
    //         {
    //             dp[i][j] = dp[i - 1][j];
    //         }
    //     }
    // }
    cout<<count(s,"KEK")<<endl;
    // cout<<dp[3][n]<<endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}