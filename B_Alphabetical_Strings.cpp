// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// // #define mod9 1000000009
// // #define mod7 1000000007
// // #define INF 1e18
// // #define sp(y) fixed << setprecision(y)
// // #define vi vector<int>
// // #define setbits(x) __builtin_popcountll(x)
// // #define zerobits(x) __builtin_ctzll(x)
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
// // void still_single()
// // {
// //     string s;
// //     cin >> s;
// //     int i;
// //     int n = s.length();
// //     bool flag = false;
// //     // sort(all(s));
// //     int pos;
// //     rep(i, n)
// //     {
// //         if (s[i] == 'a')
// //         {
// //             flag = true;
// //             pos = i;
// //             break;
// //         }
// //     }
// //     auto isvalid = [&](int i)
// //     {
// //         return (i >= 0 && i < n);
// //     };
// //     if (!flag)
// //     {
// //         cout << "NO" << endl;
// //         ret;
// //     }
// //     else
// //     {
// //         int marked[n] = {0};
// //         char prev = 'a';
// //         while (true)
// //         {
// //             if (isvalid(i - 1) &&prev-s[i-1]==1)
// //             {
// //                 prev=
// //             }
// //         }
// //     }
// //     rep(i, n - 1)
// //     {
// //         if (abs(s[i] - s[i + 1]) != 1)
// //         {
// //             cout << "NO" << endl;
// //             ret;
// //         }
// //     }
// //     cout << "YES\n";
// // }
// // /*Don't just sit and hope that God will solve this
// // fucking do some	thing, try to observe or solve it a different way.
// // Use that pen and paper.
// // If nothing works take a deep breath and start again*/
// // int main()
// // {
// //     fast int t = 1;
// //     cin >> t;
// //     while (t--)
// //     {
// //         still_single();
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
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
// bool check(vector<bool> ar)
// {
//     int n = ar.size();
//     int i;
//     rep(i, n)
//     {
//         if (!ar[i])
//             return (false);
//     }
//     return true;
// }
// // int find_next_unmarked(vector<bool> arr, int pos)
// // {
// //     int n = arr.size();
// //     int i;
// // }
// string alpha = "abcdefghijklmnopqrstuvwxyz";
// void still_single()
// {
//     string s;
//     cin >> s;
//     int pos = 0;
//     int n = s.length();
//     int j = 0;
//     int i = 0;
//     auto isvalid = [&](int i)
//     {
//         return (i >= 0 && i < n);
//     };
//     if (n == 1)
//     {
//         if (s == "a")
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//         ret;
//     }
//     vector<bool> marked(n, false);
//     if (find(all(s), 'a') != s.end())
//     {
//         i = find(all(s), 'a') - s.begin();
//         j++;
//         pos = i;
//         marked[i] = true;
//         while (true)
//         {

//             // int next = find_next_unmarked(marked, pos);
//             int p = 1;
//             while (p < n)
//             {
//                 if (isvalid(i - p) && !marked[i - p] && alpha[j] == s[i - p])
//                 {
//                     j++;
//                     i -= p;
//                     p = 1;
//                     marked[i] = true;
//                     if (check(marked))
//                     {
//                         cout << "YES" << endl;
//                         ret;
//                     }
//                 }
//                 else if (isvalid(i + p) && !marked[i + p] && alpha[j] == s[i + p])
//                 {
//                     j++;
//                     i += p;
//                     p = 1;
//                     marked[i] = true;
//                     if (check(marked))
//                     {
//                         cout << "YES" << endl;
//                         ret;
//                     }
//                 }
//                 else
//                 {
//                     p++;
//                 }
//             }
//             if(!check(marked))
//             {
//                 cout<<"NO"<<endl;
//             }
//             // if (isvalid(i - 1) && alpha[j] == s[i - 1])
//             // {
//             //     j++;
//             //     i -= 1;
//             //     marked[i] = true;
//             //     if (check(marked))
//             //     {
//             //         cout << "YES" << endl;
//             //         ret;
//             //     }
//             // }
//             // else if (isvalid(i + 1) && alpha[j] == s[i + 1])
//             // {
//             //     j++;
//             //     i += 1;
//             //     marked[i] = true;
//             //     if (check(marked))
//             //     {
//             //         cout << "YES" << endl;
//             //         ret;
//             //     }
//             // }
//             // else if (isvalid(i + abs(i - pos) + 1) && alpha[j] == s[i + abs(i - pos) + 1])
//             // {
//             //     j++;
//             //     i += abs(i - pos) + 1;
//             //     marked[i] = true;
//             //     if (check(marked))
//             //     {
//             //         cout << "YES" << endl;
//             //         ret;
//             //     }
//             // }
//             // else if (isvalid(i - abs(i - pos) - 1) && alpha[j] == s[i - abs(i - pos) - 1])
//             // {
//             //     j++;
//             //     i -= abs(i - pos) - 1;
//             //     marked[i] = true;
//             //     if (check(marked))
//             //     {
//             //         cout << "YES" << endl;
//             //         ret;
//             //     }
//             // }
//             // else
//             // {
//             //     cout << "NO" << endl;
//             //     ret;
//             // }
//         }
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//         ret;
//     }
// }
// /*Don't just sit and hope that God will solve this
// fucking do some	thing, try to observe or solve it a different way.
// Use that pen and paper.
// If nothing works take a deep breath and start again*/
// int main()
// {
//     fast int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         still_single();
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
string alpha = "abcdefghijklmnopqrstuvwxyz";
void still_single()
{
    int i;
    string s;
    cin >> s;
    int n = s.length();
    bool flag = true;
    int pos = -1;
    rep(i, n)
    {
        if (s[i] == 'a')
            pos = i;
    }
    int j = 0;
    while (j < n)
    {
        bool check = false;
        rep(i, n)
        {
            if (alpha[j] == s[i])
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << "NO" << endl;ret;
        }
        else j++;
    }

    if (pos == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        fu(i, pos + 1, n - 1)
        {
            if (s[i] <= s[i - 1])
            {
                flag = false;
                break;
            }
        }
        for (i = pos - 1; i >= 0; i--)
        {
            if (s[i] <= s[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}