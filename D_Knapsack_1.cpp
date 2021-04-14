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
// ll weight[101];
// ll value[101];
// ll dp[101][101];
// ll knapsack(ll weight,ll val)
// {

// }
// int main()
// {
//     ll n,w;
//     cin>>n>>w;
//     ll i;
//     rep(i,n)
//     {
//         cin>>weight[i]>>value[i];
//     }
//     ll ans=knapsack(w,0);
//     cout<<ans<<endl;

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
unordered_map<ll,ll> dp;
vll weight; 
vll val;
ll knapsack(ll s,ll n)
{
    if(s==0||n==0)
    return 0;
    // if(n<0)
    // return 0;
    if(dp[s]!=0)
    {
        return dp[s];
    }
    if(weight[n-1]<=s)
    {
        return (dp[s]=max(val[n-1]+knapsack(s-weight[n-1],n-1),knapsack(s,n-1)));
    }
    else
    {
        return (dp[s]=knapsack(s,n-1));
    }
}
int main()
{
    ll s,n;
    cin>>n>>s;
    // vector<pair<ll,ll> > arr;
    weight.resize(n);
    val.resize(n);
    ll i;
    rep(i,n)
    {
        ll a,b;
        cin>>a>>b;
        weight[i]=a;
        val[i]=b;
    }
    ll j;
    // memset(dp,-1,sizeof(dp));
    ll ans=knapsack(s,n);
    cout<<ans<<endl;

}