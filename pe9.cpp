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
    ll i,j,k;
    ll ans=1;
    for(i=1;i<=1000/3;i++)
    {
        for(j=i+1;j<=1000;j++)
        {
            for(k=j+1;k<=1000;k++)
            {
                if(((k*k)==(i*i+j*j))&&((i+j+k)==1000))
                {
                    ans=i*j*k; 
                    break;      
                }
            }
        }
    }
    cout<<ans<<endl;
}