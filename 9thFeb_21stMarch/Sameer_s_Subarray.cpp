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
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
   ll n;
   cin>>n;
    string s;
    cin>>s;
    //  ll n=s.length();
    ll arr[n];
    ll i;
    rep(i,n)
    {
        arr[i]=(s[i]-48);
    }
    ll pre[n]={0};
    pre[0]=arr[0];
    rep(i,n)
    {
        if(i!=0)
        {
            pre[i]+=pre[i-1]+arr[i];
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--,r--;
        ll x;
        if(l!=0)
        x=pre[r]-pre[l-1];
        else
        x=pre[r];
        if(x%9==0)
        cout<<"SAMEER\n";
        else
        cout<<"NO\n";
    }
}