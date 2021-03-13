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
    set<ll> s;
    while(t--)
    {
        ll q,x;
        cin>>q>>x;
        if(q==1)
        s.insert(x);
        else if(q==2)
        s.erase(x);
        else if(q==3)
        {
            if(s.find(x)!=s.end())
            cout<<"Yes\n";
            else 
            cout<<"No\n";
        }
    }
}