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
//         string s;
//         cin >> s;
//         map<char, ll> m;
//         m[s[0]] = 1;
//         ll len = s.length();
//         // m[s[len-1]]=-1;
//         if (s[0] == s[len - 1])
//         {
//             cout << "NO\n";
//             continue;
//         }
//         ll i;
//         ll sum = 1;
//         for (i = 1; i < len; i++)
//         {
//             if (m[s[i]] != 0)
//             {
//                 sum += m[s[i]];
//             }
//             else
//             {
//                 if (sum > 0)
//                     m[s[i]] = (-1);
//                 else if (sum <= 0)
//                     m[s[i]] = 1;
//                 sum += m[s[i]];
//             }
//         }
//         // for(i=0;i<n;i++)
//         // {
//         //     if()
//         // }
//         if (sum == 0)
//         {
//             sum = 0;
//             bool flag = true;
//             rep(i, len)
//             {
//                 if (m[s[i]] < 0)
//                 {
//                     if (sum <= 0)
//                     {
//                         flag = false;
//                         break;
//                     }
//                     else
//                     {
//                         sum += m[s[i]];
//                     }
//                 }
//                 else
//                 {
//                     sum += m[s[i]];
//                 }
//             }
//             if (flag)
//             {
//                 cout << "YES\n";
//             }
//             else
//             {
//                 cout << "NO\n";
//             }
//         }
//         else
//         {
//             cout<<"NO\n";
//         }

//         // if (sum == 0)
//         //     cout << "YES\n";
//         // else
//         //     cout << "NO\n";
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
        string s;
        cin >> s;
        ll n = s.length();
        ll i;
        vector<ll> d(3);
        ll x = s[0] - 'A';
        ll y = s[n - 1] - 'A';
        if (x == y)
        {
            cout << "NO\n";
        }
        else
        {
            d[x] = 1;
            d[y] = -1;
            if (count(all(s), 'A' + x) == n / 2)
            {
                d[3 ^ x ^ y] = -1;
            }
            else
                d[3 ^ x ^ y] = 1;
            ll bal = 0;
            bool flag = true;
            for (char c : s)
            {
                bal += d[c - 'A'];
                if (bal < 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                if (bal == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }
}