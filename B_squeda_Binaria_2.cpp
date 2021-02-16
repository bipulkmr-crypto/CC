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
ll n, q;
vector<ll> arr;
ll binsearch(ll x)
{
    ll low = 0, mid, high = n - 1;
    ll ans;
    bool flag = false;
    while (high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            flag = true;
            ans = mid;
            low = mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (arr[high] == x)
    {
        return high;
    }
    else if (flag)
        return ans;

    else if (arr[low] == x)
        return low;
    else
    {
        return -1;
    }
}
int main()
{

    cin >> n >> q;
    ll i;
    arr.resize(n);
    rep(i, n)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while (q--)
    {
        ll inp;
        cin >> inp;
        cout << binsearch(inp) << endl;
    }
}