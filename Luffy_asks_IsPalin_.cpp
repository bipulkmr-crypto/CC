#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<string_view>
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
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        string s;
        cin>>n>>q;
        cin>>s;
        ll i=0;
        while(q--)
        {
            ll l,r;
            bool flag=true;
            cin>>l>>r;
            ll co=0,ce=0;
            ll freq[26]={0};
            for(i=l-1;i<r;i++)
            {
                freq[s[i]-97]++;
            }
            rep(i,n)
            {
                if(freq[i]%2)
                {
                    co++;
                }
                else
                ce++;
            }
            if((co>1))
            {
                cout<<"NO\n";
            } 
            else
            cout<<"YES"<<endl;           
        }
    }
}