#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include<numeric>
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
    ll t;
    while (t--)
    {
       ll n, x;
       cin>>n>>x;
       vector<ll> v;
       ll i,input;
       ll sum=0;
       rep(i,n)
       {
           cin>>input;
           v.push_back(input);
       }
       vector<ll>::iterator it1=v.begin();
       vector<ll>::iterator it2=v.end();
       bool flag=true;
       while(flag)
       {

           if((*it1)%x==0)
           {
               ll div=(*it1/x);
               vector<ll>::iterator p=it2+div;
               for(i=0;i<div;i++)
               {
                   v.push_back(div);
               }
           }
           else{
               flag=false;
           }
           it1++;
       }
       sum=accumulate(v.begin(),v.end(),0);
       cout<<sum<<endl;
    }
    

}