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
ll arr[100001] = {0};
ll dp[100001] = {-1};
ll solve(ll i)
{
    if (i < 0)
        return 0;
    cout<<i<<endl;
    if (i == 1)
    {
        return abs(arr[0]-arr[1]);
    }
    if(i==2)
    {
        return abs(arr[0]-arr[2]);
    }
    if (dp[i] != -1)
        return dp[i];
    // ll ans = min(solve(i - 2), solve(i - 1));
    ll val1=abs(arr[i]-arr[i-2])+min(solve(i-2),solve(i-1));
    ll val2=abs(arr[i]-arr[i-1])+min(solve(i-1),solve(i-2));
    ll ans=min(val1,val2);
    dp[i] = ans;
    return ans;
}
int main()
{

    ll n;
    cin >> n;
    ll i;

    rep(i, n)
    {
        cin >> arr[i];
    }
    rep(i, n)
    cout<<arr[i]<<" ";
    cout << endl;
    ll ans = solve(n-1);
    cout << ans << endl;
    rep(i, n)
    cout<<dp[i]<<" ";
}