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
    ll n, m, q;
    cin >> n >> m;
    ll arr[n + 2][m + 2] = {0};
    ll i, j;
    rep(i, n + 2)
    {
        rep(j, m + 2)
        {
            arr[i][j] = 0;
        }
    }
    cin >> q;
    ll c = 0;
    while (q--)
    {
        bool flag = false;
        ll x, y;
        cin >> x >> y;
        arr[x][y] = 1;
        fu(i, 1, n)
        {
            fu(j, 1, m)
            {
                flag = (arr[i][j] == arr[i + 1][j]) && (arr[i][j + 1] == arr[i + 1][j + 1]) && (arr[i + 1][j] == 1) && (arr[i + 1][j] == arr[i + 1][j + 1]);
            }
            if (flag)
                break;
        }
        c++;
        if (flag)
            break;
    }
    cout << c;
}