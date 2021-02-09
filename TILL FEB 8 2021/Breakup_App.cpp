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
    map<string,ll> m;
    cin>>t;
    while(t--)
    {
        string s;
        getline(cin,s);
        bool flag=(s[0]=='G')?true:false;
        s+=" ";
        string temp;
        ll i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if((temp[0]>='0'&&temp[0]<='9')&&(temp[1]>='0'&&temp[1]<='9'))
                m[temp]++;
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        // istringstream ss(s);
        // string temp;
        // while(ss>>temp)
        // {
        //     char* p;
        //     ll x=strtol(temp,&p,10);
        //     if(*p)
        //     {

        //     }
        //     else
        //     {
        //         if(flag)
        //         m[x]+=2*1;
        //         else
        //         {
        //             m[x]+=1;
        //         }
        //     }
        // 
    }
    map<string,ll>::iterator it;
    ll val=0;
    string key="";
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>val)
        {
            val=it->second;
            key=it->first;
        }
    }
    if(key=="19"||key=="20")
    cout<<"Date";
    else
    cout<<"No Date";
}