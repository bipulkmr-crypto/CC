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

void still_single()
{
    vll arr;
    ll dp[101][10005];
    memset(dp,0,sizeof(dp));
    int n;
    cin >> n;
    arr.resize(n);
    int i;
    int j;
    rep(i, n) cin >> arr[i];
    ll sum = 0;
    if(n==2)
    {
        cout<<max(arr[0],arr[1])<<endl;
        return ;
    }
    else if(n==1)
    {
        cout<<arr[0]<<endl;
        return ;
    }
    rep(i, n) sum += arr[i];
    rep(i,n+1)dp[i][0]=1;
    rep(i,sum+1)dp[0][i]=0;
    fu(i,1,n)
    {
        fu(j,1,sum)
        {
            dp[i][j]=dp[i-1][j];
            if(arr[i-1]<=j)
            {
                dp[i][j]|=dp[i-1][j-arr[i-1]];
            }
        }
    }
    ll ans=LLONG_MAX;
    for(i=sum/2;i>=0;i--)
    {
        if(dp[n][i]==1)
        {
            ans=sum-2*i;
            break;
        }
    }
    // cout<<max(sum-ans,ans)<<endl;
    cout<<(sum/2+ans)<<endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}