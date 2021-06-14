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
// bool comp(pll a, pll b)
// {
//     if (a.ss == b.ss)
//     {
//         return (a.ff < b.ff);
//     }
//     else
//     {
//         return (a.ss > b.ss);
//     }
// }
// int main()
// {
//     int n, f;
//     cin >> n >> f;
//     vector<pll> arr(n);
//     int i;
//     rep(i, n)
//     {
//         ll a, b;
//         cin >> a >> b;
//         if (a == 0)
//             b = 0;
//         arr[i] = {a, b};
//     }
//     ll ans = 0;
//     vector<pll> p(n);
//     // sort(all(arr), comp);
//     // ll i;
//     for (i = 0; i < n; i++)
//     {
//         ans += min(arr[i].ff, arr[i].ss);
//         p[i] = {min(2 * arr[i].ff, arr[i].ss) - min(arr[i].ff, arr[i].ss), i};
//     }
//     sort(p.rbegin(), p.rend());
//     rep(i, f)
//     {
//         ll pos = p[i].ss;
//         ans += min(2 * arr[pos].ff, arr[pos].ss);
//     }
//     fu(i, f, n - 1)
//     {
//         int pos = p[i].ss;
//         ans += min(arr[pos].ff, arr[pos].ss);
//     }
//     cout << ans << endl;
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
int main()
{
    int n, f;
    cin >> n >> f;
    int l[n], v[n];
    int i;
    rep(i, n)
    {
        cin >> l[i] >> v[i];
    }
    vector<pair<int, int>> arr;
    // int i;
    rep(i, n)
    {
        arr.pb({min(2 * l[i], v[i]) - min(l[i], v[i]), i});
    }
    ll ans = 0;
    int j;
    sort(arr.rbegin(), arr.rend());
    rep(i, f)
    {
        int pos = arr[i].ss;
        ans += (min(2 * l[pos], v[pos]));
    }
    for (i = f; i < n; i++)
    {
        int pos = arr[i].ss;
        ans += min(l[pos], v[pos]);
    }
    cout << ans << endl;
}