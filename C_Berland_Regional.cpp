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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll u[n];
        ll s[n];
        vector<vector<ll>> arr(n + 1);
        ll i;
        ll j;
        rep(i, n)
        {
            cin >> u[i];
        }
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            arr[u[i]].pb(inp);
        }
        rep(i, n + 1)
        {
            if (i != 0)
                sort(arr[i].rbegin(), arr[i].rend());
        }
        vector<vector<ll>> sum(n + 1);
        for (i = 1; i <= n; i++)
        {
            sum[i].resize(arr[i].size());
        }
        for (i = 1; i <= n; i++)
        {
            if (arr[i].size() > 0)
                sum[i][0] = arr[i][0];
            for (ll j = 1; j < arr[i].size(); j++)
            {
                sum[i][j] = sum[i][j - 1] + arr[i][j];
            }
        }
        for (ll k = 1; k <= n; k++)
        {
            ll ans = 0;
            ll tn = arr[i].size();
            for (ll i = 1; i <= min(n, tn); i++)
            {
                // ll size = arr[i].size();
                // ll temp = 0;
                // if (size >= k)
                // {
                //     ll p = size % k;
                //     temp = sum[i];
                //     for (ll j = size - 1; j >= size - p; j--)
                //     {
                //         temp -= arr[i][j];
                //     }
                // }

                // ans += temp;
                ll p = (tn / i) * i;
                ans += sum[i][p - 1];
            }

            cout << ans << " ";
        }
        cout << endl;
    }
}