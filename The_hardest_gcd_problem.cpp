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
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll i;
        rep(i, n)
                cin >>
            arr[i];
        ll g;
        g = __gcd(arr[0], arr[1]);
        for (i = 1; i < n; i++)
        {
            g = __gcd(g, arr[i]);
        }
        ll fact = 1;
        for (i = 2; i < sqrt(g); i++)
        {
            while (g % i == 0)
            {
                g /= i;
                fact = max(fact, i);
            }
        }
        fact = max(g, fact);
        if (fact > k)
            cout << "NO\n";
        else
            cout << "YES\n";
        // {
        //     rep(i, n)
        //     {
        //         arr[i] /= g;
        //     }
        //     bool flag = true;
        //     // rep(i, n - 1)
        //     // {
        //     //     if (__gcd(arr[i], arr[i + 1]) != 1)
        //     //     {
        //     //         flag = false;
        //     //     }
        //     // }
        //     g = __gcd(arr[0], arr[1]);
        //     for (i = 1; i < n; i++)
        //     {
        //         g = __gcd(g, arr[i]);
        //     }
        //     if (g==1)
        //         cout << "YES\n";
        //     else
        //     {
        //         cout << "NO\n";
        //     }
        // }
    }
}