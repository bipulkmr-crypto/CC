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
ll binsearch(ll arr[], ll v, ll n)
{
    ll mid;
    ll lo = 0, hi = n - 1;
    ll pos = n - 1;
    while ((hi - lo) > 1)
    {
        mid = (hi + lo) / 2;
        if (arr[mid] == v)
        {
            return mid;
        }
        else if (arr[mid] > v)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid ;
        }
    }
    if (arr[lo] == v)
        return lo;
    if (arr[hi] == v)
        return hi;
    return n - 1;
}
int main()
{
    ll n;
    cin >> n;
    ll i;
    ll arr[n];
    ll sum[n + 1] = {0};
    rep(i, n)
    {
        cin >> arr[i];
        sum[i + 1] = sum[i] + arr[i];
    }
    sort(arr,arr+n);
    sort(sum,sum+n);
    ll q;
    cin >> q;
    while (q--)
    {
        ll v;
        ll p = 0;
        cin >> v;
        ll pos = binsearch(arr, v,n);
        cout << (pos + 1) << " " << (sum[pos + 1]) << endl;
    }
}