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
    ll n;
    cin>>n;
    char ch[2*n-2];
    ll i;
    // rep(i,2*n-2)
    // cin>>ch[i];
    map<char,ll> m;
    ll ans=0;
    rep(i,2*n-2)
    {
        char temp;
        cin>>temp;
        if(i%2==0)
        {
            m[temp]++;
        }
        else
        {
             temp=tolower(temp);
            if(m[temp]<1)
            {
                ans++;
            }
            else
            m[temp]--;
        }
    }
    cout<<ans<<endl;
}