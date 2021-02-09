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
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i,c=1,point=0,max=0;
        rep(i,n)
        {
            cin>>arr[i];
        }
        point=arr[0];
        max=1;
        for(i=1;i<n;i++)
        {
            if(point==arr[i])
            c++;
            else
            {
                point=arr[i];
                if(max<c)
                {
                    max=c;
                }
                c=0;
            }
        }
        if(max<c)
        max=c;
        
        cout<<max<<endl;
    }
}