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
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<vector<int>> arr(n + 1);
//         int i;
//         fu(i, 1, n)
//         {
//             int x;
//             cin >> x;
//             arr[x].pb(i);
//         }
//         vector<int> skill(n + 1);
//         fu(i, 1, n)
//         {
//             cin >> skill[i];
//         }
//         vector<vector<int>>res(n+1);
//         fu(i,1,n)
//         {
//             res[arr[]
//         }
//         fu(i, 1, n)
//         {
//             sort(all(arr[i]));
//         }
//         int j;
//         vector<vector<int>> pre(n + 1);
//         fu(i, 1, n)
//         {
//             pre[i].pb(skill[]);
//             for (j = 1; j < arr[i].size(); j++)
//             {
//                 pre[i].pb(pre[i][j-1] + arr[i][j]);
//             }
//         }
//         int k = 1;
//         for (k = 1; k <= n; k++)
//         {
//             int ans = 0;
//             for (i = 1; i <= n; i++)
//             {
//                 if (k <= arr[i].size())
//                     ans += pre[i][k * (n / k) - 1];
//             }
//             cout << ans << " ";
//         }
//         cout << endl;
//     }
// }
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
bool comp(vector<ll> &a, vector<ll> &b)
{
    return (a.size() > b.size());
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll u[n];
        ll s[n];
        vector<vector<ll>> arr(n + 1);
        ll i;
        ll j;
        rep(i, n)
        {
            cin >> u[i];
        }
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            arr[u[i]].pb(inp);
        }
        rep(i, n + 1)
        {
            if (i != 0)
                sort(arr[i].rbegin(), arr[i].rend());
        }
        ll ans[n + 1] = {0};
        vector<vector<ll>> sum(n + 1);
        for (i = 1; i <= n; i++)
        {
            sum[i].resize(arr[i].size(), 0);
            for (ll j = 0; j < arr[i].size(); j++)
            {
                if (j != 0)
                    sum[i][j] = sum[i][j - 1] + arr[i][j];
                else
                    sum[i][0] = arr[i][0];
            }
            for (ll j = 1; j <= arr[i].size(); j++)
            {
                ll rem = arr[i].size() % j;
                ans[j] += sum[i][arr[i].size() - rem - 1];
            }
        }
        // sort(all(arr), comp);
        // for (ll k = 1; k <= n; k++)
        // {
        //     ll ans = 0;
        //     for (ll i = 1; i <= n; i++)
        //     {
        //         ll size = arr[i].size();
        //         ll temp = 0;
        //         if (size >= k)
        //         {
        //             // ll p = size % k;
        //             // temp = sum[i];
        //             // for (ll j = size - 1; j >= size - p; j--)
        //             // {
        //             //     temp -= arr[i][j];
        //             // }
        //             temp = sum[i][k * (size / k) - 1];
        //         }
        //         else
        //             temp = 0;
        //         ans += temp;
        //     }

        // for(i=1;i<=n;i++)
        // {
        //     ll siz=arr[i].size();
        //     ll prefix[siz+1];
        //     prefix[0]=0];
        //     for(ll j=0;j<siz;j++)
        //     {
        //         prefix[j]=prefix[j-1]+arr[i][j];
        //     }
        // }
        for (i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
