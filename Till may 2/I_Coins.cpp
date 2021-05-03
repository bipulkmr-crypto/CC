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
// double dp[3000][3000];
// double p[3000];
// double solve(ll n, ll j)
// {
//     if (n == 0)
//     {
//         dp[0][0] = 1.0;
//     }
//     if ()
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     double arr[n];
//     ll i;

//     memset(dp, -1, sizeof(dp));
//     rep(i, n)
//             cin >>
//         arr[i];
//     ll j;
//     double ans = 0;
//     for (i = (n + 1) / 2; i <= n; i++)
//     {
//         ans += solve(n, i);
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0);
// #define ll long long int
// #define f(i, x, n) for (long long int i = x; i < n; i++)
// #define fr(i, x, n) for (long long int i = n - 1; i >= x; i--)
// #define pb push_back
// #define mp make_pair
// #define mod 1000000007

// int n;
// double p[3000], dp[3000][3000];

// double solve(int i, int cnt)
// {

//     if (cnt < 0 || n - i < cnt)
//         return 0;

//     if (i == n - 1)
//     {
//         if (cnt == 0)
//             return (1.0 - p[i]);
//         else
//             return p[i];
//     }

//     if (dp[i][cnt] == -1)
//     {
//         dp[i][cnt] = p[i] * solve(i + 1, cnt - 1) + (1.0 - p[i]) * solve(i + 1, cnt);
//     }

//     return dp[i][cnt];
// }

// int main()
// {
//     // fast_io

//     cin >> n;
//     f(i, 0, n) cin >> p[i];

//     memset(dp, -1, sizeof(dp));

//     double ans = 0;
//     f(i, n / 2 + 1, n + 1)
//     {
//         ans += solve();
//     }
//     cout << ans << endl;
//     // cout<<fixed<<setprecision(15)<<ans<<endl;

//     return 0;
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
    ll i;
    double arr[n+1]={0.0};
    rep(i,n)
    {
        cin>>arr[i+1];
    }
    double dp[n+1][n+1];
    memset(dp,0.0,sizeof(dp));
    ll j;
    dp[0][0]=1.0;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                dp[i][j]=(1-arr[i])*dp[i-1][0];
            }
            else
            {
                dp[i][j]=dp[i-1][j-1]*arr[i]+(1.0-arr[i])*dp[i-1][j];
            }
        }
    }
    double ans=0.0;
    for(i=(n+1)/2;i<=n;i++)
    {
        ans+=dp[n][i];
    }
    cout<<setprecision(10)<<fixed<<ans<<endl;
}