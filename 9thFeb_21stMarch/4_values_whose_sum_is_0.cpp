#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include<set>
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

int main()
{
    ll n;
    vector<ll> c1;
    vector<ll> c2;
    vector<ll> c3;
    vector<ll> c4;
    cin >> n;
    ll i, inp;
    rep(i, n)
    {
        cin >> inp;
        c1.push_back(inp);
        cin >> inp;
        c2.push_back(inp);
        cin >> inp;
        c3.push_back(inp);
        cin >> inp;
        c4.push_back(inp);
    }
    vector<ll> s1;
    vector<ll> s2;
    ll j;
    rep(i, n)
    {
        rep(j, n)
        {
            s1.pb(c1[i] + c2[j]);
        }
    }
    // set<ll> s2;
    rep(i, n)
    {
        rep(j, n)
        {
            // s2.insert(c3[i]+c4[j]);
            s2.pb(c3[i]+c4[j]);
        }
    }
    ll sum = 0;
    sort(s2.begin(), s2.end());
    rep(i, s1.size())
    {
        ll val=-1*s1[i];
        sum+=(upper_bound(s2.begin(),s2.end(),val)-lower_bound(s2.begin(),s2.end(),val));
    }
    cout << sum << endl;
}