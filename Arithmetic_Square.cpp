// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define print(x) cout << 'Case #' << t << ': ' << x << endl;
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
// // int t = 1;
// // #define int ll
// // void still_single()
// // {
// //     int arr[3][3];
// //     int i;
// //     int maxi = INT_MIN, mini = INT_MAX;
// //     rep(i, 3)
// //     {
// //         if (i == 1)
// //         {
// //             cin >> arr[1][0] >> arr[1][2];
// //             maxi = max(maxi, max(arr[1][0], arr[1][2]));
// //             mini = min(maxi, min(arr[1][0], arr[1][2]));
// //         }
// //         else
// //         {
// //             int j;
// //             rep(j, 3)
// //             {
// //                 cin >> arr[i][j];
// //                 maxi = max(maxi, arr[i][j]);
// //                 mini = min(mini, arr[i][j]);
// //             }
// //         }
// //     }
// //     int ans = 0;
// //     ans += (2 * arr[0][1] == (arr[0][0] + arr[0][2]));
// //     ans += (2 * arr[1][0] == (arr[0][0] + arr[2][0]));
// //     ans += (2 * arr[1][2] == (arr[0][2] + arr[2][2]));
// //     ans += (2 * arr[2][1] == (arr[2][0] + arr[2][2]));
// //     int p = 1;
// //     int x;
// //     int cnt;
// //     x = (arr[0][0] + arr[2][2]);
// //     cnt = 0;
// //     cnt += (x == (arr[0][0] + arr[2][2]));
// //     cnt += (x == (arr[2][0] + arr[0][2]));
// //     cnt += (x == (arr[1][2] + arr[1][0]));
// //     cnt += (x == (arr[0][1] + arr[2][1]));
// //     p = max(p, cnt);
// //     x = (arr[2][0] + arr[0][2]);
// //     cnt = 0;
// //     cnt += (x == (arr[0][0] + arr[2][2]));
// //     cnt += (x == (arr[2][0] + arr[0][2]));
// //     cnt += (x == (arr[1][2] + arr[1][0]));
// //     cnt += (x == (arr[0][1] + arr[2][1]));
// //     p = max(p, cnt);
// //     x = (arr[1][2] + arr[1][0]);
// //     cnt = 0;
// //     cnt += (x == (arr[0][0] + arr[2][2]));
// //     cnt += (x == (arr[2][0] + arr[0][2]));
// //     cnt += (x == (arr[1][2] + arr[1][0]));
// //     cnt += (x == (arr[0][1] + arr[2][1]));
// //     p = max(p, cnt);
// //     x = (arr[0][1] + arr[2][1]);
// //     cnt = 0;
// //     cnt += (x == (arr[0][0] + arr[2][2]));
// //     cnt += (x == (arr[2][0] + arr[0][2]));
// //     cnt += (x == (arr[1][2] + arr[1][0]));
// //     cnt += (x == (arr[0][1] + arr[2][1]));
// //     p = max(p, cnt);
// //     // if (p != INT_MIN)
// //     ans += p;
// //     cout << "Case #" << t << ": " << ans << endl;
// // }

// // /*Don't just sit and hope that God will solve this
// // fucking do some	thing, try to observe or solve it a different way.
// // Use that pen and paper.
// // If nothing works take a deep breath and start again*/
// // signed main()
// // {
// //     fast int x;
// //     cin >> x;
// //     for (t = 1; t <= x; t++)
// //     {
// //         still_single();
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define range(i, n) for (int i = 0; i < n; i++)
// #define range1(i, n) for (int i = 1; i <= n; i++)
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define test(x) \
//     int x;      \
//     cin >> x;   \
//     while (x--)
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define mii map<int, int>
// #define mp make_pair
// #define pb push_back
// // #define pb pop_back
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define print(x) cout << 'Case #' << t << ': ' << x << endl;
// // #define mod9 1000000009
// // #define mod7 1000000007
// // #define INF 1e18
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
// #define input(x) cin >> (x)

// signed main()
// {
//     int n;
//     cin >> n;
//     for (int j = 1; j <= n; j++)
//     {

