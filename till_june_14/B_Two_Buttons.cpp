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
int convert(int m, int n)
{
    if (m == n)
        return 0;

    // only way is to do
    // -1 (m - n) times
    if (m > n)
        return m - n;

    // not possible
    if (m <= 0 && n > 0)
        return -1;

    // n is greater and n is odd
    if (n % 2 == 1)

        // perform '-1' on m
        // (or +1 on n)
        return 1 + convert(m, n + 1);

    // n is even
    else
        // perform '*2' on m
        // (or n/2 on n)
        return 1 + convert(m, n / 2);
}
// int solve(int a, int b)
// {
//     if (a == b)
//         return 0;
//     else if (a < b)
//     {
//         return (1 + solve(a * 2, b));
//     }
//     else
//     {
//         return (1 + solve(a - 1, b));
//     }
//     // else
//     // {
//     //     int ans = 1;
//     //     if (a % 2)
//     //     {
//     //         ans += min(solve(a / 2, b), solve(a - 1, b));
//     //     }
//     //     else
//     //     {
//     //         ans += solve(a - 1, b);
//     //     }
//     //     return ans;
//     // }
// }
int solve(int n, int m)
{
    if (n == m)
        return 0;
    if (n > m)
        return n - m;
    if (n <= 0 && m > 0)
        return -1;
    if (m % 2)
        return (1 + solve(n, m + 1));
    else
        return (1 + solve(n, m / 2));
}
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mini = min(a, b);
    // int ans = solve(mx, mini);
    // int ans = min(solve(a, b), solve(b, a));
    int ans=solve(a,b);
    cout << ans << endl;
}
