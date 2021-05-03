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
vector<vector<ll>> arr;
ll dp[100001];
ll solve(ll i)
{
    if (arr[i].size() == 0)
        return 0;
    else if(dp[i]!=-1)
    {
        return dp[i];
    }
    else
    {
        ll ans = 0;
        for (ll j = 0; j < arr[i].size(); j++)
        {
            ans = max(1 + solve(arr[i][j]), ans);
            dp[i]=ans;
        }
        return ans;
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    arr.resize(n+1);
    ll i;
    memset(dp,-1,sizeof(dp));
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        arr[a].pb(b);
    }
    ll ans = -1;
    for (i = 1; i <= n; i++)
    {
        ans = max(solve(i), ans);
    }
    cout << ans << endl;
}