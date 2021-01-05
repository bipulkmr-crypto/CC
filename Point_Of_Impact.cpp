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
        ll n, k, x, y;
        cin >> n >> k >> x >> y;
        k = k % 4;
        if (x == y)
        {
            cout << n << " " << n << endl;
        }

        else if (x > y)
        {
            if (k == 1)
            {
                cout << n << " " << (n - x + y) << endl;
            }
            else if (k == 2)
            {
                cout << (n - x + y) << " " << n << endl;
            }
            else
                cout << 0 << " " << (x - y) << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << (n + x - y) << " " << n << endl;
            }
            else if (k == 1)
            {
                cout << (n) << " " << (y - x) << endl;
            }
            else if (k == 3)
            {
                cout << (y - x) << " " << 0 << endl;
            }
        }
    }
}