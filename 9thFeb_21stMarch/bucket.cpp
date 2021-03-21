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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i,n)
        cin>>arr[i];
        sort(arr,arr+n);
        cin>>k;
        ll b[k];
        rep(i,k)
        {
            cin>>b[i];
        }
        sort(b,b+k);
        ll c[n]={0};
        rep(i,k/2)
        {
            c[b[i]-1]++;
            c[b[k-i-1]]--;
        }
        for(i=1;i<n;i++)
        {
            c[i]+=c[i-1];
        }
        sort(c,c+n);
        ll ans=0;
        rep(i,n)
        {
            ans+=c[i]*arr[i];
        }
        cout<<ans<<"\n";
    }
}