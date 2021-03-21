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
        map<ll,ll> m;
        ll i,j;
        ll sum=0;
        ll n;
        cin>>n;
        rep(i,n)
        {
            ll inp;
            cin>>inp;
            sum+=inp;
            m[inp]++;
        }
        if(m[1]%2==1)
        {
            cout<<"NO\n";
        }
        else if(m[1]==0&&n%2==1)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
    }
}