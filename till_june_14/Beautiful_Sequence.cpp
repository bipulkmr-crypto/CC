// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define fast                          \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);
// // // #define mod 1000000007
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
// // // // #define size 100001
// // // // ll dp[size];
// // // // ll arr[size];
// // // int n;
// // // // int lis()
// // // // {
// // // //     const int INF = 1e9;
// // // //     dp[0] = -INF;
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         int j = upper_bound(dp, dp + n, arr[i]) - dp;
// // // //         if (dp[j - 1] < arr[i] && arr[i] < dp[j])
// // // //         {
// // // //             dp[j] = arr[i];
// // // //         }
// // // //     }
// // // //     int ans=0;
// // // //     for(int i=0;i<=n;i++)
// // // //     {
// // // //         if(dp[i]<INF)
// // // //         {
// // // //             ans=i;
// // // //         }
// // // //     }
// // // //     return ans;
// // // // }
// // // int lis(vector<int> const &a)
// // // {
// // //     int n = a.size();
// // //     const int INF = 1e9;
// // //     vector<int> d(n + 1, INF);
// // //     d[0] = -INF;

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
// // //         if (d[j - 1] < a[i] && a[i] < d[j])
// // //             d[j] = a[i];
// // //     }

// // //     int ans = 0;
// // //     for (int i = 0; i <= n; i++)
// // //     {
// // //         if (d[i] < INF)
// // //             ans = i;
// // //     }
// // //     return ans;
// // // }
// // // int main()
// // // {
// // //     int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {

// // //         cin >> n;
// // //         ll i;
// // //         vector<int> arr(n + 1);
// // //         rep(i, n) cin >> arr[i];
// // //         // rep(i, n)
// // //         // {
// // //         //     dp[i] = 1;
// // //         // }
// // //         // rep(i, n)
// // //         // {
// // //         //     ll j;
// // //         //     rep(j, i)
// // //         //     {
// // //         //         if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
// // //         //             dp[i] = dp[j] + 1;
// // //         //     }
// // //         // }
// // //         // ll ans = *max_element(dp, dp + n);
// // //         // ans = n - ans;
// // //         int ans = n-lis(arr);
// // //         cout << ans << endl;
// // //     }
// // // }
// // #include <bits/stdc++.h>

// // using namespace std;

// // #define ll long long int
// // #define endl "\n"
// // #define mod 1000000007
// // ll LISV(vector<ll> a)
// // {
// //     vector<ll> tail;
// //     ll n = a.size();
// //     tail.push_back(a[0]);

// //     for (ll i = 1; i < n; i++)
// //     {
// //         if (a[i] > tail[tail.size() - 1])
// //         {
// //             tail.push_back(a[i]);
// //         }
// //         else
// //         {
// //             auto ptr = upper_bound(tail.begin(), tail.end(), a[i]);
// //             ll index = ptr - tail.begin();
// //             tail[index] = a[i];
// //         }
// //     }
// //     return tail.size();
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// // // #ifndef ONLINE_JUDGE
// // //     freopen("input.txt", "r", stdin);
// // // #endif

// //     ll t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;
// //         vector<ll> a(n);
// //         for (ll i = 0; i < n; i++)
// //             cin >> a[i];

// //         ll k = LISV(a);
// //         cout << n - k << endl;
// //     }

// //     return 0;
// // }
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
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         // ll arr[n];
//         vector<ll> arr(n + 1, 1e9);
//         ll mx = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] - i >= 0)
//             {
//                 ll x = arr[i] - i;
//                 auto it = upper_bound(arr.begin(), arr.end(), x);
//                 arr[it - arr.begin()] = x;
//                 ll idx = it - arr.begin();
//                 mx = max(mx, idx + 1);
//             }
//         }
//         cout << n - mx << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
bool ckmin(T &a, const T &b)
{
    return b < a ? a = b, 1 : 0;
}
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        vector<ll> v(n + 1, 100000000000);
        // for(int i = 0; i<  n; i++)	{
        // 	v[i] = 100000000;
        // }
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] - i >= 0)
            {
                ll x = arr[i] - i;
                auto itr = upper_bound(v.begin(), v.end(), x);
                v[itr - v.begin()] = x;
                ll idx = itr - v.begin();
                mx = max(mx, idx + 1);
            }
        }
        //cout << v.size() << " ";
        cout << n - mx << "\n";
    }
}