//         int a, b, c;
//         int d, f;
//         int g, h, i;
//         cin >> a >> b >> c >> d >> f >> g >> h >> i;
//         int x1 = (b + h);
//         int x2 = (d + f);
//         int x3 = (g + c);
//         int x4 = (a + i);
//         vii l;
//         if (x1 % 2 == 0)
//             l.pb(x1);
//         if (x2 % 2 == 0)
//             l.pb(x2);
//         if (x3 % 2 == 0)
//             l.pb(x3);
//         if (x4 % 2 == 0)
//             l.pb(x4);
//         mll mapp;
//         int p = 1;
//         for(auto it:l)
//         {
//             mapp[it]++;
//         }
//         int cnt = 0;
//         if (a + c == 2 * b)
//         {
//             cnt++;
//         }
//         if (a + g == 2 * d)
//         {
//             cnt++;
//         }
//         if (g + i == 2 * h)
//         {
//             cnt++;
//         }
//         if (c + i == 2 * f)
//         {
//             cnt++;
//         }
//         sort(all(l));
//         int temp1 = 1;
//         int mx = 1;
//         ford(mapp, it)
//         {
//             mx = max(mx, it->second);
//         }
//         cnt += mx;
//         cout << "Case #" << j << ": " << cnt << endl;
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
#define print(x) cout << 'Case #' << t << ': ' << x << endl;
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
int t = 1;
#define int ll
void still_single()
{
    int arr[3][3];
    int i;
    int maxi = INT_MIN, mini = INT_MAX;
    rep(i, 3)
    {
        if (i == 1)
        {
            cin >> arr[1][0] >> arr[1][2];
            maxi = max(maxi, max(arr[1][0], arr[1][2]));
            mini = min(maxi, min(arr[1][0], arr[1][2]));
        }
        else
        {
            int j;
            rep(j, 3)
            {
                cin >> arr[i][j];
                maxi = max(maxi, arr[i][j]);
                mini = min(mini, arr[i][j]);
            }
        }
    }
    int ans = 0;
    ans += (2 * arr[0][1] == (arr[0][0] + arr[0][2]));
    ans += (2 * arr[1][0] == (arr[0][0] + arr[2][0]));
    ans += (2 * arr[1][2] == (arr[0][2] + arr[2][2]));
    ans += (2 * arr[2][1] == (arr[2][0] + arr[2][2]));
    int p = 1;
    int x;
    int cnt;
    x = (arr[0][0] + arr[2][2]);
    if (x % 2 == 0)
    {
        cnt = 0;
        cnt += (x == (arr[0][0] + arr[2][2]));
        cnt += (x == (arr[2][0] + arr[0][2]));
        cnt += (x == (arr[1][2] + arr[1][0]));
        cnt += (x == (arr[0][1] + arr[2][1]));
        p = max(p, cnt);
    }

    x = (arr[2][0] + arr[0][2]);
    if (x % 2 == 0)
    {
        cnt = 0;
        cnt += (x == (arr[0][0] + arr[2][2]));
        cnt += (x == (arr[2][0] + arr[0][2]));
        cnt += (x == (arr[1][2] + arr[1][0]));
        cnt += (x == (arr[0][1] + arr[2][1]));
        p = max(p, cnt);
    }
    x = (arr[1][2] + arr[1][0]);
    if (x % 2 == 0)
    {
        cnt = 0;
        cnt += (x == (arr[0][0] + arr[2][2]));
        cnt += (x == (arr[2][0] + arr[0][2]));
        cnt += (x == (arr[1][2] + arr[1][0]));
        cnt += (x == (arr[0][1] + arr[2][1]));
        p = max(p, cnt);
    }
    if (x % 2 == 0)
    {
        x = (arr[0][1] + arr[2][1]);
        cnt = 0;
        cnt += (x == (arr[0][0] + arr[2][2]));
        cnt += (x == (arr[2][0] + arr[0][2]));
        cnt += (x == (arr[1][2] + arr[1][0]));
        cnt += (x == (arr[0][1] + arr[2][1]));
        p = max(p, cnt);
    }
    // if (p != INT_MIN)
    ans += p;
    cout << "Case #" << t << ": " << ans << endl;
}

/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    fast int x;
    cin >> x;
    for (t = 1; t <= x; t++)
    {
        still_single();
    }
    return 0;
}