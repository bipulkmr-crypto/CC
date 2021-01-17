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
        ll i;
        cin>>n;
        vector<ll> left;
        vector<ll> right;
        ll input;
        char ch;bool flag1=false;
        bool flag2=false;
        
        rep(i,n)
        {
            cin>>ch;
            if(ch=='L')
            {
                flag1=true;
                cin>>input;
                left.pb(input);

            }
            else
            {
                flag2=true;
                cin>>input;
                right.pb(input);
            }
        }
        if(flag1!=true)
        {
            left.pb(0);        
        }
        if(flag2!=true)
        {
            right.pb(0);
        }
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
       bool flag3=true;
        rep(i,min(left.size(),right.size()))
        {
           if(left[i]<right[i])
           {
               flag3=false;
               break;
           }
        }
        if(flag3==false)
        {
            cout<<-1<<endl;
        }
        else if(left[0]>(right[0]+1))
        {  
            ll diff=(left[0]-(right[0]+1));
            if(flag2!=true)
            {
                cout<<-1<<endl;
            }
            else if(flag1!=true)
            {
                cout<<-1<<endl;
            }
           
            else
            cout<<diff<<endl;
        }
        else if(flag1&&flag2)
        {
            cout<<-1<<endl;

        }
        else{

            cout<<"-1"<<endl;
        }

    }
}