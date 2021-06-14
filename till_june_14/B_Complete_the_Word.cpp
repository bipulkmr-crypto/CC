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
//     string s;
//     cin >> s;
//     map<char, ll> m;
//     int i;
//     int n = s.length();
//     rep(i, 26)
//     {
//         m[char(i + 65)] = 0;
//     }
//     rep(i, n)
//     {
//         m[s[i]]++;
//     }
//     int x = 0;
//     vector<char> c;
//     ford(m, it)
//     {
//         if (it->second == 0)
//         {
//             c.pb(it->first);
//         }
//     }
//     int j = 0;
//     int sz = c.size();
//     if (m['?'] >= sz)
//     {
//         rep(i, n)
//         {
//             if (s[i] == '?' && j < sz)
//             {
//                 s[i] = c[j++];
//             }
//             else
//             {
//                 if (j == sz)
//                     break;
//             }
//         }
//         for (j = i+1 ; j < n; j++)
//         {
//             if (s[j] == '?')
//                 s[j] = 'Z';
//         }
//         cout << s << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
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
int cnt[27];
bool valid()
{
    int i;
    rep(i, 26)
    {
        if (cnt[i] >= 2)
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    
    int n = s.length();
    if (n < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    int i;
    for (i = 25; i < n; i++)
    {
        memset(cnt, 0, sizeof(cnt));
        int j;
        for(j=i;j>=i-25;j--)
        {
            cnt[s[j] - 'A']++;
        }
        if (valid())
        {
            int cur = 0;
            while (cnt[cur] > 0)
            {

                cur++;
            }
            for (j = i - 25; j <= i; j++)
            {
                if (s[j] == '?')
                {
                    s[j] = char(cur + 'A');
                    cur++;
                    while (cnt[cur] > 0)
                        cur++;
                }
            }
            rep(j, n)
            {
                if (s[j] == '?')
                    s[j] = 'A';
            }
            cout << s << endl;
            exit(0);
        }
    }
    cout << -1 << endl;
    exit(0);
}