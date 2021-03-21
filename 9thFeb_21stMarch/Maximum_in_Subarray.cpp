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
    ll k;
    cin>>n>>k;
    ll i;
    ll arr[n];
    rep(i,n)
    cin>>arr[i];
    set<pair<ll,ll> > s;
    for(i=0;i<k;i++)
    {
        s.insert(make_pair(arr[i],i));
    }
    auto it=s.end();
    it--;
    cout<<(*it).first<<" ";
    for(i=1;i<(n-k+1);i++)
    {
        s.erase(make_pair(arr[i-1],i-1));
        s.insert(make_pair(arr[i+k-1],i+k-1));
        cout<<((*(--s.end())).ff)<<" ";
    }
    cout<<endl;
}