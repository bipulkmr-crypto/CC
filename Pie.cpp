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
ll n, f;
vector<ll> arr;

bool good(long double x)
{
    ll count = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        count += (ll)((M_PI * arr[i] * arr[i]) / x);
    }
    return ((count - 1) >= f);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> n >> f;
        arr.resize(n);
        ll i;
        rep(i, n) cin >> arr[i];
        long double low = 0, mid, high = 1e9;
        long double epsilon = (1e-3);

        // for (i = 0; i < 1040; i++)
        while ((high - low) > epsilon)
        {
            mid = (low + (high - low) / 2.0);
            if (good(mid))
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        if (good(high))
        {
            cout << setprecision(4) << fixed << high << endl;
        }
        else
        {
            cout << setprecision(4) << fixed << low << endl;
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define range(i, n) for (int i = 0; i < n; i++)
// #define range1(i, n) for (int i = 1; i <= n; i++)
// #define print(x) cout << (x) << "\n"
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define test(x) \
//     int x;      \
//     cin >> x;   \
//     while (x--)
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define mii map<int, int>
// #define mp make_pair
// #define append push_back
// #define pop pop_back
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define input(x) cin >> (x)
// int n, f;
// double a[100005];
// bool check(double mid)
// {
//     double ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans += (int)(a[i] / mid);
//     }
//     if (ans >= f)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// signed main()
// {
//     test(x)
//     {
//         cin >> n >> f;
//         f += 1;
//         double ans = 0;
//         range(i, n)
//         {
//             int x;
//             cin >> x;
//             a[i] = (M_PI)*x * x;
//         }
//         sort(a, a + n);
//         for (int i = 0; i < 100; i++)
//         {
//             double high = a[n - 1];
//             double low = 0;
//             while (low <= high)
//             {
//                 double mid = (high + low) / 2.0;
//                 if (check(mid))
//                 {
//                     low = mid;
//                     ans = mid;
//                 }
//                 else
//                 {
//                     high = mid;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }