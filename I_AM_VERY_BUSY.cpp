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
bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.ss != p2.ss)
        return (p1.ss < p2.ss);
    else
        return (p1.ff < p2.ff);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> arr;
        ll i;
        rep(i, n)
        {
            ll inp1, inp2;
            cin >> inp1 >> inp2;
            arr.pb(make_pair(inp1, inp2));
        }
        sort(arr.begin(), arr.end(), comp);
        ll count = 1;
        i = 0;
        ll j = 0;
        for (j = 1; j < n; j++)
        {
            if (arr[j].ff >= arr[i].ss)
            {
                //     start=arr[i].ff;
                //     end=arr[i+1].ss;
                count++;
                i = j;
            }
        }
        cout << count << endl;
    }
}