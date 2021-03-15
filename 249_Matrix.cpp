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
ll gray(ll n)
{
    return (n ^ (n >> 1));
}
int main()
{
    fast
        ll n,
        m;
    cin >> n >> m;
    ll arr[1 << n][1 << m] = {0};
    ll x = 0;
    ll i, j;
    for (i = 0; i < (1 << m); i++)
    {
        if (i & 1)
        {
            for (j = (1 << n) - 1; j >= 0; j--)
            {
                arr[j][i] = (x ^ (x >> 1));
                x++;
            }
        }
        else
        {
            for (j = 0; j < (1 << n); j++)
            {
                arr[j][i] = (x ^ (x >> 1));
                x++;
            }
        }
    }
    for (i = 0; i < (1 << n); i++)
    {
        for (j = 0; j < (1 << m); j++)
        {
            cout << (arr[i][j]) << " ";
        }
        cout << endl;
    }
}