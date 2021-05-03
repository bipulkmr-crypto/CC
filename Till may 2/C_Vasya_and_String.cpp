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
string s;
ll n, k;
bool good(ll x)
{
    map<char, ll> m;
    ll i;
    for (i = 0; i < x; i++)
    {
        m[s[i]]++;
    }
    ll diff = min(m['a'], m['b']);
    if (diff <= (k))
    {
        return true;
    }
    // else
    //     return false;

    ll j = x;
    for (; j < n; j++)
    {
        m[s[j]]++;
        m[s[j - x ]]--;
        ll val = min(m['a'], m['b']);
        if(val<=k)
        return true;
    }
    return false;
}
int main()
{

    cin >> n >> k;

    cin >> s;
    ll low = 0, high = n;
    ll mid;
    while (high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (good(mid))
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    if (good(high))
    {
        cout << high << endl;
    }
    else 
    {
        cout << low << endl;
    }
}