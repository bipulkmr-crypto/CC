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
        ll n;
        cin >> n;
        ll c = 0;
        while (n > 0)
        {
            c++;
            if (n % 3 == 0)
            {
                if (n > 2)
                {
                    n -= 2;
                }
                else
                {
                    n = 0;
                }
            }
            else if (n % 3 == 1)
            {
                if (n > 3)
                    n -= 3;
                else
                {
                    n -= 1;
                }
            }
            else
            {
                if (n > 3)
                    n -= 3;
                else
                {
                    n = 0;
                }
            }
        }
        if (c % 2)
            cout << "Alice\n";
        else
        {
            cout << "Bob\n";
        }
    }
}