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
    ll arr[t];
    ll i;
    rep(i, t)
            cin >>
        arr[i];
    ll co = 0, c2 = 0;
    rep(i, t)
    {
        if (arr[i] %2)
            co++;
        else
            c2++;
    }
    if (co > c2)
    {
        rep(i, t)
        {
            if (arr[i] % 2 == 0)
            {
                cout << (i+1)<< endl;
                break;
            }
        }
    }
    else
    {
         rep(i, t)
        {
            if (arr[i] % 2 == 1)
            {
                cout << (i+1) << endl;
                break;
            }
        }
    }
}