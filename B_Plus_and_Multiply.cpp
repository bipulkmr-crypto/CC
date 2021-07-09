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
// vector<int> arr;
// int n;
// int a, b;
// void generate(int x)
// {
//     if (x > n)
//         return;
//     else
//     {
//         int p1 = x * a;
//         int p2 = x + b;
//         arr.pb(p1);
//         arr.pb(p2);
//         if (*max_element(all(arr)) < n)
//         {
//             generate(p1);
//             generate(p2);
//         }
//     }
// }
// void still_single()
// {
//     cin >> n >> a >> b;
//     int i;
//     arr.pb(1);
//     // int x = a;
//     // int y = b + 1;
//     // arr.pb(x);
//     // arr.pb(y);
//     generate(1);
//     if (find(all(arr), n) != arr.end())
//     {
//         cout << "Yes" << endl;
//     }
//     else
//         cout << "No" << endl;
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
#define int ll
void still_single()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int temp = n;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    else
    {
        bool flag = false;
        ll t = 1;

        while (t <= n)
        {
            if (t % b == n % b)
            {
                flag = true;
                break;
            }
            t *= a;
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    // if (a % 2 == 1 && b % 2 == 1)
    // {
    //     if (n % 2 == 1)
    //     {
    //         if ((n - 1) % b == 0)
    //         {
    //             cout << "Yes" << endl;
    //         }
    //         else
    //         {
    //             cout << "No" << endl;
    //         }
    //     }
    //     else
    //     {
    //         cout << "Yes" << endl;
    //     }
    // }
    // else if (a % 2 == 0 && b & 2 == 0)
    // {
    //     if (n % 2 == 0)
    //     {
    //         if ((n - 1) % b == 1)
    //         {
    //             cout << "Yes" << endl;
    //         }
    //         else
    //         {
    //             cout << "No" << endl;
    //         }
    //     }
    //     else
    //     {
    //         cout << "Yes" << endl;
    //     }
    // }
    // else
    // {
    //     if (a % 2 == 1 && b % 2 == 0)
    //     {
    //         if (n % 2 == 1 || (n - 1) % b == 0)
    //         {
    //             cout << "Yes" << endl;
    //         }
    //         else
    //             cout << "No" << endl;
    //     }

    //     else if (b % 2 == 1 && a % 2 == 0)
    //     {
    //         if (n % 2 == 0 || (n - 1) % b == 0)
    //             cout << "Yes" << endl;
    //         else
    //             cout << "No" << endl;
    //     }
    // }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}