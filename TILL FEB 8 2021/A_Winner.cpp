#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
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
    map<string, ll> m;
    map<string, ll> f;
    ll i, inp;
    //string ans = "";
    ll n;
    cin>>n;
    //ll max = -99;
    string s = "";
    rep(i, n)
    {
        cin >> s;
        cin >> inp;
        m[s] += inp;
        if(inp>0)
        f[s]+=inp;

        /*if (max < m[s])
        {
            max = m[s];
            ans = s;
        }*/
    }
    //cout << ans << endl;
    map<string,ll>::iterator it;
       map<string,ll>::iterator fit;
       fit=f.begin();
       ll max=-999;
       string ans="";
       for(it=m.begin();it!=m.end()&&fit!=f.end();it++)
       {
           if(max<(it->second))
           {
               max=it->second;
               ans=it->first;   
           }
           else if(max==it->second)
           {
               if(fit->second>f[ans])
               {
                   max=it->second;
                   ans=it->first;
               }
           }
       }
       cout<<ans<<endl;
}