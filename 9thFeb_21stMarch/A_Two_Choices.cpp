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
    string s[n];
    ll i;
    rep(i, n)
    {
        cin >> s[i];
    }
    set<pll> sp;
    ll j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                if ((s[j][i] - '0') & (s[k][i] - '0'))
                {
                    // if (i != j)
                    {
                        ll maxi = max(j, k);
                        ll mini = min(j, k);
                        sp.insert(make_pair(maxi, mini));
                    }
                }
            }
        }
    }
    cout << sp.size() << endl;
}