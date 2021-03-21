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
    ll range=1e7+1;
    vector <bool> isprime(range,true);
    ll i,j;
    for(i=2;i*i<range;i++)
    {
        if(isprime[i])
        for(j=i*i;)j<range;j+=i)
        {
            isprime[i]=false;
        }
    }
    while(t--) 
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i,n)
        {
            cin>>arr[i];
        }
        
    }
}