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
// map<pair<string,string> ,ll> dp;
string dp[3001][3001];
string solve(string x,string y,ll n,ll m)
{
    // ll n=x.length();
    // ll m=y.length();
    if(m==0||n==0)
    return "";
    // if(dp[{x,y}]!)
    if(dp[n][m]!="*")
    return dp[n][m];
    else 
    {
        ll ans=0;

        if(x[n-1]==y[m-1])
        {
            return (x[n-1]+solve(x,y,n-1,m-1));
        }
        else
        {
            // string a=solve(x.substr(n-1),y);
            // string b=solve(x,y.substr(m-1));
            string a=solve(x,y,n-1,m);
            string b=solve(x,y,n,m-1);
            if(a.length()>b.length())
            return (dp[n][m]=a);
            else
            {
                return (dp[n][m]=b);
            }
        }
    }
}
int main()
{
    string x,y;
    cin>>x>>y;
    ll i;
    // memset(dp,"*",sizeof(dp));
    for(i=0;i<3000;i++)
    {
        for(ll j=0;j<3000;j++)
        {
            dp[i][j]="*";
        }
    }
    string ans=solve(x,y,x.length(),y.length());
    reverse(all(ans));
    cout<<ans<<endl;
}