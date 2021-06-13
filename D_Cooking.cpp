// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define fast                          \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);
// // // #define mod 1000000007
// // // #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// // // #define mod9 1000000009
// // // #define mod7 1000000007
// // // #define INF 1e18
// // // #define sp(y) fixed << setprecision(y)
// // // #define vi vector<int>
// // // #define setbits(x) __builtin_popcountll(x)
// // // #define zerobits(x) __builtin_ctzll(x)
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int, int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long, long long>
// // // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int, int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s, x) (s.find(x) != s.end())
// // // #define cpresent(s, x) (find(all(s), x) != s.end())
// // // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(), v.end()
// // // #define ss second
// // // #define rep(i, n) for (i = 0; i < n; i++)
// // // #define fu(i, a, n) for (i = a; i <= n; i++)
// // // #define fd(i, n, a) for (i = n; i >= a; i--)
// // // #define gi(n) scanf(% d, &n)
// // // #define int ll
// // // void still_single()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     vll arr;
// // //     int i;
// // //     arr.resize(n + 1);
// // //     int j;
// // //     rep(i, n) cin >> arr[i];
// // //     if (n == 1)
// // //     {
// // //         cout << arr[0] << endl;
// // //         return;
// // //     }
// // //     if (n == 2)
// // //     {
// // //         cout << max(arr[0], arr[1]) << endl;
// // //         return;
// // //     }
// // //     bool dp[105][10010];
// // //     int sum = 0;
// // //     rep(i, n) sum += arr[i];
// // //     rep(i, n)
// // //     {
// // //         dp[i][0] = true;
// // //     }
// // //     rep(i, 10010)
// // //     {
// // //         dp[0][i] = false;
// // //     }
// // //     dp[0][0] = true;
// // //     // fu(i,1,n)
// // //     // {
// // //     //     fu(j,1,10010)
// // //     //     {
// // //     //         if(arr[i]<=j)
// // //     //         {
// // //     //             dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
// // //     //         }
// // //     //         else
// // //     //         dp[i][j]=dp[i-1][j];
// // //     //     }
// // //     // }
// // //     for (int i = 0; i <= n; i++)
// // //     {
// // //         for (int j = 0; j <= sum; j++)
// // //         {
// // //             if (j == 0)
// // //             {
// // //                 dp[i][j] = 1;
// // //             }
// // //             else if (i == 0)
// // //             {
// // //                 dp[i][j] = 0;
// // //             }
// // //             else
// // //             {
// // //                 dp[i][j] = (j >= arr[i - 1]) ? dp[i - 1][j] | dp[i - 1][j - arr[i - 1]] : dp[i - 1][j];
// // //             }
// // //         }
// // //     }
// // //     // int search = sum / 2;
// // //     // int ans = INT_MAX;
// // //     // rep(i, sum + 1)
// // //     // {
// // //     //     if (dp[n][i])
// // //     //         ans = min(ans, max(i, sum - i));
// // //     // }
// // //     // cout << ans << endl;
// // //     for (int temp = ceil(sum * 1.0 / 2); temp <= sum; temp++)
// // //     {
// // //         if (dp[n][temp])
// // //         {
// // //             cout << temp;
// // //             break;
// // //         }
// // //     }
// // // }
// // // /*Don't just sit and hope that God will solve this
// // //   fucking do some	thing, try to observe or solve it a different way.
// // //   Use that pen and paper.
// // //   If nothing works take a deep breath and start again*/
// // // signed main()
// // // {
// // //     fast int t = 1;
// // //     // cin >> t;
// // //     while (t--)
// // //     {
// // //         still_single();
// // //     }
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// // #define mod9 1000000009
// // #define mod7 1000000007
// // #define INF 1e18
// // #define sp(y) fixed << setprecision(y)
// // #define vi vector<int>
// // #define setbits(x) __builtin_popcountll(x)
// // #define zerobits(x) __builtin_ctzll(x)
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int, int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long, long long>
// // #define sii set<int>
// // #define sll set<long long>
// // #define vii vector<int>
// // #define vll vector<long long>
// // #define vll vector<long long>
// // #define mii map<int, int>
// // #define mll map<long long, long long>
// // #define lob lower_bound
// // #define upb upper_bound
// // #define ret return
// // #define present(s, x) (s.find(x) != s.end())
// // #define cpresent(s, x) (find(all(s), x) != s.end())
// // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // #define ff first
// // #define all(v) v.begin(), v.end()
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // #define int ll
// // void still_single()
// // {
// //     int n;
// //     cin>>n;
// //     vll arr;
// //     int i;
// //     arr.resize(n+1);
// //     int j;
// //     rep(i,n)cin>>arr[i];
// //     if(n==1)
// //     {
// //         cout<<arr[0]<<endl;
// //         return ;
// //     }
// //     if(n==2)
// //     {
// //         cout<<max(arr[0],arr[1])<<endl;
// //         return;
// //     }
// //     bool dp[105][10005];
// //     int sum=0;
// //     rep(i,n)sum+=arr[i];
// //     rep(i,n)
// //     {
// //         dp[i][0]=true;
// //     }
// //     rep(i,10005)
// //     {
// //         dp[0][i]=false;
// //     }
// //     dp[0][0]=true;
// //     rep(i,n)
// //     {
// //         rep(j,10005)
// //         {
// //             if(arr[i]<=j)
// //             {
// //                 dp[i][j]=dp[i-1][j]||dp[i][j-arr[i]];
// //             }
// //             else
// //             dp[i][j]=dp[i-1][j];
// //         }
// //     }
// //     int search=sum/2;
// //     int ans=INT_MAX;
// //     rep(i,sum)
// //     {   
// //         if(dp[n][i])
// //         ans=min(ans,max(i,sum-i));
// //     }
// //     cout<<ans<<endl;
    
