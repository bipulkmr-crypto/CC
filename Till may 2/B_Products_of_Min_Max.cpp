#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 998244353
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
ll binpow(ll a, ll b)
{
    a %= mod;
    if (b == 1)
        return a;
    ll res = 1;
    while (b > 0)
    {

        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b>>=1;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    vll arr(n);
    vll pow2(10001);
    pow2[0] = 1;
    pow2[1] = 2;
    ll i;
    fu(i, 1, 10000)
    {
        pow2[i] = pow2[i - 1] * 2;
    }

    ll x = 0;
    rep(i, n)
    {
        cin >> arr[i];
        x += (arr[i] * arr[i]);
    }
    x %= mod;
    sort(all(arr));
    ll sum = 0;
    ll j;
    ll pro = 0;
    rep(i, n)
    {
        pro=(pro+(sum*arr[i])%mod)%mod;
        pro=(pro+(arr[i]*arr[i])%mod)%mod;
        sum=(2*sum+arr[i])%mod;
    }
    ll val = (sum + x) % mod;
    cout << pro << endl;
}