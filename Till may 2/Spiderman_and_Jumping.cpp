// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// ll arr[200001] = {0};
// ll dp[200001] = {0};
// ll n;
// #define INF 1e13;
// ll solve(ll i)
// {
//     if (i >= n)
//         return 0;
//     // cout<<i<<" "<<dp[i]<<endl;
//     if (dp[i] != -1)
//         return dp[i];
//     ll ans = INF;
//     ans = abs(arr[i] - arr[i + 1]) + min(ans, solve(i + 1));
//     for(ll j=1;(i+j)<n;j*=2)
//     {
//         ans=min(ans,abs(arr[i]-arr[i+j])+solve(i+j));
//     }
//     // while (i*2 < n)
//     // {
//     //     ans = min(ans, abs(arr[i] - arr[i * 2]) + solve(i * 2));
//     //     i *= 2;
//     // }
//     dp[i] = ans;
//     return dp[i];
// }
// int main()
// {
//     cin >> n;
//     ll i;
//     memset(dp, -1, sizeof(dp));
//     rep(i, n)
//     {
//         cin >> arr[i+1];
//     }
//     ll ans = solve(1);
//     cout << ans << endl;
// }
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

#define INF 1e13;

int main()
{
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    ll arr[200001] = {0};
    vll dp(200001, LLONG_MAX);
    ll n;
    cin >> n;
    ll i;
    fu(i, 1, n)
    {
        cin >> arr[i];
    }
    dp[1]=0;
    // memset(dp,-1,sizeof(dp));
    for (i = 1; i <= n; i++)
    {
        if (dp[i] == LLONG_MAX)
        {
            continue;
        }
        for (ll j = 1; (i + j) <= n; j<<=1)
        {
            ll ans = min(dp[i + j], dp[i] + abs(arr[i + j] - arr[i]));
            dp[i + j] = ans;
        }
    }
    cout << dp[n] << endl;
    // }
}