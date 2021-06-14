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
// // int main()
// // {
// //     ll n, m, k;
// //     cin >> n >> m >> k;
// //     multiset<ll> arr;
// //     ll i;
// //     rep(i, n)
// //     {
// //         ll x;
// //         cin >> x;
// //         arr.insert(x);
// //     }
// //     ll size[m];
// //     rep(i, m)
// //     {
// //         cin >> size[i];
// //     }
// //     sort(size, size + n);
// //     ll ans = 0;
// //     rep(i, m - 1)
// //     {
// //         ll val = 0;
// //         auto p = arr.lower_bound(size[i] + k);
// //         auto it = arr.lower_bound(size[i] - k);
// //         if (*p > *it)
// //             val = 1;
// //         if (val > 0)
// //         {
// //             arr.erase(arr.lower_bound(size[i] - k));
// //             ans += val;
// //         }
// //     }
// //     auto p = arr.lower_bound(size[m - 1] + k);
// //     auto it = arr.lower_bound(size[m - 1] - k);
// //     if (*p >= *it)
// //         ans += 1;
// //     cout << ans << endl;
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
//     ll n, m, k;
//     cin >> n >> m >> k;
//     vll arr(n);
//     ll i;
//     ll ans = 0;
//     rep(i, n) cin >> arr[i];
//     sort(all(arr));
//     while (m--)
//     {

//         ll inp;
//         cin >> inp;
//         ll val = upper_bound(all(arr), inp + k) - lower_bound(all(arr), inp - k);
//         auto p = lower_bound(all(arr), inp - k);
//         if (val > 0)
//         {
//             ans += 1;
//             arr.erase(p);
//         }
//         // cout<<ans<<endl;
//     }
//     cout << ans << endl;
// }
//this approach is giving fucking tle dont know why as it should take atmost nlogn time
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
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[n], tenents[n];
    ll i, j;
    rep(i, n)
    {
        cin >> arr[i];
    }
    rep(j, m)
    {
        cin >> tenents[j];
    }
    sort(arr, arr + n);
    sort(tenents, tenents + m);
    i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        if ((arr[i] + k) < tenents[j])
            i++;
        else if ((arr[i] - k) > tenents[j])
            j++;
        else
        {
            i++;
            j++;
            ans++;
        }
    }
    cout << ans << endl;
}