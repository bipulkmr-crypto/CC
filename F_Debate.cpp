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
#define all(v) v.rbegin(), v.rend()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a, b, c, d;
    int i;
    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        if (s == "00")
            a.pb(x);
        else if (s == "01")
            b.pb(x);
        else if (s == "10")
            c.pb(x);
        else
            d.pb(x);
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    sort(all(d));
    int j = 0;
    i = 0;
    int s1 = 0, s2 = 0, m = 0;
    int pos = -1;
    for (i = 0; i < a.size(); i++)
        ans += a[i];

    for (i = 0; i < min(c.size(), b.size()); i++)
    {
        ans += (b[i] + c[i]);
    }
    i = min(b.size(), c.size());
    m = a.size() + 2 * i;
    j = 0;
    while ((m + j) <= 2 * (i + a.size()))
    {
        if (b.size() < c.size())
        {

            if (d[j] > c[i + j])
            {
                ans += d[j];
            }
            else
                ans += c[i + j];
        }
        else
        {

            if (d[j] > b[i + j])
            {
                ans += d[j];
            }
            else
                ans += b[i + j];
        }

        j++;
    }

    cout << ans << endl;
}