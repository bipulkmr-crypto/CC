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
// ll dp[250001];
//     ll n;
//     // ll sum;
// ll solve(ll sum)
// {
//     if (sum == 1)
//         return 1;
//     else if (sum % 2 == 1 && sum<=n)
//     return 1;
//     else if(sum % 2==1&&sum>n)
//     return 1;
//     else if(dp[sum]!=-1)
//     return dp[sum];
//     else
//     {
//         ll ans=solve(sum/2);
//         if(sum%4==0)
//         ans*=2;
//         dp[sum]=ans;
//         ans%=mod;
//         dp[sum]%=mod;
//         return ans;
//     }
// }
// int main()
// {


//     ll i;
//     cin >> n;
//     memset(dp, -1, sizeof(dp));
//     ll sum = (n * (n + 1)) / 2;
//     // dp[0] = 0;
//     // dp[1] = 1;
//     // for(i=2;i<=sum;i++)
//     // {
//     // if(i%2==0)
//     // {
//     //    dp[i]%=mod;
//     //     }
//     // }
//     //      dp[i]+=dp[i/2];
//     if (n % 4 == 0 || n % 4 == 3)
//     {
//         solve(sum);
//         cout << dp[sum] << endl;
//     }
//     else 
//     cout<<0<<endl;
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
int main()
{
    ll n;
    cin>>n;
    ll sum=(n*(n+1));
    if(sum%4!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    sum/=4;
    ll dp[sum+1][n+1];
    memset(dp,0,sizeof(dp));
    ll i;
    rep(i,n+1)
    {
        dp[0][i]=0;
    }
    rep(i,sum+1)
    dp[i][0]=0;
}