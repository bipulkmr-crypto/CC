// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll n;
//     cin>>n;
//     ll arr[n];
//     ll i;
//     rep(i,n)cin>>arr[i];
//     sort(arr,arr+n);
//     reverse(arr,arr+n);
//     ll sum=0;
//     ll maxi=arr[0],mini=arr[0];
//     for(i=1;i<n;i++)
//     {
//         mini=arr[i];
//         sum+=(maxi-mini);
//     }
//     cout<<sum<<"\n";
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
ll dp[2001][2001];
ll arr[2001];
ll solve(ll l,ll r)
{
    if(l==r)
    return 0;
    else if(dp[l][r]!=-1)
    return dp[l][r];
    else 
    {
        ll ans=arr[r]-arr[l]+min(solve(l+1,r),solve(l,r-1));
        dp[l][r]=ans;
        return ans;
    }
}
int main()
{
    ll n;
    cin>>n;
    ll i;
    rep(i,n)cin>>arr[i];
    sort(arr,arr+n);
    memset(dp,-1,sizeof(dp));
    // for(i=0;i<n;i++)
    // {
    //     for(ll j=0;j<n;j++)
    //     {
    //         if(i==j)
    //         {
    //             dp[i][j]=0;
    //         }
    //         else 
    //         {
    //             dp[i][j]=(arr[j]-arr[i])+min(dp[i+1][j],dp[i][j-1]);
    //         }
    //     }
    // }
    ll ans=solve(0,n-1);
    cout<<ans<<endl;
}