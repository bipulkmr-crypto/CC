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
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    ll b[n][m];
    ll i, j;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> b[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, m)
        {
            ll x = a[i][j];
            ll y = b[i][j];
            a[i][j] = min(x, y);
            b[i][j] = max(x, y);
        }
    }
    bool flag = true;
    rep(i, n)
    {
        rep(j, m - 1)
        {
            if (a[i][j] >= a[i][j + 1])
            {
                cout << "Impossible\n";
                flag = false;
                return 0;
            }
        }
    }
    rep(i, m)
    {
        rep(j, n - 1)
        {
            if (a[j][i] >= a[j + 1][i])
            {
                cout << "Impossible\n";
                flag = false;
                return 0;
            }
        }
    }
    rep(i, n)
    {
        rep(j, m - 1)
        {
            if (b[i][j] >= b[i][j + 1])
            {
                cout << "Impossible\n";
                flag = false;
                return 0;
            }
        }
    }
    rep(i, m)
    {
        rep(j, n - 1)
        {
            if (b[j][i] >= b[j + 1][i])
            {
                cout << "Impossible\n";
                flag = false;
                return 0;
            }
        }
    }
    if (flag)
    {
        cout << "Possible\n";
    }
    else
    {
        cout << "Impossible\n";
    }
}