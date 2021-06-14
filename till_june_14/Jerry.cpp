#include <bits/stdc++.h>
using namespace std;
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
typedef long long int ll;
const int size = 1e6;
vector<bool> isprime(size, true);
vector<int> primes;
void seive()
{
    ll i, j;
    isprime[0] = isprime[1] = true;
    for (i = 2; i * i < size; i++)
    {
        if (isprime[i])
        {
            for (j = i * i; j < size; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    // int i;
    rep(i, size)
    {
        if (isprime[i])
        {
            primes.pb(i);
        }
    }
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int count = 1;
        ll i;
        mll m;
        for (int x : primes)
        {
            if (n % x == 0)
            {
                while (n % x == 0)
                {
                    m[x]++;
                    n /= x;
                }
            }
        }
        ll ans = 1;
        auto it = m.begin();
        for (; it != m.end(); it++)
        {
            ans *= (it->second + 1);
        }
        ans -= m.size();
        cout << ans << endl;
    }
}