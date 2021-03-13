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
        ll n;
        cin >> n;
        map<ll, ll> m;
        ll i;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            m[inp]++;
        }
        ll count = 0;
        auto it = m.begin();
        for (; it != m.end(); it++)
        {
            if (it->second == 1)
            {
                count += m.size() - 1;
            }
            else
            {
                count +=( it->second - 1) * (m.size() - 1);
            }
        }
        cout << count<<endl;
    }
}