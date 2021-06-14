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
#define Fo(i,a,n) for(i=a;i<=n;i++)
int mpow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) result = ((long long)result * base) % mod;
        base = ((long long)base * base) % mod;
        exp >>= 1;
    }
    return result;
}
const int N = 1e6 + 1;
ll fac[N], inv[N], b[N];
void pre() {
    int i;
    fac[0] = inv[0] = 1;
    fac[1] = inv[1] = 1;
    Fo(i, 2, N) {
        fac[i] = (i * fac[i - 1]) % mod;
        inv[i] = (mpow(i, mod - 2) * inv[i - 1]) % mod;
    }
}
ll C(int n, int r) {
    if (r > n)return 0;
    ll ans = fac[n];
    ans *= inv[r];
    ans %= mod;
    ans *= inv[n - r];
    ans %= mod;
    return ans;
}
int main() {

    pre();
    // cout << NcR::get(4, 2) << endl;
    int t;
    cin >> t; while (t--)
    {
        ll n, k; cin >> n >> k;
        ll ans = C(n + k + 1, k + 2);
        ans %= mod;
        ans = (2 * ans - n + mod) % mod;
        // ans = (ans % mod) * (n % mod);
        cout << ans << endl;

    }
    return 0;
}