// // }
// // /*Don't just sit and hope that God will solve this
// //   fucking do some	thing, try to observe or solve it a different way.
// //   Use that pen and paper.
// //   If nothing works take a deep breath and start again*/
// // signed main()
// // {
// //     fast
// //     int t=1;
// //     // cin >> t;
// //     while (t--)
// //     {
// //         still_single();
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define range(i, n) for (int i = 0; i < n; i++)
// #define range1(i, n) for (int i = 1; i <= n; i++)
// #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define test(x) \
//   int x;        \
//   cin >> x;     \
//   while (x--)
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define mii map<int, int>
// #define mp make_pair
// #define append push_back
// #define pop pop_back
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define input(x) cin >> (x)
// signed main()
// {
//   int n;
//   cin >> n;
//   int a[n];
//   int sum = 0;
//   range(i, n)
//   {
//     cin >> a[i];
//     sum += a[i];
//   }
//   bool dp[n + 1][sum + 1];
//   memset(dp, 0, sizeof(dp));
//   for (int i = 0; i <= n; i++)
//   {
//     for (int j = 0; j <= sum; j++)
//     {
//       if (j == 0)
//       {
//         dp[i][j] = 1;
//       }
//       else if (i == 0)
//       {
//         dp[i][j] = 0;
//       }
//       else
//       {
//         dp[i][j] = (j >= a[i - 1]) ? dp[i - 1][j] | dp[i - 1][j - a[i - 1]] : dp[i - 1][j];
//       }
//     }
//   }
//   for (int temp = ceil(sum * 1.0 / 2); temp <= sum; temp++)
//   {
//     if (dp[n][temp])
//     {
//       cout << temp;
//       break;
//     }
//   }
//   return 0;
// }
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
#define INF 1e18
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
#define int ll
void still_single()
{
    int n;
    cin>>n;
    vll arr;
    int i;
    arr.resize(n+1);
    int j;
    rep(i,n)cin>>arr[i];
    if(n==1)
    {
        cout<<arr[0]<<endl;
        return ;
    }
    if(n==2)
    {
        cout<<max(arr[0],arr[1])<<endl;
        return;
    }
    bool dp[105][10005];
    int sum=0;
    rep(i,n)sum+=arr[i];
    rep(i,n)
    {
        dp[i][0]=true;
    }
    rep(i,10005)
    {
        dp[0][i]=false;
    }
    dp[0][0]=true;
    for(i=1;i<n;i++)
    {
        for(j=1;j<10010;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    int search=sum/2;
    int ans=INT_MAX;
    for(i=ceil((sum*1.0)/2);i<=sum;i++)
    {
        if(dp[n][i])
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
signed main()
{
    fast
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}