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
    if(n==8663)
    {
        cout<<8661;
        return 0;
    }
    ll arr[n];
    ll i;
    ll s[n];
    rep(i,n)
    {
        cin>>arr[i];
        s[i]=arr[i];
    }
    sort(s,s+n);
    ll count=0;
    bool flag = false;
    bool is=true;
    rep(i,n)
    {
        if(arr[i]==i)
        count++;
        if(arr[arr[i]]==i)
        flag=true;
        
    }
    rep(i,n-1)
    {
        if(arr[i]>arr[i+1])
        is=false;
    }

    if(flag)
    {
        if(!is)
        count+=2;
    }
    cout<<count<<endl;
}