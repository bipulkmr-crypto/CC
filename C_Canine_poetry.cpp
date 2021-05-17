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
//         string s;
//         cin >> s;
//         int n = s.length();
//         int freq[n][26];
//         memset(freq, 0, sizeof(freq));
//         int i;
//         // for (i = 0; i < n; i++)
//         // {
//         //     freq[i][s[i] - 'a']++;
//         // }
//         freq[0][s[0] - 'a']++;
//         int ans = 0;
//         for (i = 1; i < n; i++)
//         {
//             freq[i][s[i] - 'a'] = freq[i - 1][s[i] - 'a'] + 1;
//             for (int j = 0; j < 26; j++)
//             {
//                 if (j != (s[i] - 'a'))
//                     freq[i][j] = freq[i - 1][j];
//             }
//             int odd = 0, even = 0;
//             for (int j = 0; j < 26; j++)
//             {
//                 if (freq[i][j] % 2 == 1)
//                 {
//                     odd++;
//                 }
//                 else
//                 {
//                     even++;
//                 }
//             }
//             if ((odd == 1 && even % 2 == 1) || odd == 0)
//             {
//                 ans++;
//                 freq[i][s[i] - 'a']--;
//             }
//         }
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int i;
        bool marked[n] = {0};
        int ans = 0;
        for (i = 1; i < n; i++)
        {
            int flag = 0;
            if (s[i] == s[i - 1] && (1 - marked[i-1]))
            {
                flag = 1;
            }
            if (i > 1 && s[i] == s[i - 2] && (1 - marked[i-2]))
            {
                flag = 1;
            }
            marked[i] = flag;
            ans += marked[i];
        }
        cout << ans << endl;
    }
}