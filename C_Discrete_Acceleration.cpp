// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
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
// // vector<ll> arr;
// // ll n, l;
// // double t1 = 0.0, t2 = 0.0;
// // // bool good(ll pos)
// // // {
// // //     // double time=0.0;
// // //     int l = 0, r = n - 1;
// // //     double s1 = 1.0, s2 = 1.0;
// // //     for (; l < n && r >= 0; l++, r--)
// // //     {
// // //         if (l == 0)
// // //         t1+=double((arr[l]/s1)
// // //     }
// // // }
// // typedef long double ld;
// // ld diff(ld time, ld l)
// // {
// //     ld x = 0, y = l;
// //     // int n = a.size();
// //     ld speed = 1, ti = 0;
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         ld t = (arr[i + 1] - arr[i]) / speed;
// //         if (ti + t >= time)
// //         {
// //             x = arr[i] + speed * (time - ti);
// //             break;
// //         }

// //         ti += t;
// //         speed++;
// //     }
// //     if (x == 0 && time > 0)
// //         x = l;
// //     speed = 1;
// //     ti = 0;
// //     for (int i = n - 1; i > 0; i--)
// //     {
// //         ld t = (arr[i] - arr[i - 1]) / speed;
// //         if (ti + t >= time)
// //         {
// //             y = arr[i] - speed * (time - ti);
// //             break;
// //         }
// //         ti += t;
// //         speed++;
// //     }
// //     if (y == l && time > 0)
// //         y = 0;
// //     //cout<<x<<" "<<y<<endl;
// //     return y - x;
// // }
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {

// //         cin >> n >> l;
// //         arr.resize(n + 2);
// //         int i;
// //         arr[n+1]=l;
// //         arr[0]=0;
// //         rep(i, n)
// //         {
// //             cin >> arr[i+1];
// //         }
// //         double low = 0, high = l, eps = 0.000001;
// //         double mid;
// //         while (high - low > eps)
// //         {
// //             mid = low + (high - low) / 2.0;
// //             double x = diff(mid, l);
// //             if (x >= 0)
// //             {
// //                 low = mid;
// //             }
// //             else
// //             {
// //                 high = mid;
// //             }
// //         }
// //         cout << setprecision(10) << fixed << mid << endl;
// //     }
// // }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
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
#define pb push_back
#define int long long
#define ld long double
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define fill(a, b) memset(a, b, sizeof(a))
#define setbits(x) __builtin_popcountll(x)
#define rep(i, x, y) for (int i = (int)x; i < y; i++)
#define px(a)             \
    for (auto x : a)      \
        cout << x << " "; \
    cout << '\n';
#define pxy(a, n) rep(i, 0, n){px(a[i])};
const long long MOD = 1e9 + 7, N = 1e5 + 5;
const long double eps = 1e-6;
ld diff(ld time, ld l, vi &a)
{
    ld x = 0, y = l;
    int n = a.size();
    ld speed = 1, ti = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ld t = (a[i + 1] - a[i]) / speed;
        if (ti + t >= time)
        {
            x = a[i] + speed * (time - ti);
            break;
        }

        ti += t;
        speed++;
    }
    if (x == 0 && time > 0)
        x = l;
    speed = 1;
    ti = 0;
    for (int i = n - 1; i > 0; i--)
    {
        ld t = (a[i] - a[i - 1]) / speed;
        if (ti + t >= time)
        {
            y = a[i] - speed * (time - ti);
            break;
        }
        ti += t;
        speed++;
    }
    if (y == l && time > 0)
        y = 0;
    //cout<<x<<" "<<y<<endl;
    return y - x;
}
ld solve()
{
    int n, l, ans = 0;
    cin >> n >> l;
    vi a(n + 2);
    a[0] = 0;
    a[n + 1] = l;
    rep(i, 1, n + 1) cin >> a[i];
    long double lo = 0, hi = l, mid;
    while (hi - lo > eps)
    {
        mid = lo + (hi - lo) / 2;
        long double x = diff(mid, l, a);
        if (x >= 0)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
        //cout<<mid<<" "<<x<<endl;
    }
    return mid;
}
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        cout << setprecision(60) << solve() << endl;
}