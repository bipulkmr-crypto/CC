// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define MOD 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// // ll binpow(ll a, ll b)
// // {
// //     a %= mod;
// //     ll res = 1;
// //     while (b > 0)
// //     {
// //         if (b & 1)
// //             res *a;
// //         a *= a;
// //         b >>= 1;
// //     }
// //     return res;
// // // }
// long long binpow(long long a, long long b)
// {
//     long long res = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }
// // ll f[10000];
// // ll factmod()
// // {
// //     f[0]=1;
// //     for(ll i=1;i<10000;i++)
// //     {
// //         f[i]=f[i-1]*i%p;
// //     }
// //     ll res=1;
// //     while(n>1)
// //     {
// //         if((n%p)%2)
// //         {

// //         }
// //     }
// // }
// // int main()
// // {
// //     ll n;
// //     cin >> n;
// //     // ll val = ((n % mod) * (n % mod) % mod);
// //     ll val = binpow(2ll, n);
// //     cout << val << endl;
// // // }
// // int main()
// // {
// //     ll n;
// //     cin >> n;
// //     ll fact = 1;
// //     ll i;
// //     for (i = 2; i <= n; i++)
// //     {
// //         fact = (fact % mod) * (i % mod);
// //         fact %= mod;
// //     }
// //     ll val = binpow(2, n - 1);
// //     fact -= val;
// //     if (fact < 0)
// //     {
// //         fact += mod;
// //     }
// //     // fact %= mod;
// //     cout << fact << endl;
// // }
// int n;
// int res, fact;

// signed main()
// {
//     cin >> n;
//     res = 1;
//     fact = 1;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         res *= 2;
//         fact *= i;
//         fact %= MOD;
//         res %= MOD;
//     }
//     fact *= n;
//     fact %= MOD;
//     fact -= res;
//     fact %= MOD;
//     if (fact < 0)
//         fact += MOD;
//     cout << fact;
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

#define int long long
const int MOD = 1e9+7;

int n;
int res,fact;

signed main(){
	cin >> n;
	res = 1;
	fact = 1;
	for(int i = 1;i <= n-1;i++){
		res *= 2;
		fact *= i;
		fact %= MOD;
		res %= MOD;
	}
	fact *= n;
	fact %= MOD;
	fact -= res;
	fact %= MOD;
	if(fact < 0)fact += MOD;
	cout << fact;
	return 0;
}