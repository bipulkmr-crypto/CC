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
//         string a, b;
//         cin >> a >> b;
//         ll i;
//         ll ans1 = 0, ans2 = 0;
//         for (i = n - 1; i >= 0; i--)
//         {
//             if (a[i] != b[i])
//             {
//                 ans1++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         for (i = n - 1; i >= 0; i--)
//         {
//             if (a[i] == b[i])
//             {
//                 ans2++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         // ll apos1=-1,aposo=-1,bposo=-1,bpos1=-1;
//         // for(i=n-1;i>=0;i--)
//         // {
//         //     if(a[i]=='1')
//         //     {
//         //         a
//         //     }
//         // }
//         bool flag = true;
//         rep(i, n)
//         {
//             if (a[i] != b[i])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//             cout << ans1 << " " << (ans2 - 1) << endl;
//         else
//             cout << ans1 << " " << ans2 << endl;
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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll i;
        ll ans1 = 0, ans2 = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[n - 1] == b[i])
            {
                break;
            }
            else
            {
                ans1++;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (b[n - 1] == a[i])
            {
                break;
            }
            else
            {
                ans2++;
            }
        }
        ll x = min(ans1, ans2);
        ans1 = 0;
        ans2 = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[n - 1] != b[i])
            {
                break;
            }
            else
            {
                ans1++;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (b[n - 1] != a[i])
            {
                break;
            }
            else
            {
                ans2++;
            }
        }
        ll y = min(ans1, ans2);
        cout << x << " " << y << endl;
    }
}
