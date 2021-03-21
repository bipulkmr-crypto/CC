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
ll getIndex(vector<ll> arr, ll k)
{
    auto it = find(arr.begin(), arr.end(), k);
    if (it != arr.end())
    {
        ll index = it - arr.begin();
        return index;
    }
    else
    {
        return -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> w;
        vector<ll> l;
        ll i, j;
        vector<ll> s;
        vector<ll> pos;
        rep(i, n)
            pos.pb(i);
        ll count = 0;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            w.pb(inp);
            s.pb(inp);
        }

        rep(i, n)
        {
            ll inp;
            l.pb(inp);
        }
        sort(s.begin(), s.end());
        for (i = 1; i < n; i++)
        {
            int index = getIndex(w, s[i]);
            int p = pos[getIndex(w, s[i - 1])];
            int c = index;

            while (c <= p)
            {
                c += l[index];
                pos[index] = c;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}