#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[m];
    ll i;
    rep(i, m)
            cin >>
        arr[i];
    ll fedor;
    cin >> fedor;
    ll j;
    ll x[m];
    rep(i, m)
    {
        x[i] = arr[i] ^ fedor;
    }
    ll count = 0;
    rep(i, m)
    {
        if (__builtin_popcount(x[i]) <= k)
        {
            count++;
        }
    }
    cout << count << endl;
}
// #include <bits/stdc++.h>

// using namespace std;

// #define int long long

// #define deb(x) cout << #x << " = " << x << endl;

// #define endl "\n"

// // #define v1(type, name, size) vector<type> name(size);

// // #define supafast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// const int MOD = 1e9 + 7;

// const int INF = 1e18;

// int a, b, c, d, k;

// #define foo(t) a *pow(t, 3) + b *pow(t, 2) + c *t + d

// int bSearch(int lo, int hi, int k)

// {

//     int res = 0;

//     while (lo <= hi)

//     {

//         int mid = lo + (hi - lo) / 2;

//         if (foo(mid) <= k && foo(mid + 1) > k)

//         {

//             return mid;
//         }

//         if (foo(mid) <= k)

//         {

//             res = mid;

//             lo = mid + 1;
//         }

//         else

//         {

//             hi = mid - 1;
//         }
//     }

//     return res;
// }

// void solution()

// {

//     cin >> a >> b >> c >> d >> k;

//     cout << bSearch(0, 1000000, k) << endl;

//     //since ((10^6)^3) = 10^18

//     //so upperbound for t is 10^6
// }

// int32_t main()

// {

//     int testCases = 1;

//     cin >> testCases;

//     while (testCases-- > 0)

//     {

//         solution();
//     }

//     return 0;
// }