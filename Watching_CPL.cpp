#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<numeric>
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
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll i;
        ll steps=0;
        rep(i,n)
        {
            cin>>a[i];
        }
         sort(a,a+n,greater<ll>());
        ll sum1=0;
        ll sum2=0;
        ll sum=accumulate(a,a+n,0);
        if(sum<(2*k))
        {
            cout<<-1<<endl;
        }
       
        else 
        {
            for(i=0;i<n;i++)
            {
                
                sum1+=a[i];
                if(sum1>=k)
                {
                    steps+=1;
                    break;
                }

            }
            for(ll j=i;j<n;j++)
            {
                sum2+=a[j];
                if(sum2>k)
                {
                    steps+=1;
                    break;
                }
            }
            cout<<steps<<endl;
        }


    }
}