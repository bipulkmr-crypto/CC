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
void still_single()
{
    ll n;
    cin>>n;
    if(n<5)
    {
        cout<<0<<endl;
        return ;
    }
    ll ans=1;
    if(n>4)
    ans=(n%mod)*((n-1)%mod)*((n-2)%mod)*((n-3)%mod);
    ans%=mod;
    ans*=6;
    ans*=binpow(2,n-3);
    ans%=mod;
    ans*=binpow(24,mod-2);
    ans%=mod;
    cout<<ans<<endl;

}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// #define endl "\n"
// #define F first
// #define S second
// #define mod 1000000007
// #define ll long long
// #define ull unsigned long long int
// #define fr(i,n) for(ll i=0;i<n;i++)
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define fin(v,n) find(v.begin(),v.end(),n)
// #define pb(n) push_back(n);
// #define aut std::vector<ll>::iterator
// #define vsort(v) sort(v.begin(),v.end())
// #define rssort(s) sort(s.begin(),s.end(),greater<char>())
// #define si(s) stoi(s)
// #define is(n) to_string(n)
// #define ve(v,n) v.erase(v.begin()+n)
// #define hakuna_mattata ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define ks(n) cout << "Case #" << n+1 <<": "
// #define low(v,n) lower_bound(v.begin(),v.end(), n);
// #define upp(v,n) upper_bound(v.begin(),v.end(), n);
// #define test int t; cin >> t; while(t--)
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define MAXN   1002


// using namespace std;
// using namespace __gnu_pbds;
//  long long binpow(long long a, long long b) {
//     a %= mod;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }
// // ll power(long long x, ll y)
// // {
// //     ll res = 1;

// //     while (y > 0)
// //     {
// //         if (y & 1)
// //             res = (res*x) % mod;

// //         y = y>>1;
// //         x = (x*x) % mod;
// //     }
// //     return res%mod;
// // }

// void solve(){
//     ll n; cin >> n;
//     if(n<=3){
//         cout << 0 << endl;
//         return;
//     }
//     cout << (binpow(2,n)-2-(2*n%mod))%mod << endl;
// }

// int main()

// {
//     hakuna_mattata;

//     int t = 1;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
// }