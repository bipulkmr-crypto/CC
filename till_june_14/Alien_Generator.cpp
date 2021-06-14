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
const int M = 1e6 + 3;
int pr[M];
vector<int> primes;
//sieve of erathoses
void pre()
{
    int i;
    rep(i,M)
    pr[i]=1;
    pr[1] = 0, pr[0] = 0;
    for (i = 2; i * i < M; i++)
    {
        if (pr[i])
        {
            for (int j = i * i; j < M; j += i)
            {
                pr[j] = 0;
            }
        }
    }
    for (i = 2; i < M; i++)
    {
        if (pr[i])
            primes.pb(i);
    }
}
int main()
{
    int t;
    pre();
    cin >> t;
    int j;
    fu(j, 1, t)
    {
        ll g;
        ll i;
        ll k = 2;
        cin >> g;
        ll sum = 0;
        ll ans = 1;
        map<ll, ll> m;
        for (auto x : primes)
        {
            if (g % x == 0)
            {
                while (g % x == 0)
                {
                    g /= x;
                    m[x]++;
                }
            }
            if(g<x)
            {
                break;
            }
        }
        auto it = m.begin();
        for (; it != m.end(); it++)
        {
            if (it->first != 2)
                ans *= (it->second + 1);
        }
        // ans-=1;
        // ans*=2;
        cout << "Case #" << j << ": " << ans << endl;
    }
}