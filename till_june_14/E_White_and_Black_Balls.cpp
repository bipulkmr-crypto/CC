#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
#define Fo(i, a, n) for (i = a; i < n; i++)
long long binpow(long long a, long long b)
{
    a %= mod;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
const int N = 2*(1e6 + 3);
ll fac[N], inv[N], b[N];
void pre()
{
    int i;
    fac[0] = inv[0] = 1;
    fac[1] = inv[1] = 1;
    Fo(i, 2, N)
    {
        fac[i] = (i * fac[i - 1]) % mod;
        inv[i] = (binpow(i, mod - 2) * inv[i - 1]) % mod;
    }
}
ll C(int n, int r)
{
    if (r > n)
        return 0;
    ll ans = fac[n];
    ans *= inv[r];
    ans %= mod;
    ans *= inv[n - r];
    ans %= mod;
    return ans;
}
ll no_of_ways(ll n, ll m)
{
    ll ans = 1;
    ll i;
    if(n<0||m<0)
    return 0;
    fu(i, 1, n + m)
    {
        ans *= i;
        ans %= mod;
    }
    fu(i, 1, n)
    {
        ans *= inv[i];
        ans %= mod;
    }
    fu(i, 1, m)
    {
        ans *= inv[i];
        ans %= mod;
    }

    return ans;
}
void still_single()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (n > m + k)
    {
        cout << 0 << endl;
        return;
    }
    ll val1=C(n+m,n)%mod;
    ll val2=C(n+m,m+k+1)%mod;
    // ll val1 = no_of_ways(n, m);
    // ll val2 = no_of_ways(n - k - 1, m + k + 1);
    ll ans = val1 - val2;
    ans=(ans+mod)%mod;
    cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    pre();
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}