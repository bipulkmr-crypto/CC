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
double dp[1 << 20];
int n;
double arr[20][20];
double calc(int prev, int j)
{
    int k = setbits(prev);
    ll val = k * (k - 1) / 2;
    double newprob = 0;
    for (int i = 0; i < n; i++)
    {
        if ((1 << i) & prev)
        {
            newprob += arr[i][j];
        }
    }

    return (newprob/val);
}
double solve(int mask)
{
    int alive = setbits(mask);
    if (alive == n)
        return 0;
    else if (dp[mask] < -0.9)
    {
        return dp[mask];
    }
    else
    {
        double ans = 0;
        int j;
        rep(j, n)
        {
            if (mask & (1 << j))
            {
                int prev_state = mask ^ (1 << j);
                double res = solve(prev_state);
                ans += res * (calc(prev_state, j));
            }
        }
        dp[mask] = ans;
        return ans;
    }
}
void still_single()
{

    cin >> n;
    memset(dp, -1, sizeof(dp));
    int i;
    int j;
    rep(i, n)
    {
        rep(j, n) cin >> arr[i][j];
    }
    // solve(0, (1 << (n)) - 1);
    rep(i, n)
    {
        double ans = solve(1 << i);
        cout << sp(10) << ans << ' ';
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}