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
#define all(x) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    fast
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m] = {0};
        ll count = 0;

        ll i, j;
        rep(i, n)
        {
            rep(j, m)
            {
                cin >> arr[i][j];
            }
        }
        for (i = 0; i < (1 << n); i++)
        {
            ll check[m] = {0};
            for (j = 0; j < n; j++)
            {
                if (i & 1 << j)
                {
                    for (ll k = 0; k < m; k++)
                    {
                        check[k] = check[k] | arr[j][k];
                    }
                }
            }
            bool flag = true;
            ll k;
            rep(k, m)
            {
                if (check[k] != 1)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                count++;
        }
        cout << count << endl;
    }
}