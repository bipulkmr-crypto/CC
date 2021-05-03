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
ll arr[100001];
ll dp[100001];
    ll n;
ll solve(ll i)
{
    if(i>=n)
    return 0;
    if(dp[arr[i]]!=-1)
    {
        return dp[arr[i]];
    }
    if(arr[i]>0)
    dp[arr[i]]=arr[i]+max(solve(i+2),solve(i+3));
    else 
    dp[arr[i]]=max(solve(i+2),solve(i+3));
    return dp[arr[i]];
}
int main()
{

    cin>>n;
    ll i;
    rep(i,n)
    cin>>arr[i];
    bool flag = true;
    rep(i,n)
    {
        if(arr[i]>0)
        {
            flag=false;
            break;
        }
        
    }
    if(flag)
    {
        cout<<-1<<endl;
        return 0;
    }
    
    memset(dp,-1,sizeof(dp));
    ll j;
    ll ans=solve(0);
    for(i=1;i<n;i++)
    {
        ans=max(ans,solve(i));
    }
    cout<<ans<<endl;
}