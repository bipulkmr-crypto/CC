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
    ll t;
    cin>>t;
    while (t--)
    {
        
        map<ll,ll> m;
        ll n,i;
        cin>>n;
        ll inp,diff;
        bool flag=true;
        rep(i,n)
        {
            cin>>inp;
            diff=inp-5;
            if(diff==10&&(m[5]<2||m[10]<1))
            flag=false;

            else if(diff==5 &&(m[5]<1))
            flag=false;
            m[inp]++;
        }
        if(flag)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}