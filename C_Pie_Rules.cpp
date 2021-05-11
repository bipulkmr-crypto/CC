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
ll arr[51];
// ll ans1 = 0, ans2 = 0;
// ll solve(ll pos,ll choice,ll person)
// {
//     if(pos==n-1)
//     {
//         if(person)
//         return arr[pos];
//         else
//         return

//     }
//     else
//     {
//         if(person)
//         {
//            ll val=max(solve(pos+1,    ))
//         }
//     }
// }
ll dp[51][2];
ll solve(ll pos, bool flag)
{
    if (pos == n - 1)
    {
        if (!flag)
            return arr[pos];
        else
            return 0;
    }
    else if(dp[pos][(int)flag]!=-1)
    {
        return dp[pos][int(flag)];
    }
    else
    {
        ll val;
        if (flag)
        {
            val = min(arr[pos] + solve(pos + 1, flag), solve(pos + 1, !flag));
        }
        else
        {
            val = max(arr[pos] + solve(pos + 1, true), solve(pos + 1, false));
        }
        dp[pos][int(flag)]=val;
        return val;
    }
}
int main()
{
    fast
    memset(dp,-1,sizeof(dp));
    cin >> n;
    
    int i;
    ll sum = 0;
    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll ans = max(solve(0, false), solve(0, true));

    // rep(i, n)
    // {
    //     sum += arr[i];
    // }
    cout << sum - ans << " " << ans << endl;
}