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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ll n;
    cin>>n;
    string s;
    map<char,ll> m;
    ll i;
    cin>>s;
    rep(i,n)
    {
        m[s[i]]++;
    }
    ll ans=0;
    ll max=0;
    rep(i,n)
    {
        if(m['0']>m['1'])
        {
            ans=m['0']+m['1'];
            if(max<ans)
            {
                max=ans;
            }
        }
        else
        {
            m[s[i]]--;
        }
    }
    cout<<max;
}