#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000
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
using namespace std;
const int N = 1e6;
#define Fo(i,a,n) for(i=2;i<=n;i++)
// unsigned long int binomialCoeff(unsigned int n,
//                                 unsigned int k)
// {
//     unsigned long int res = 1;

//     // Since C(n, k) = C(n, n-k)
//     if (k > n - k)
//         k = n - k;

//     // Calculate value of [n*(n-1)*---*(n-k+1)] /
//     // [k*(k-1)*---*1]
//     for (int i = 0; i < k; ++i) {
//         res *= (n - i);
//         res %= mod;
//         res /= (i + 1);
//         res %= mod;
//     }

//     return res % mod;
// }

// // A Binomial coefficient based function to find nth catalan
// // number in O(n) time
// unsigned long int catalan(unsigned int n)
// {
//     // Calculate value of 2nCn
//     unsigned long int c = binomialCoeff(2 * n, n);

//     // return 2nCn/(n+1)
//     return c / (n + 1);
// }
ll arr[1001][1001] = {{0ll}};
void catalan()
{
    int i, j;
    rep(i, 1001)
    {
        rep(j, 1001)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = (arr[i][j - 1] + arr[i - 1][j]) % mod;
            }
        }
    }
}
int main()
{
    ll n;
    catalan();
    while (cin >> n)
    {
        if (n == 0)
        {
            return 0;
        }
        ll ans = arr[n][n];
        cout << ans << endl;
    }
}