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

#define int ll
#define gi(n) scanf(% d, &n)
ll x, y, d;
void extendedEuclid(ll a, ll b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedEuclid(b, a % b);
    ll x1, y1;
    x1 = y;
    y1 = x - a / b * y;
    x = x1;
    y = y1;
}
// // bool find_any_solution(int a, int b, int c)
// // {
// //     int g,x0,y0;
// //     g = gcd(abs(a), abs(b), x0, y0);
// //     if (c % g)
// //     {
// //         return false;
// //     }

// //     x0 *= c / g;
// //     y0 *= c / g;
// //     // if (a < 0)
// //     //     x0 = -x0;
// //     // if (b < 0)
// //     //     y0 = -y0;
// //     if(x0>=0&&y0>=0)
// //     return true;
// //     else
// //     {
// //         return false;
// //     }
// }
void still_single()
{
    int a, b, c;
    cin >> a >> b >> d;
    // int g = __gcd(a, b);
    // int x, y;
    extendedEuclid(a, b);
    cout << x << ' ' << y << endl;
    if (c % a == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    else if (c % b == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        // g = gcd(a, b, x, y);
        extendedEuclid(a, b);
        cout << x << ' ' << y << endl;
        // if (c % g == 0)
        // {
        //     if (x >= 0 && y >= 0)
        //         cout << "Yes" << endl;
        // }
        // else
        //     cout << "No" << endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}