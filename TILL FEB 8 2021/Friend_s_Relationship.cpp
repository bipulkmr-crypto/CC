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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i,j,k;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            for(j=n-i;j>0;j--)
            {
                cout<<"#";
            }
             for(j=n-i;j>0;j--)
            {
                cout<<"#";
            }
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
            
        }
        cout<<endl;
    }
}