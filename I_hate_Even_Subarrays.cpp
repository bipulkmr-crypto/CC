#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<stack>
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
        stack<char> ch;
        ll len=s.length();
        string ans="";
        ll i;
        ch.push(s[0]);
        fu(i,1,len-1)
        {
            if(!ch.empty()&&ch.top()==s[i])

            {
                ch.pop();
            }
            else
            {
                ch.push(s[i]);
            }
        }
        if(ch.size()==0)
        {
            cout<<"KHALI"<<endl;
        }
        else
        {
            while(!ch.empty())
            {
                ans+=(ch.top());
                ch.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;

    }

}