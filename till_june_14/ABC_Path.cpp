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
int dp[51][51];
int arr[51][51];
int h, w;
ll solve(int i,int j,int parent)
{
    if(i<0||i>=h||j<0||j>w||((arr[i][j]-parent)!=1))
    return INT_MAX;
    else if(dp[i][j]!=-1)
    return dp[i][j];
    else 
    {
        int ans=INT_MAX;
        ans=min(ans,solve())
        
        
    }
}
int main()
{
    cin >> h >> w;
    int i, j;
    memset(dp,-1,sizeof(dp));
    rep(i, h)
    {
        rep(j, w) cin >> arr[i][j];
    }
    int ans=INT_MAX;
    rep(i,h)
    {
        rep(j,w)
        {
            if(arr[i][j]==65)
            {
                ans=min(solve(i,j,arr[i][j]-1),ans);
            }
        }
    }
    cout<<ans<<endl;
}