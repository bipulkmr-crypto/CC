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
        string s;
        cin>>s;
        ll len=s.length();
        ll i;
        ll c1=0,c2=0;
        string temp="",s2="";
        // rep(i,len-7)
        // {
        //     temp=s.substr(i,i+7);
        //     if(temp=="SUVOJIT")
        //     c2++;
        //     else
        //     {
        //         s2+=temp;
        //     }
        // }
        // rep(i,temp.length()-4)
        // {
        //     temp=temp.substr(i,i+4);
        //     if(temp=="SUVO")
        //     c1++;
        // }
        rep()
        
        cout<<"SUVO = "<<c1<<", "<<"SUVOJIT = "<<c2<<endl; 
    }
}