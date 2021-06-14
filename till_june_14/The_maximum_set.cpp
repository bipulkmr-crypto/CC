#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
// #define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    for (int i = 0; i < n; i++) {
        int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j-1] < a[i] && a[i] < d[j])
            d[j] = a[i];
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}
void still_single()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int i;
    rep(i,n)cin>>arr[i];
    reverse(all(arr));
    ll ans=lis(arr);
    // vector<ll>dp(n+1,-INF);
    // ll arr[n];
    // ll i;
    // rep(i,n)cin>>arr[i];
    // dp[0]=INF;
    // rep(i,n)
    // {
    //     int j=upper_bound(all(dp),arr[i])-dp.begin();
    //     if(dp[j-1]>arr[i]&&arr[i]>dp[j])
    //     {
    //         dp[j]=arr[i];
    //     }
    // }
    // int ans=0;
    // rep(i,n)
    // {
    //     if(dp[i]>-INF)
    //     {
    //         ans=i;
    //     }
    // }
    cout<<ans<<endl;
    //O(n2)gives partial tle
    // int arr[n];
    // int i;rep(i,n)cin>>arr[i];
    // int dp[n]={1};
    // rep(i,n)dp[i]=1;
    // for(i=1;i<n;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         if(arr[i]<arr[j]&&dp[i]<dp[j]+1)
    //         dp[i]=dp[j]+1;
    //     }
    // }
    // int ans=INT_MIN;
    // rep(i,n)ans=max(ans,dp[i]);
    // cout<<ans<<endl;
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}