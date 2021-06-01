#include<bits/stdc++.h>
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
int mpow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) result = ((long long)result * base) % mod;
        base = ((long long)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

namespace NcR {
int fact[200005], ifact[200005];
int get(int n, int r) {
    if (n < r || r < 0 || n < 0) return 0;
    return (((fact[n] * 1LL * ifact[r]) % mod) * 1LL * ifact[n - r]) % mod;
}

void init() {
    fact[0] = 1;
    for (int i = 1; i <= 200000; i++) {
        fact[i] = (fact[i - 1] * 1LL * i) % mod;
    }

    ifact[200000] = mpow(fact[200000], mod - 2);
    for (int i = 199999; i >= 0; i--) {
        ifact[i] = (ifact[i + 1] * 1LL * (i + 1)) % mod;
    }
}
};

int main() {

    NcR::init();
    // cout << NcR::get(4, 2) << endl;
    int t;
    cin >> t; while (t--)
    {
        int n, k; cin >> n >> k;
        ll ans = NcR::get(n + k + 1, k + 2);
        ans %= mod;
        ans = (2 * ans - n + mod) % mod;
        // ans = (ans % mod) * (n % mod);
        cout << ans << endl;

    }
    return 0;
}