#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<set>
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
#define pi(n) printf("%d",n)
#define pl(n) printf("%lld",n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1]={0};
        set<ll> s;
        set<ll> check;
        s.insert(1);
        s.insert(2);
        ll i;
        bool flag1=false,flag2=false;
        fu(i,1,n)
        {
            cin>>arr[i];
            // check.insert(arr[i]);
            arr[i]+=arr[i-1];
            s.insert(arr[i]);
        }
        ll ans=s.size();
        // if(flag1&flag2)
        // {
        //     ans-=1;
        // }
        // if(check.size() == 1&&n!=1)
        // ans-=1;
        cout<<ans<<endl;
    }
}