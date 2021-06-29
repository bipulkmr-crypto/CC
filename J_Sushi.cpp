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
// int arr[305];
ll n;
double dp[305][305][305];
double solve(ll one, ll two, ll three)
{
    if (one < 0 || two < 0 || three < 0)
    {
        return 0;
    }
    if (one == 0 && two == 0 && three == 0)
        return 0;
    else if (dp[one][two][three] > 0)
    {
        return dp[one][two][three];
    }
    else
    {
        double exp_val = n + one * solve(one - 1, two, three) + two * solve(one + 1, two - 1, three) +
                         three * solve(one, two + 1, three - 1);
        double rem=one+two+three;
        double ans=exp_val/rem;
        dp[one][two][three]=ans;
        return ans;
    }
}
void still_single()
{
    // int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    mll m;
    int i;
    rep(i, n)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    double ans = solve(m[1], m[2], m[3]);
    cout << sp(10) << ans << endl;
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