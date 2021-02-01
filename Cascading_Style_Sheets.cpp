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
int main()
{
    ll n, m;
    cin >> n >> m;
    ll i;
    map<pair<ll, ll>, ll> m1;
    map<pair<ll, ll>, ll> m2;
    ll id, val, attr, prior;
    while (n--)
    {
        cin >> id >> attr >> val >> prior;
        if(m1[{id,attr}]==0)
        {
            m1[{id,attr}]=val;
            m2[{id,attr}]=prior;
        }
        else
        {
            if(m2[{id,attr}]<=prior)
            {
                m1[{id,attr}]=val;
                m2[{id,attr}]=prior;
            }
        }   
    }
    while(m--)
    {
        cin>>id>>attr;
        cout<<m1[{id,attr}]<<endl;
    }
}