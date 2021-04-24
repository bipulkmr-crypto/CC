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
string solve(string s, ll n)
{
    if (n == 2)
    {
        if (s[0] != s[1])
        {
            set<ll> si;
            si.insert(ll('W'));
            si.insert(ll('R'));
            si.insert(ll('B'));
            si.erase(ll(s[0]));
            si.erase(ll(s[1]));
            char ch = char(*(si.begin()));
            string ans = "";
            ans += ch;
            return (ans);
        }
        else
        {
            char ch = s[0];
            string ans = "";
            ans += ch;
            return (ans);
        }
    }
    else
    {
        ll i;
        string ans = "";

        for (i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])

            {
                set<ll> si;
                si.insert(ll('W'));
                si.insert(ll('R'));
                si.insert(ll('B'));
                si.erase(ll(s[i]));
                si.erase(ll(s[i + 1]));
                ans += to_string(char(*(si.begin())));
            }
            else
            {
                ans += s[i];
            }
        }

        return (solve(ans, n - 1));
    }
}
int main()
{
    ll n;
    string s;
    cin >> n >> s;
    string ans = solve(s, n);
    cout << ans << endl;
}