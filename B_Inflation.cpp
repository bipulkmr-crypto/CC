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
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         int i;
//         rep(i, n)
//         {
//             cin >> arr[i];
//         }
//         int ans = 0;
//         double cost = arr[0];
//         for (i = 1; i < n; i++)
//         {
//             double x = k * (arr[i] + cost) - 100 * arr[i];
//             int val = 100 - arr[i];
//             if (val > 0)
//             {
//                 x /= (double(val));
//                 ans += ceil(x);
//                 cost += (2 * x + arr[i]);
//             }
//             else
//             {
//                 cost += arr[i];
//             }
//         }
//         cout << ans << endl;
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int length(ll n)
{
    int c = 0;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll temp = n;
        ll c = 0;
        ll sum = 0;
        double per = 0.0;
        fu(i, 1, n - 1)
        {
            double x = (double)(arr[i - 1]);
            per = (double)(arr[i] / x) * 100.0;
            if (per - k > 0)
            {
                c = log10(arr[i]);
                double j = (double)(k) / 100.0;
                ll y = (ll)pow(10, c);
                sum += (ceil((per - (k)) * y) + ceil((per - (k)) * y) - arr[i]);
                arr[i] = arr[i - 1] + sum;
            }
            else
            {
                arr[i] += arr[i - 1];
            }
        }
        cout << sum << endl;
    }
}