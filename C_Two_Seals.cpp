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
#define f first
#define all(v) v.begin(), v.end()
#define s second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> v;
    int i;
    auto isvalid = [&](int x, int y) {
        int p = min(x, y);
        int q = max(x, y);
        return (p <= min(a, b) && q <= max(a, b));
    };

    rep(i, n)
    {
        int p, q;
        cin >> p >> q;
        v.pb({p, q});
    }
    int j;
    int mx = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (v[i].f + v[j].f <= a && max(v[i].s, v[j].s) <= b)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].f + v[j].f <= b && max(v[i].s, v[j].s) <= a)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].s + v[j].s <= a && max(v[i].f, v[j].f) <= b)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].s + v[j].s <= b && max(v[i].f, v[j].f) <= a)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].f + v[j].s <= b && max(v[i].s, v[j].f) <= a)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].s + v[j].f <= b && max(v[i].f, v[j].s) <= a)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].f + v[j].s <= a && max(v[i].s, v[j].f) <= b)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
                else if (v[i].s + v[j].f <= a && max(v[i].f, v[j].s) <= b)
                {
                    mx = max(v[i].f * v[i].s + v[j].f * v[j].s, mx);
                }
            }
        }
    }
    cout << mx << endl;
}