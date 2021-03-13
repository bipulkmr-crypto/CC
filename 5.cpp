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
vector<ll> arr;
ll k;
bool good(ll x)
{
    ll count=0;
    ll i;
    rep(i,arr.size())
    {
        count+=ceil((double(arr[i]))/x);
    }
    if(count<=k)
    return true;
    else
    {
        return false;
    }
}
int main()
{
    fast
        ll n;
        cin>>n;
    arr.resize(n);
    ll i;
    rep(i, n)
            cin >>
        arr[i];
    cin >> k;
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    ll low = 1, high = 1e1, mid;
    while (high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    if(good(low))
    cout<<low<<endl;
    else
    {
        cout<<high<<endl;
    }
}