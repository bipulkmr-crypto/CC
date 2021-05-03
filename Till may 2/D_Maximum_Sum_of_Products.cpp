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
    ll n;

    cin >> n;
    ll a[n];
    ll b[n];
    ll i;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll l, r;
    ll sum = 0;
    ll original = 0;
    rep(i, n)
    {
        original += (a[i] * b[i]);
    }
    ll mx = original;
    rep(i, n)
    {
        ll curr = original;
        ll l = i, r = i;
        while (l != 0 && r != n - 1)
        {
            l--;
            r++;
            curr -= (a[l] * b[l]);
            curr -= (a[r] * b[r]);
            curr += (a[l] * b[r]);
            curr += (a[r] * b[l]);

            mx = max(curr, mx);
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        ll cur = original;
        ll l = i, r = i + 1;
        cur -= a[l] * b[l];
        cur -= a[r] * b[r];
        cur += a[l] * b[r];
        cur += a[r] * b[l];
        mx = max(mx, cur);
        while (l != 0 && r != n - 1)
        {
            l--;
            r++;
            cur -= a[l] * b[l];
            cur -= a[r] * b[r];
            cur += a[l] * b[r];
            cur += a[r] * b[l];
            mx = max(mx, cur);
        }
    }
    cout << mx << endl;
}
