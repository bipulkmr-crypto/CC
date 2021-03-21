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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n]={0};
            // set<ll> s;
        vector<ll> s(n);
        ll i;
        rep(i,n)
        cin>>arr[i];
        // for(i=0;i<n;i++)
        // {
        //     ll pos=i;
        //     ll sum=arr[i];
        //     pos+=arr[i];
        //     while(pos<n)
        //     {
        //         sum+=arr[pos];
        //         pos+=arr[pos];
        //     }
        //     s.pb(sum);
        // }

        for(i=n-1;i>=0;i--)
        {
            s[i]=arr[i];
            ll j=i+arr[i];
            if(j<n)
            {
                s[i]+=s[j];
            }
        }
        cout<<(*max_element(s.begin(),s.end()))<<endl;
        
    }
}
