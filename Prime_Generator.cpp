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
vector<bool> segmentedSieve(ll L,ll R)
{
    ll lim=sqrt(R);
    vector<bool> mark(lim+1,false);
    vector<ll> primes;
    for(ll i=2;i<=lim;i++)
    {
        if(!mark[i])
        {
            primes.emplace_back(i);
            for(ll j=i*i;j<=lim;j+=i)
            {
                mark[j]=true;
            }
        }
    }
    vector<bool> isPrime(R-L+1,true);
    for(ll i:primes)
    {
        for(ll j=max(i*i,L+i-1)/(i*i);j<=lim;j+=i)
        {
            isPrime[j-L]=false;
        }
        if(L==1)
        {
            isPrime[0]=false;
        }
        
    }
    return isPrime;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        ll i;
        cin>>a>>b;
        
        vector<bool> ans=segmentedSieve(a,b);
        for(ll i=0;i<ans.size();i++)
        {
            if(ans[i])
            {
                cout<<(i+a+1)<<endl;
            }
        }
    }
}
