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
// vector<vector<ll>> arr;
// vector<vector<ll>> dp;
// ll n, m;
// ll solve(ll i, ll j)
// {
//     if(j<0||i>=n||j>=m||i<0)
// 		return 0;
//     // if (i == n)
//     //     return 0;
//     // if (j == -1 || j == m)
//     //     return 0;
//     // if (i == n - 1&&j>0&&j<m-1)
//     //     return max({arr[i][j],arr[i][j-1],arr[i][j+1]});
//     // if(i==n-1&&j==0)
//     // {
//     //     return max(arr[i][j],arr[i][j+1]);
//     // }
//     // if(i==n-1&&j==m-1)
//     // return max(arr[i][j],arr[i][j-1]);
//     // cout<<arr[i][j]<<" ";
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     // if (j == 0)
//     // {
//     //     dp[i][j] = arr[i][j] + max(solve(i + 1, j + 1), solve(i + 1, j));
//     //     return dp[i][j];
//     // }
//     // if (j == m - 1)
//     // {
//     //     dp[i][j] = arr[i][j] + max(solve(i + 1, j), solve(i + 1, j - 1));
//     //     return dp[i][j];
//     // }
//     dp[i][j] = arr[i][j] + min({solve(i + 1, j), solve(i + 1, j - 1), solve(i + 1, j + 1)});
//     return dp[i][j];
//     // if (i == n - 1 && j == m - 1)
//     //     return arr[i][j];
//     // if (dp[i][j] != -1)
//     //     return dp[i][j];
//     // if (i < n - 1 && j < m - 1)
//     // {
//     //     dp[i][j] = arr[i][j] + max({solve(i + 1, j), solve(i + 1, j - 1), solve(i + 1, j + 1)});
//     //     return dp[i][j];
//     // }
//     // else if(i==n-1)
//     // {
//     //     dp[i][j]=arr[i][j]+solve(i,j+1);
//     //     return dp[i][j];
//     // }
//     // else 
//     // {
//     //     dp[i][j]=arr[i][j]+solve(i+1,j);
//     //     return dp[i][j];
//     // }
//     // if(i==m-1)
//     // {
//     //     if(j==0)
//     //     {
//     //         return max(arr[i][j])
//     //     }
//     // }
// }
// int main()
// {
//     // ll t;
//     // cin >> t;
//     // while (t--)
//     {
//         cin >> n >> m;
//         ll i, j;
//         arr.resize(n);
//         dp.resize(n);

//         for (i = 0; i < n; i++)
//         {
//             arr[i].resize(m);
//             dp[i].resize(m);
//         }
//         // memset(dp, -1, sizeof(dp));
//         rep(i, n)
//         {
//             rep(j, m)
//             {
//                 dp[i][j] = -1;
//             }
//         }
//         for (i = 0; i < n; i++)
//         {
//             rep(j, m)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         ll ans = solve(0, 0);
//         ans = min(solve(0, m - 1), ans);
//         for (i = 1; i < m - 1; i++)
//         {
//             ans = min(ans, solve(0, i));
//         }
//         // rep(i,n)
//         // {
//         //     rep(j, m)
//         //     cout<<dp[i][j]<<" ";
//         //     cout<<endl;
//         // }
//         // rep(i, n)
//         // {
//         //     rep(j, m)
//         //     {
//         //         if (i == 0 ||)
//         //     }
//         // }
//         cout << ans << endl;
//     }
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define INF 1e10;
    ll n,m;
ll arr[100][100];
ll dp[100][100];
ll solve(ll i,ll j)
{
    if(i>=n||i<0||j>=m||j<0)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ll temp=arr[i][j]+min(solve(i+1,j-1),min(solve(i+1,j),solve(i+1,j+1)));
    dp[i][j]=temp;
    return temp;
}
int main()
{

    cin>>n>>m;
    ll i,j;
    memset(dp,-1,sizeof(dp));
    rep(i,n)
    {
        rep(j,m)
        {
            cin>>arr[i][j];
        }
    }
    ll ans=solve(0,0);
    // for(i=0;i<m;i++)
    // {
    //      ans=min(solve(0,i),ans);
    // }
    cout<<ans<<endl;
}
