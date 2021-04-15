#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef  int ll;
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
vector<ll> price;
vector<ll> pages;
ll dp[1001][100001];
ll solve(ll n, ll val)
{
    if (n == 0 || val == 0)
    {
        return 0;
    }
    else if(dp[n][val]!=0)
    return dp[n][val];
    else
    {
        ll ans = -1;
        if(price[n]<=val)
        ans = max(pages[n] + solve(n - 1, val - price[n]), solve(n - 1, val));
        else
        ans=solve(n-1,val);
        dp[n][val]=ans;
        return ans;
    }
}
int main()
{
    ll n;
    cin >> n;
    ll val;
    cin >> val;
    price.resize(n + 1, 0);
    pages.resize(n + 1, 0);
    memset(dp,0,sizeof(dp));
    ll i, j;
    for (i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a;
        price[i + 1] = a;
    }
    fu(i, 1, n)
    {
        cin >> pages[i];
    }
    ll ans = solve(n, val);
    cout << ans << endl;
}