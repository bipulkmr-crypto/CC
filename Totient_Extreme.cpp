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
#define all(x) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll t;
    cin>>t;

    ll range=1e4;
    vector<ll> phi(range+1);
    phi[0]=0;
    phi[1]=1;
    ll i;
    for(i=2;i<=range;i++)
    {
        phi[i]=i;
    }
    for( i=2;i<=range;i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i;j<=range;j+=i)
            {
                phi[j]-=phi[j]/i;
            }
        }
    }
    vector<ll> sum(range);
    fu(i,1,range)
    {
        sum[i]=sum[i-1]+phi[i];
    }
    while(t--)
    {
        ll q;
        cin>>q;
        ll d=sum[q]*sum[q];
        cout<<(d)<<endl;
    }

}