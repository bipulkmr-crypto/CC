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
ll gcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll x, y;
    ll i,j;
    ll ans=0;
    for(i=0;i<n;i++)
    //Extended Euclidian will not help bro this is based on three variables try using brute force
    // ll g;
    // g = gcd(a, b, x, y);
    // ll ans1 = 0;
    // if (n % g == 0)
    // {
    //     x *= c / g;
    //     y *= c / g;
    //     if (a < 0)
    //         x = -x;
    //     if (b < 0)
    //         y = -y;
    //     x = max(0ll, x);
    //     y = max(0ll, y);
    //     ans1 = x + y;
    // }
    // ll ans2 = 0;
    // g = gcd(a, c, x, y);
    // if (n % g == 0)
    // {
    //     x *= c / g;
    //     y *= c / g;
    //     if (a < 0)
    //         x = -x;
    //     if (b < 0)
    //         y = -y;
    //     x = max(0ll, x);
    //     y = max(0ll, y);
    //     ans2 = x + y;
    // }
    // ll ans3 = 0;
    // g = gcd(b, c, x, y);
    // if (n % g == 0)
    // {
    //     x *= c / g;
    //     y *= c / g;
    //     if (a < 0)
    //         x = -x;
    //     if (b < 0)
    //         y = -y;
    //     x = max(0ll, x);
    //     y = max(0ll, y);
    //     ans3 = x + y;
    // }
    cout << (max({ans1, ans2, ans3})) << endl;
}