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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n][n];
        ll i,j;
        string s;
        rep(i,n)
        {
            cin>>s;
            rep(j,n)
            {
                arr[i][j]=s[j]-48;
            }
        }
        /*rep(i,n)
        {
            rep(j,n)
            {
                cout<<arr[i][j];
            }
        }
        */
       bool flag=true;
       rep(i,n)
       {
           rep(j,n)
           {
               if(arr[i][j]!=arr[i][n-j-1])
               {
                   flag=false;
                   break;
               }
           }
       }
       if(flag==false)
       cout<<"NO\n";
        else 
        {
            rep(i,n)
            {
                rep(j,n)
                {
                    if(arr[i][j]!=arr[n-i-1][j])
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag==true)
            cout<<"YES\n";
            else 
            {
                cout<<"NO\n";
            }
        }

    }
}