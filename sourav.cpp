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
  set<ll> a;
  ll i;
  rep(i,n)  
  {
      ll inp;
      cin>>inp;
      a.insert(inp);
  }
  ll m;
  set<ll> c;
  cin>>m;
  rep(i,m)
  {
      ll inp;
      cin>>inp;
    c.insert(inp);
  }
  
  set<ll> b;
  set<ll>::iterator it1;
  set<ll>::iterator it2;
  for(it1=c.begin();it1!=c.end();it1++)
  {
      for(it2=a.begin();it2!=a.end();it2++)
      {
          ll diff=*it1-*it2;
          if(diff>0&&(c.find(diff)!=c.end()))
          {
              b.insert(diff);
          }
      }
  }

  it1=b.begin();
  for(;it1!=b.end();it1++)
  {
      cout<<*it1<<" ";
  }
}