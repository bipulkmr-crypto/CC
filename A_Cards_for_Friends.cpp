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
int powOf2(ll n)
{
    int c=0;
    while(n>0)
    {
        if(n%2==0)
        {
            c++;
        }
        n=n/2;
    }
    return c;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w,h,n;
        cin>>w>>h>>n;
        int c1,c2;
        c1=powOf2(w);
        c2=powOf2(h);
        ll sum=(int)pow(2,(c1+c2));
        if(sum>=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
}