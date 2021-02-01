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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        char ch[n][m];
        ll i,j;
        string s;
        
        char match[n][m];
        rep(i,n)
        {
            rep(j,m)
            {
                cin>>ch[i][j];
            }
        }
        cin>>s;
        bool flag=true;
        ll len=s.length();
        rep(i,len)
        {
            rep(j,m)
            {
                if(s[i]==ch[i%n][j])
                {
                    ch[i%n][j]='#';
                }
                
            }
        }
        ll c=0;
        rep(i,n)
        {
            rep(j,m)
            {
                if(ch[i][j]=='#')
                {
                    c++;
                }
            }
        }
        if(c==len)
        cout<<"Yes"<<endl;
        else
        {
            cout<<"No\n";
        }
    }
}