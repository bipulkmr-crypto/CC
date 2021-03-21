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
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll pos1,pos2;
    ll i;
    ll mini1=1e10,mini2=1e10
    rep(i,n)
    {
        cin>>a[i]>>b[i];
    }
    // ll j=0;
    // rep(i,n)
    // {
    //     if(mini1>a[i])
    //     {
    //         mini1=a[i];
    //         pos1=i;
    //     }
    //      if(mini2>b[j])
    //     {
    //         mini2=b[j];
    //         pos2=j;
    //     }
    //     j++;
    // }
    // if(pos1==pos2)
    // cout<<(mini1+mini2)<<endl;
    // else 
    // cout<<(max(mini1,mini2))<<endl;
    ll mini=1e10;
    ll j;
    ll sum=0;
    rep(i,n)
    {
        rep(j,n)
        {
            if(i==j)
            {
                sum=a[i]+b[i];
                mini=min(sum,mini);
            }
            else
            {
                sum=max(a[i],b[j]);
                mini=min(mini,sum);
            }
        }
    }
    cout<<mini<<endl;

}