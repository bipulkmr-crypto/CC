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
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll c = 0;
        bool freq[100001] = {false};
        ll i;
        if (l == r)
        {
            cout << 1 << endl;
        }
        else
        {
            fu(i, l, r)
            {
                freq[(i + l) - (2 * l)] = true;
            }
            rep(i, 100001)
            {
                if (freq[i])
                    c++;
            }
            cout << (c+1) << endl;
        }
    }
}