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
ll n,k;
ll arr[100001];
ll dp[1000001];
ll solve(ll i)
{
    if(i==0)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    ll ans=abs(arr[i]-arr[i-1])+solve(i-1);
    for(ll j=i-2;j>=i-k&&j>=0;j--)
    {
        ans=min(ans,abs(arr[i]-arr[j])+solve(j));
    }
    dp[i]=ans;
    return ans;
}
int main()
{
    cin>>n>>k;
    ll i;
    rep(i,n)
    {
        cin>>arr[i];
    }
    // ll ans=0;

    memset(dp,-1,sizeof(dp));
    // dp[0]=0;
    // for(i=0;i<n;i++)
    // {
    //     // if(i!=0)
    //     // dp[i]=1e13;
    //     for(ll j=i+1;j<i+k+1;j++)
    //     {
    //         if(j<n)
    //         {
    //             dp[i]=min(abs(arr[i]-arr[j])+dp[j],dp[i]);
    //         }
    //     }
    // }
    ll ans=solve(n-1);
    cout<<ans<<endl;
}