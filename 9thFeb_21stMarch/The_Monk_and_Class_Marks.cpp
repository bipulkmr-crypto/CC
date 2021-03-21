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
bool comp(pair<string,ll> p1,pair<string,ll> p2)
{
    if(p1.ss==p2.ss)
    {
        return (p1.ff.compare(p2.ff)<=0);
    }
    else 
    {
        return(p1.ss>p2.ss);
    }
}
int main()
{
    ll t;
    cin>>t;
    ll n=t;
    vector<pair<string ,ll> > arr;
    while(t--)
    {
        ll inp;
        string s;
        cin>>s>>inp;
        arr.push_back(make_pair(s,inp));
    }
    sort(all(arr),comp);
    ll i;
    rep(i,n)
    {
        cout<<(arr[i].ff)<<" "<<arr[i].ss<<endl;
    }
    
}