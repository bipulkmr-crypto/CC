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
#define size 100000
ll fact[size + 1];
void factmod()
{
    fact[0] = 1;
    for (int i = 1; i <= size; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        fact[i] %= mod;
    }
}
ll binpowmod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        b >>= 1;
        a *= a % mod;
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    factmod();
    while (t--)
    {
        string s;
        cin >> s;
        map<char, ll> m;
        ll i;
        ll n = s.length();
        rep(i, n)
            m[s[i]]++;
        ll ans = fact[n];
        auto it = m.begin();
        for (; it != m.end(); it++)
        {
            ans = ans * (binpowmod(fact[it->second], mod - 2)) % mod;
        }
        cout << ans << endl;
    }
}