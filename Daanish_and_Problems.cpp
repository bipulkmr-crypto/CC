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
    ll t;cin>>t;
    while(t--)
    {
        ll arr[11]={0};
        ll i;
        fu(i,1,10)
        {
            cin>>arr[i];
        }
        ll k;
        cin>>k;
        ll pos=10;
        while(k>0)
        {
            k-=arr[pos];
            if(k<0)
            break;
            pos--;
        }
        while(arr[pos]==0)
        {
            pos--;
        }
        if(pos<0)
        pos=1;
        cout<<pos<<endl;
    }
}