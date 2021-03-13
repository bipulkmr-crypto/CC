#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
// ll binpow(ll a, ll b)
// {
//     a %= mod;
//     ll res = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }
long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n<3)
        {
            cout<<n<<endl;
            continue;
        }
        ll rem=n%3;
        ll ans;
        if(rem==1)
        {
            ll n1=(n-4)/3;
            ans=4*binpow(3,n1);
        }
        else if(rem==2)
        {
            ll n1=(n-2)/3;
            ans=2*binpow(3,n1);
        } 
        else
        ans = binpow(3, n / 3);
        ans%=mod;
        cout << ans << endl;
    }
}