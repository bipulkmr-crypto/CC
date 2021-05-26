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
int n;
int m;
vll a;
vll b;
bool good(double x)
{
    int i;
    rep(i, n)
    {
        double val = x + m;
        double p = val / (double(a[i]));
        x -= p;
        val = (x + m);
        p = val / (double(b[i]));
        x -= p;
        if (x < 0)
            return false;
    }
    return true;
}
int main()
{
    cin >> n >> m;
    a.resize(n);
    b.resize(n);
    int i;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    double low = 0.0, eps = 1e-6, high = 1e13;
    double mid;
    while (high - low > eps)
    {
        mid = (high + low) * 0.50;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    if (high == (1e13))
    {
        cout << -1 << endl;
        return 0;
    }
    if (good(low))
        cout << setprecision(10) << fixed << low << endl;
    else
        cout << setprecision(10) << fixed << high << endl;
}