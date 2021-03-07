#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
ll find(ll a)
{
    ll c=0;
    while(a>0)
    {
        if(a%2==0)
        {
            c++;
            a/=2;
        }
        else
        {
            return c;
        }
    }
    return c;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        ll count;
        cin>>a>>b>>n;
        count=0;
        count=find(a)+find(b);
        ll ans=pow(2,count);
        if(ans>=n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}