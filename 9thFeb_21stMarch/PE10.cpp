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
    ll n=2*1e6;
    vector<bool> v(n+1,true);
    v[0]=v[1]=false;
    v[2]=true;
    ll i,j;
    for(i=4;i<=n;i+=2)
    {
        v[i]=false;
    }
    for(i=3;i*i<=n;i+=2)
    {
        if(v[i])
        {
            for(j=i*i;j<=n;j+=i)
            {
                v[j]=false;
            }
        }
    }
    ll sum=0;
    for(i=2;i<=n;i++)
    {
        if(v[i])
        sum+=i;
    }
    cout<<sum<<endl;
}
