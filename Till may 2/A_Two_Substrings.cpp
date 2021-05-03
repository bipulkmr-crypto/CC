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

// // map<pair<int, int>, pair<int, int>> track

// // int mem[100001][5];
// // int solve(int n, int m)
// // {
// //     if (n == 0 || m == 0)
// //         return 0;
// //     else if (mem[n][m] != -1)
// //         return mem[n][m];
// //     else
// //     {
// //         ll ans = 0;
// //         if (s[n] == c1[m])
// //         {
// //             ans = 1 + max(solve(n - 1, m), solve(n, m - 1));
// //         }
// //         else
// //         {
// //             ans = max(solve(n - 1, m), solve(n, m - 1));
// //         }
// //         mem[n][m] = ans;
// //         return ans;
// //     }
// // }
// // int solve2(int n, int m)
// // {
// //     if (n == 0 || m == 0)
// //         return 0;
// //     else if (mem[n][m] != -1)
// //         return mem[n][m];
// //     else
// //     {
// //         ll ans = 0;
// //         if (s[n] == c2[m])
// //         {
// //             ans = 1 + max(solve(n - 1, m), solve(n, m - 1));
// //         }
// //         else
// //         {
// //             ans = max(solve(n - 1, m), solve(n, m - 1));
// //         }
// //         mem[n][m] = ans;
// //         return ans;
// //     }
// // }
// int LCSubStr(char *X, char *Y, int m, int n)
// {
//     // Create a table to store
//     // lengths of longest
//     // common suffixes of substrings.
//     // Note that LCSuff[i][j] contains
//     // length of longest common suffix
//     // of X[0..i-1] and Y[0..j-1].

//     int LCSuff[m + 1][n + 1];
//     int result = 0; // To store length of the
//                     // longest common substring

//     /* Following steps build LCSuff[m+1][n+1] in
//         bottom up fashion. */
//     for (int i = 0; i <= m; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             // The first row and first column
//             // entries have no logical meaning,
//             // they are used only for simplicity
//             // of program
//             if (i == 0 || j == 0)
//                 LCSuff[i][j] = 0;

//             else if (X[i - 1] == Y[j - 1])
//             {
//                 LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
//                 result = max(result, LCSuff[i][j]);
//             }
//             else
//                 LCSuff[i][j] = 0;
//         }
//     }
//     return result;
// }
// int main()
// {
//     string temp;
//     cin >> temp;

//     bool flag1, flag2;
//     ll len1, len2;
//     // memset(mem, -1, sizeof(mem));
//     // len1 = solve(s.length(), 4);
//     // if (len1 == 4)
//     // {
//     //     cout << "YES\n";
//     //     memset(mem, -1, sizeof(mem));
//     // }

//     // else if (solve2(s.length(), 4) == 4)
//     // {
//     //     cout << "YES\n";
//     // }
//     // else
//     //     cout << "NO\n";
//     char c1[] = "AB";
//     char c2[] = "BA";
//     ll n = temp.length();
//     char s[n];
//     ll i;
//     for (i = 0; i < n; i++)
//     {
//         s[i] = temp[i];
//     // }
//     if ((LCSubStr(s, c1, n, 2)) == 2 && (LCSubStr(s, c2, n, 2) == 2))
//     {
//         cout << "YES\n";
//     }
//     // else if
//     // {
//     //     cout<<"YES";
//     //     cout<<"\n";
//     // }
//     else
//         cout << "NO\n";
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
    string s;
    cin >> s;
    bool flag1 = false;
    bool flag2 = false;
    ll n=s.length();
    ll i;
    for (i = 0; i < n - 2; i++)
    {
        string temp = s.substr(i, 2);
        if (temp == "AB")
        {
            flag1 = true;
            break;
        }
    }

    for (ll j = i+2; j < n - 1; j++)
    {
        string temp = s.substr(j, 2);
        if (temp == "BA")
        {
            flag2 = true;
            break;
        }
    }
    if (flag1 && flag2)
    {
        cout << "YES\n";
        return 0;
    }
    flag1 = false;
    flag2 = false;
    for (i = 0; i < n - 2; i++)
    {
        string temp = s.substr(i, 2);
        if (temp == "BA")
        {
            flag1 = true;
            break;
        }
    }

    for (ll j = i+2; j < n - 1; j++)
    {
        string temp = s.substr(j, 2);
        if (temp == "AB")
        {
            flag2 = true;
            break;
        }
    }
    if (flag1 && flag2)
    {
        cout << "YES\n";
        return 0;
    }
    cout<<"NO\n";
}