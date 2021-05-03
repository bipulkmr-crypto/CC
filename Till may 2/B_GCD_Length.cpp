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
ll countDigit(ll n)
{
    return floor(log10(n) + 1);
}
int main()
{
    ll t;
    ll primes[] = {0, 1, 13, 103, 1009, 10007, 100003, 1000003, 10000019};
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < 9)
        {
            ll x = primes[c];
            ll y = primes[c];
            while (countDigit(x) < a)
            {
                x *= 2;
            }
            while (countDigit(y) < b)
            {
                y *= 3;
            }
            cout << x << " " << y << endl;
        }
        else
        {
            cout << "111111111"
                 << " "
                 << "111111111" << endl;
        }
    }
}