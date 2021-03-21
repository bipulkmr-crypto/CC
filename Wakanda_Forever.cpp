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
#include<queue>
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
    ll k;
    cin>>n>>k;
    ll arr[n];
    ll i;
    rep(i,n)
    cin>>arr[i];
    ll sum=0;
    priority_queue<ll,vector<ll> > q;
    rep(i,n)
    {
        q.push(arr[i]);
    }
    while (k--)
    {
        ll temp=q.top();
        q.pop();
        sum+=temp;
        q.push(temp/2);
    }
    cout<<sum<<endl;
    
}