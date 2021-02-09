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
    ll n,m;cin>>n>>m;
    map<ll,ll> m1;
    ll i;
    map<ll,ll> m2;
    ll inp1,inp2,inp3;
    rep(i,m)
    {
        cin>>inp1>>inp2>>inp3;
        m1[inp1]=inp2;
        m2[inp2]=inp3;
    }
    map<ll,ll>::iterator it;
    ll c=0;
  for(i=1;i<=n;i++)
  {
      if(m1[m1[m1[i]]]==i)
      
  }

}