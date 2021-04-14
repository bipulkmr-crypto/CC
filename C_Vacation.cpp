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
// ll n;
// ll a[100001], b[100001], c[100001];
// ll dp[100001];
// ll solve(ll node, ll level)
// {
//     cout<<node<<" "<<level<<endl;
//     if (level == n)
//     {
//         return 0;
//     }
//     if(level == n-1)
//     {
//         if(node==0)
//         {
//             return max(b[level],c[level]);
//         }
//         else if(node==1)
//         {
//             return max(a[level],c[level]);
//         }
//         else
//         {
//             return(max(a[level],b[level]));
//         }
//     }
//     if(dp[level]!=-1)
//     {
//         return dp[level];
//     }
//     ll ans1=-1,ans2=-1,ans3=-1;
//     if(node==0)
//     ans1=a[level]+max(solve(1,level+1),solve(2,level+1));
//     else if(node==1)
//     ans2=b[level]+max(solve(2,level+1),solve(0,level+1));
//     else if(node==2)
//     ans3=c[level]+max(solve(0,level+1),solve(1,level+1));
//     dp[level]=max({ans1,ans2,ans3});
//     return dp[level];
// }
// int main()
// {
//     cin >> n;
//     ll i;
//     rep(i, n)
//     {
//         cin >> a[i] >> b[i] >> c[i];
//     }
//     // rep(i, n)cout<<a[i]<<" ";
//     ll visited[n];
//     memset(dp, -1, sizeof(dp));
//     ll ans = 0;
//     ans = max({solve(0, 0), solve(1, 0), solve(2, 0)});
//     cout<<ans<<endl;
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
int main()
{
    ll n;
    cin >> n;
    vll dp(3);
    for (ll day = 0; day < n; day++)
    {
        vll newdp(3, 0);
        ll i, j;
        vll arr(3);
        rep(i, 3)
        {
            cin >> arr[i];
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i != j)
                {
                    newdp[j] = max(dp[i] + arr[j], newdp[j]);
                }
            }
        }
        dp = newdp;
    }
    cout << max({dp[0], dp[1], dp[2]}) << endl;
}
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     vector<int> dp(3);
//     // dp[i] - the total cost such that we did activity i on the last considered day
//     for (int day = 0; day < n; ++day)
//     {
//         vector<int> new_dp(3, 0);
//         vector<int> c(3);
//         for (int i = 0; i < 3; ++i)
//         {
//             scanf("%d", &c[i]);
//         }
//         // int a, b, c - a lot of implementation
//         for (int i = 0; i < 3; ++i)
//         {
//             for (int j = 0; j < 3; ++j)
//             {
//                 if (i != j)
//                 {
//                     new_dp[j] = max(new_dp[j], dp[i] + c[j]);
//                 }
//             }
//         }
//         dp = new_dp;
//     }
//     printf("%d\n", max({dp[0], dp[1], dp[2]}));
// }