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
int n, m;
int dp[201][201];
int a[201];
int b[201];
int ans[201];
bool Check(const int &x)
{
    int i, j;
    rep(i, n)
    {
        rep(j, m) if (((a[i] & b[j]) | x) == x) goto NEXT;
        return 0;
    NEXT:;
    }
    return 1;
}
int main()
{
    cin >> n >> m;
    int i;
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int x;
    int j;
    int ans = (1 << 9) - 1;
    fd(i, 8, 0) Check((ans ^ (1 << i))) ? (ans ^= (1 << i)) : 0;
    cout << ans << endl;
    // for (i = 0; i < n; i++)
    // {
    //     int mn = INT_MAX;
    //     for (j = 0; j < m; j++)
    //     {
    //         dp[i][j] = a[i] & b[j];
    //         // mn=min(mn,dp[i][j]);
    //     }
    // }
    // ans[0] = *min_element(dp[0], dp[0] + m);
    // int k;
    // // ll ans=ans[0];
    // fu(i, 1, n - 1)
    // {
    //     int val = INT_MAX;
    //     rep(j, m)
    //     {
    //         rep(k, m)
    //         {
    //             val = min(val,dp[i - 1][j] | dp[i][k]);
    //         }
    //     }
    //     ans[i] = val;
    // }
    // ll y = ans[0];
    // rep(i, n - 1)
    // {
    //     y |= ans[i];
    // }
    // cout << y << endl;
}
// #include <bits/stdc++.h>
// #define ci const int &
// using namespace std;
// int n, m, p[210], d[210], ans;
// bool Check(ci x)
// {
//     for (int i = 1; i <= n; ++i)
//     {
//         for (int j = 1; j <= m; ++j)
//             if (((p[i] & d[j]) | x) == x)
//                 goto Next;
//         return 0;
//     Next:;
//     }
//     return 1;
// }
// int main()
// {
//     scanf("%d%d", &n, &m);
//     for (int i = 1; i <= n; ++i)
//         scanf("%d", &p[i]);
//     for (int i = 1; i <= m; ++i)
//         scanf("%d", &d[i]);
//     ans = (1 << 9) - 1;
//     for (int i = 8; i >= 0; --i)
//         Check(ans ^ (1 << i)) ? ans ^= (1 << i) : 0;
//     printf("%d", ans);
//     return 0;
// }