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
ll n;
vll arr;
ll dp[200001];
ll solve(ll val, ll pos)
{
    // cout<<pos<<" "<<val<<endl;
    if (val < 0 || pos >= n)
        return 0;
    else if (dp[pos] != -1)
        return dp[pos];
    else
    {
        ll val1 = 1 + solve(val + arr[pos], pos + 1);
        ll val2 = solve(val, pos + 1);
        dp[pos] = max(val1, val2);
        return dp[pos];
    }
}
int main()
{
    cin >> n;
    ll i;
    arr.resize(n);
    memset(dp, -1, sizeof(dp));
    rep(i, n) cin >> arr[i];
    ll ans;
    int pos = -1;
    rep(i, n)
    {
        if (arr[i] >= 0)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        cout << 0 << endl;
    ans = 1 + solve(arr[pos], pos + 1);
    cout << ans << endl;
}