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
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll mini=9999999;
    ll i;
    rep(i,n)
    {
        cin>>a[i];
        mini=min(a[i],mini);
    }
    rep(i,n)
    {
        cin>>b[i];
    }
    ll steps=0;
    bool flag=false;
    rep(i,n)
    {
        while(a[i]>mini&&b[i]!=0)
        {
            a[i]-=b[i];
            steps++;
        }
        if(a[i]<mini)
        {
            i=0;
            mini=a[i];
        }
        if(a[i]<0)
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    cout<<steps<<endl;
    else
    {
        cout<<-1<<endl;
    }
}