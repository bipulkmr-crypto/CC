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
    map<char, ll> m;
    int n = s.length();
    int i;
    rep(i, n)
    {
        m[s[i]]++;
    }
    if (m['o'] > 4)
    {
        cout << 0 << endl;
    }
    else
    {
        if (m['o'] == 4)
        {
            cout << 24 << endl;
        }
        else if (m['o'] == 3)
        {
            ll ans = 36 + m['?'] * 24;
            cout << ans << endl;
        }
        else if (m['o'] == 2)
        {
            ll val = m['?'];
            ll ans = 14 + 36 * val + 12 * (val * (val - 1));
            cout << ans << endl;
        }
        else if (m['o'] == 1)
        {
            ll val = m['?'];
            ll ans = 1 + val * 14;
            if (val > 1)
            {
                ans += 18 * (val * (val - 1));
            }
            if (val > 2)
            {
                ans += (4 * val * (val - 1) * (val - 2));
            }
            cout << ans << endl;
        }
        else
        {
            ll q=m['?'];
            cout << q + (7 * q * (q - 1)) + (6 * q * (q - 1) * (q - 2)) + (q * (q - 1) * (q - 2) * (q - 3));
        }
    }
}