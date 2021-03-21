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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll count1 = 0, count2 = 0, count3 = 0;
        ll n;
        cin >> n;
        ll arr[n];
        ll i, j;
        rep(i, n)
        {
            cin >> arr[i];
        }
        rep(i, n)
        {
            if (i % 3 == 0)
            {
                if (arr[i] != 0)
                    count1++;
                if (arr[i] != 1)
                    count2++;
                if (arr[i] != 2)
                    count3++;
            }
            else if (i % 3 == 1)
            {
                if (arr[i] != 1)
                    count1++;
                if (arr[i] != 2)
                    count2++;
                if (arr[i] != 0)
                    count3++;
            }
            else
            {
                if (arr[i] != 2)
                    count1++;
                if (arr[i] != 0)
                    count2++;
                if (arr[i] != 1)
                    count3++;
            }
        }
        cout << (min({count1, count2, count3})) << endl;
    }
}