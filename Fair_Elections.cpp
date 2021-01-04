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
int main()
{
    ll t,i;
    while(t--)
    {
        ll input;
        ll m,n;
        cin>>m>>n;
        vector<ll> a;
        vector<ll> b;
        rep(i,n)
        {
            cin>>input;
            a.push_back(input);
        }
        rep(i,m)
        {
            cin>>input;
            b.push_back(input);
        }
        if((accumulate(a.begin(),a.end(),0)>accumulate(b.begin(),a.end(),0)))
        {
            cout<<0<<endl;
        }
        else
        {
            ll mi=min(m,n);
            ll k=0;
            rep(k,mi)
            {
                swap(a[k],b[k]);
            }

        }
    }

}