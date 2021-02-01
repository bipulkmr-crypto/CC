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
    ll a,b,c;
    cin>>a>>b>>c;
    ll diff=a-b;
    if(diff==0)
    {
        if(c==0)
        cout<<"Aoki"<<endl;
        else
        cout<<"Takahashi"<<endl;
    }
    else 
    {
        if((diff)>=1)
        cout<<"Takahashi\n";
        else
        cout<<"Aoki\n";
       /* if(diff=1&&c==0)
        {
            cout<<"Takahashi\n";
        }
        else if(diff==1&&c==1)
        cout<<"Aoki\n";
        else if(diff==-1&&c==0)
        cout<<"Takahashi\n";
        else 
        cout<<"Aoki"<<endl;*/
    }
    
}