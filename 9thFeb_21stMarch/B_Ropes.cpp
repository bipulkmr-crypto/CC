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
ll n, k;
vector<ll> arr;
bool good(double x)
{
    ll i;
    ll c = 0;
    rep(i, n)
    {
        c += floor(arr[i] / x);
    }
    return (c>=k);
}
int main()
{
    
    cin >> n >> k;
    arr.resize(n);
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    double low = 1.0, high=1e8,mid;
    double ans = 0;
    for (i = 0; i < 100; i++)
    {
        mid = (low + high) / 2.0;
        if (good(mid))
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }
   printf("%0.10f\n",low);
}