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
#define epsilon 1e-7
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
typedef long double ld;
#define double ld
#define gi(n) scanf(% d, &n)
double v;
// double solve(double c, double m, double p, int choice)
// {
//     if (choice == 2)
//     {
//         return p;
//     }
//     else if (choice == 1)
//     {
//         double x;
//         if (m - v >= 0)
//             x = m * solve(c + (0.5 * (m - v)), m - v, p + (0.5 * (m - v)), 0) + m * solve(c + (0.5 * (m - v)), m - v, p + (0.5 * (m - v)), 1) + m * solve(c + (0.5 * (m - v)), m - v, p + (0.5 * (m - v)), 2);
//         return x;
//     }
//     else if (choice == 0)
//     {
//         double x;
//         if (c - v >= 0)
//         {
//             x = c * solve(c - v, m + ((c - v) * 0.5), p + ((c - v) * 0.5), 0) + c * solve(c - v, m + ((c - v) * 0.5), p + ((c - v) * 0.5), 1) + c * solve(c - v, m + ((c - v) * 0.5), p + ((c - v) * 0.5), 2);
//         }
//         return x;
//     }
//     else
//         return 0.0;
// }
double solve(double c, double m, double p, int race)
{
    if (p <= 1e-7)
        return 0.00;
    double ans = (double)race * p;
    if (c > epsilon && m > epsilon)
    {
        // double ans;
        double x = min(c, v);
        ans += c * solve(c - x, m + x / 2, p + x / 2, race + 1);
        x = min(m, v);
        ans += m * solve(c + x / 2, m - x, p + x / 2, race + 1);
    }
    else if (c > epsilon)
    {
        double x = min(c, v);
        ans += c * solve(c - x, m , p + x, race + 1);
    }
    else if (m > epsilon)
    {
        double x = min(m, v);
        ans += m * solve(c , m - x, p + x , race + 1);
    }
    return ans;
}
void still_single()
{
    double c, p, m;
    cin >> c >> m >> p >> v;
    double ans = solve(c, m, p, 1);
    cout << sp(15) << ans << endl;
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