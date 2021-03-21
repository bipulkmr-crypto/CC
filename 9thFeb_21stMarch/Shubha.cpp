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
    ios::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
   map<ll,ll> m;
   ll n;
   cin>>n;
   ll i;
   rep(i,n)
   {
       ll inp;
       cin>>inp;
       m[inp]++;
   }
   map<ll,ll>::iterator it;
   ll ans=0;
   for(it=m.begin();it!=m.end();it++)
   {
       if(it->second>1)
        {
            ll temp=it->second;
            temp=((temp)*(temp-1))/2;
            ans+=temp;
        }
   }
   cout<<ans<<endl;
}