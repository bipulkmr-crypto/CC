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
ll convert12to24Andmin(ll h, ll m, string s)
{
    if (s == "AM")
    {
        if (h == 12)
            h = 0;
    }
    else
    {
        if(h!=12)
        h += 12;
    }
    ll tm;
    tm = (h * 60 + m);
    return tm;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, m;
        char ch;
        string s;
        cin >> h >> ch >> m >> s;
        ll q;
        cin >> q;
        ll tm=convert12to24Andmin(h,m,s);
        while (q--)
        {
            ll h1, m1, h2, m2;
            string s1, s2;
            cin >> h1 >> ch >> m1 >> s1;
            cin >> h2 >> ch >> m2 >> s2;
            ll l=convert12to24Andmin(h1,m1,s1);
            ll r=convert12to24Andmin(h2,m2,s2);
            if(tm>=l&&tm<=r)
            {
                cout<<1;
            }
            else 
            cout<<0;
        }
        cout<<endl;
    }
}
