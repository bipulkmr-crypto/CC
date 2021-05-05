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
// vector<ll> arr;
// ll dp[10001];
// ll n;
// ll k;
// ll solve(ll x)
// {
//     if (x >= (n-k))
//         return 0;
//     else if (dp[x] != -1)
//         return dp[x];
//     else
//     {
//         ll ans = 0;
//         if((x+k)<n)
//         ans = max(arr[x] + solve(x + k), solve(x + k));
//         else ans=arr[x];
//         dp[x] = ans;
//         return ans;
//     }
// }
// int main()
// {
//     ll t;
//     ll k = 1;
//     cin >> t;
//     while (t--)
//     {

//         cin >> n;
//         cin >> k;
//         memset(dp, 0, sizeof(dp));
//         arr.resize(n);
//         ll i;
//         rep(i, n) cin >> arr[i];
//         ll mx = LLONG_MIN;
//         for (ll i = 0; i < n; i++)
//         {
//             // dp[i]=arr[i];
//             for(ll j=i+k;j<n;j+=k)
//             {
//                 if(arr[j]>0)
//                 dp[i]+=arr[j];
//             }
//         }
//         // cout << "Case " << k << ": " << ans << endl;
//         mx=*max_element(dp,dp+n);
//         cout << mx << endl;
//         k++;
//     }
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
vector<ll> arr;
ll dp[10001];
ll n, k;
ll solve(ll i)
{
    if (i >= n)
        return 0;
    else if (dp[i] != -1)
        return dp[i];
    else
    {
        // ll val = (arr[i] > 0) ? arr[i] : 0;
        // val += solve(i + k+1);
        ll ans = max(arr[i]+solve(i+k+1), solve(i + 1));
        dp[i] = ans;
        return ans;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        // ll n, k;
        cin >> n >> k;
        memset(dp, -1, sizeof(dp));
        ll i;
        arr.resize(n);
        rep(i, n) cin >> arr[i];
        ll ans = solve(0);
        cout<<ans<<endl;
    }
}
