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
const ll size = 3 * (1e5) + 1;
ll arr[size];
ll dp[size][2];
ll n, q;
ll solve(ll pos, ll parity)
{
    if (pos == n)
        return 0;
    else if(dp[pos][parity]!=-1)
    return dp[pos][parity];
    else 
    {
        ll ans=0;
        
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        // memset(dp, -1, sizeof(dp));
            
        cin >> n >> q;
        ll i;
        for(i=0;i<size;i++)
        {
            dp[i][0]=dp[i][1]=1;
        }
        rep(i, n) cin >> arr[i];
        ll ans = max(solve(0, -1), solve(0, 1));

        cout << ans << endl;
    }
}