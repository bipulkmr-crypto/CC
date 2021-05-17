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
// int n, m;
// char arr[2001][2001];
// int dp[2001][2001];
// int dp1[2001][2001];
// int solve(int x, int y)
// {
//     if (x < 0 || y < 0 || x > n || y > m)
//         return 0;
//     else if (dp[x][y] != -1)
//         return dp[x][y];
//     else
//     {
//         ll ans = (arr[x][y] == '+') + max(solve(x + 1, y), solve(x, y + 1));
//         dp[x][y] = ans;
//         return ans;
//     }
// }
// int solve_min(int x, int y)
// {
//     if (x < 0 || y < 0 || x > n || y > m)
//         return 0;
//     else if (dp1[x][y] != -1)
//         return dp1[x][y];
//     else
//     {
//         ll ans = (arr[x][y] == '+') + min(solve(x + 1, y), solve(x, y + 1));
//         dp1[x][y] = ans;
//         return ans;
//     }
// }
// int main()
// {
//     cin >> n >> m;
//     int i, j;
//     memset(dp, -1, sizeof(dp));
//     memset(dp1, -1, sizeof(dp1));
//     rep(i, n)
//     {
//         rep(j, m)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     solve(0, 0);
//     solve_min(0, 0);
//     int mini = max(dp[1][0], dp[0][1]);
//     int mx = max(dp1[1][0], dp1[0][1]);
//     if (mx < mini)
//     {
//         cout << "Takahashi";
//     }
//     else if (mx > mini)
//     {
//         cout << "Aoki";
//     }
//     else
//         cout << "Draw";
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
int arr[2001][2001];
int n, m;
int dp[2001][2001];
int main()
{
    // int n, m;
    cin >> n >> m;
    int i, j;
    memset(dp, 0, sizeof(dp));
    rep(i, n)
    {
        rep(j, m)
        {
            char c;
            cin >> c;
            if (c == '+')
                arr[i][j] = 1;
            else
                arr[i][j] = -1;
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = m - 1; j >= 0; j--)
        {
            if ((i + j) % 2 == 0)
            {
                if (i < n - 1 && j < m - 1)
                    dp[i][j] = max(dp[i + 1][j] + arr[i + 1][j], dp[i][j + 1] + arr[i][j + 1]);
                else if (i < n - 1 && j >= m)
                {
                    dp[i][j] = max(dp[i + 1][j] + arr[i + 1][j], arr[i][j + 1]);
                }
                else
                    dp[i][j] = max(dp[i][j + 1] + arr[i][j + 1], arr[i + 1][j]);
            }
            else
            {
                if (i < n - 1 && j < m - 1)
                    dp[i][j] = min(dp[i + 1][j] - arr[i + 1][j], dp[i][j + 1] - arr[i][j + 1]);
                else if (i < n - 1 && j >= m)
                {
                    dp[i][j] = min(dp[i + 1][j] - arr[i + 1][j], arr[i][j + 1]);
                }
                else
                    dp[i][j] = min(dp[i][j + 1] - arr[i][j + 1], arr[i + 1][j]);
            }
        }
    }
    if (dp[0][0] > 0)
    {
        cout << "Takahashi";
    }
    else if (dp[0][0] < 0)
    {
        cout << "Aoki";
    }
    else
        cout << "Draw";
}