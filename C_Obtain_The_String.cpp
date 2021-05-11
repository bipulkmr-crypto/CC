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
// string X, Y;
// string per;
// int lcs(int m, int n)
// {
//     int L[m + 1][n + 1];
//     int i, j;
//     for (i = 0; i <= m; i++)
//     {
//         for (j = 0; j <= n; j++)
//         {
//             if (i == 0 || j == 0)
//                 L[i][j] = 0;

//             else if (X[i - 1] == Y[j - 1])
//                 L[i][j] = L[i - 1][j - 1] + 1;

//             else
//                 L[i][j] = max(L[i - 1][j], L[i][j - 1]);
//         }
//     }
//     return L[m][n];
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // string X, Y;
//         cin >> X >> Y;
//         per=Y;
//         int ans = 0;
//         int i = 0;
//         int n = X.length();
//         int m = Y.length();
//         int len = Y.length();
//         bool flag = true;
//         while (i < len)
//         {
//             ans++;
//             string temp;
//             for (int j = i; j < len; j++)
//             {
//                 temp +=per[j];
//             }
//             Y = temp;
//             int val = lcs(n, m - i);
//             i += val;
//             if (ans >m)
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (!flag)
//         {
//             cout << -1 << endl;
//         }
//         else
//         cout << ans << endl;
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
string s, t;
ll pre[10001][26];
map<char, int> m1, m2;
bool good(ll x)
{
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> s >> t;
        memset(pre, 0, sizeof(pre));
        int n = s.length();
        int m = t.length();
        int i;
        rep(i, n) m1[s[i]]++;
        bool flag = false;
        rep(i, m)
        {
            if (m1[t[i]] == 0)
            {
                cout << -1 << endl;
                flag = true;
                break;
            }
        }
        if(flag)continue;
        for (int i = 0; i < n; i++)
        {
            pre[i][s[i] - 'a']++;
        }
        
    }
}