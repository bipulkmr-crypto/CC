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
//     ll n, s;
//     cin >> n >> s;
//     ll arr[n];
//     ll i;
//     rep(i, n) cin >> arr[i];
//     ll l = 0, r, x = 0;
//     ll res;
//     // for (r = 0; r < n; r++)
//     // {
//     //     x += arr[r];
//     //     while (x > s)
//     //     {
//     //         x -= arr[l];
//     //         l++;
//     //     }
//     //     res = max(res, r - l + 1);
//     // }
//     for (r = 0; r < n; r++)
//     {
//         x += arr[r];
//         while (x > s)
//         {
//             x -= arr[l];
//             l++;
//         }
//         res = max(res, r - l + 1);
//     }
//     if(l==0&&r==n&&(x<s))
//     {
//         cout<<-1<<endl;
//         return 0;
//     }
//     cout<<res<<"\n";
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
    ll x = 0, res = LLONG_MAX;
    ll n;
    ll s;
    cin >> n;
    cin >> s;
    ll i;
    ll arr[n];
    ll r, l = 0;
    rep(i, n) cin >> arr[i];
    for (r = 0; r < n; r++)
    {
        x += arr[r];
        while (x-arr[l] >= s)
        {
            x -= arr[l];
            l++;
        }
        if(x>=s)
        res = min(res, r - l + 1);
    }
    if(res!=LLONG_MAX)
    cout<<res<<endl;
    else
    cout<<-1<<endl;
}