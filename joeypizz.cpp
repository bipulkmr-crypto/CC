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
bool comp(pair<string, ll> p1, pair<string, ll> p2)
{
    bool flag;
    if (p1.ss == p2.ss)
    {
        if (p1.ff.compare(p2.ff) < 0)
            flag = true;
        else
            flag = false;
    }
    else
    {
        flag = (p1.ss > p2.ss);
    }
    return flag;
}
int main()
{
    ll n;
    cin >> n;
    vector<pair<string, ll>> v;
    ll i;
    rep(i, n)
    {
        string s;
        ll inp;
        cin >> s >> inp;
        v.pb(make_pair(s, inp));
    }
    sort(v.begin(), v.end(), comp);
    cout << v[0].ff << endl;
}
