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
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll j, k;
    rep(i, n)
    {
        rep(j, n)
        {
            if (i != j)
            {
                ll x = m - arr[i] - arr[j];
                if (binary_search(arr, arr + n, x))
                {
                    // if(lower_bound(arr,arr+n,x)-upper_bound(arr,arr+n,x))
                    // {

                    // }
                    ll pos = (lower_bound(arr, arr + n, x) - arr);
                    if (pos != i && pos != j)
                    {
                        cout << "YES\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO\n";
}