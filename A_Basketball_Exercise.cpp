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
ll dp[100005][2];
ll a[100005];
ll b[100005];
int n;
ll solve(ll pos, ll choice)
{
    if (pos >= n)
        return 0;
    else if (dp[pos][choice] != -1)
        return dp[pos][choice];
    else
    {
        ll ans = 0;
        if (choice ^ 1)
        {
            ans = max(b[pos] + solve(pos + 1, choice ^ 1), solve(pos + 1, choice));
        }
        else
            ans = max(a[pos] + solve(pos + 1, choice ^ 1), solve(pos + 1, choice));
        dp[pos][choice] = ans;
        return ans;
    }
}
void still_single()
{
    // int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    int i;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll sum = 0;
    ll ans = max(solve(0, 0), solve(0, 1));
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}