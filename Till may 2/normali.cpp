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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        ll mini = 1e12;
        ll maxi = -1;
        ll i;
        ll pre[n] = {0};
        ll sum = 0;

        rep(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
            if (i == 0)
            {
                pre[i] = (arr[i]-mini+1);
            }
            else
            {
                pre[i] = (arr[i]-mini+1) + pre[i - 1];
            }
        }
        vector<pair<ll,ll> > arr(n);
        arr[0].ff=arr[0];
        arr[0].ss=arr[1];
        rep(i, n)
        {
            
        }
        double normalised[n] = {0};
        double dem = (maxi - mini + 1);
        // rep(i, n)
        // {
        //     double val = (1e6) *((double) (arr[i] - mini + 1));
        //     val = val / dem;
        //     if (i == 0)
        //         normalised[i] = val;
        //     else
        //     {
        //         normalised[i] = val + normalised[i - 1];
        //     }
        // }
        // double sum=normalised[n-1];
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            // ll ans=sum-(pre[r]-pre[l-1]);
            // ans=ans-((mini-1)*(r-l));
            // double normal=(ans*1000000.0)/dem;
            // ll val=normal;
            // ll val =(sum)-(normalised[r] - normalised[l-1]);
            ll val=sum-(pre[r]-pre[l-1]);

            double x=((double)(val))/dem;
            x*=(1e6);
            val=x;
            cout << val << endl;
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int full = 1e6;
// signed main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<int> arr(n + 1, 0);
//         int mx = -1;
//         int mn = 1e13 + 5;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> arr[i];
//         }

//         vector<double> norm(n + 1, 0);
//         // int dem = (mx - mn + 1);
//         // for(int i = 1;i<=n;i++){
//         //     norm[i] = (arr[i] - mn + 1)*full;
//         //     norm[i] = norm[i]/dem;

//         // }

//         vector<int> pre(n + 1, 0);
//         // pre[1] = norm[1];
//         // for(int i = 2;i<=n;i++){
//         //     pre[i] = pre[i-1] + norm[i];
//         // }

//         while (q--)
//         {
//             int ans = 0;
//             int l, r;
//             cin >> l >> r;
//             if (l != 1)
//             {
//                 for (int i = 1; i < l; i++)
//                 {
//                     mx = max(mx, arr[i]);
//                     mn = min(mn, arr[i]);
//                 }
//             }
//             if (r != n)
//             {
//                 for (int i = r + 1; i <= n; i++)
//                 {
//                     mx = max(mx, arr[i]);
//                     mn = min(mn, arr[i]);
//                 }
//             }
//             int dem = mx - mn + 1;

//             if (l != 1)
//             {
//                 for (int i = 1; i < l; i++)
//                 {
//                     norm[i] = arr[i] - mn + 1;
//                     norm[i] *= full;
//                     norm[i] /= dem;
//                     ans += norm[i];
//                 }
//             }

//             if (r != n)
//             {
//                 for (int i = r + 1; i <= n; i++)
//                 {
//                     norm[i] = arr[i] - mn + 1;
//                     norm[i] *= full;
//                     norm[i] /= dem;
//                     ans += norm[i];
//                 }
//             }
//             cout << ans << "\n";
//         }
//     }
//     return 0;
// }