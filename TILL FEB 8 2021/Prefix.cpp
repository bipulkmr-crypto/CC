#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include<stack>
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
bool checkOperator(char ch)
{
    if(ch=='*'||ch=='-'||ch=='+'||ch=='/'||ch=='^')
    {
        return true;
    }
    else
    {
        return false;
    }
}
string PreToIn(string s)
{
    ll i,j;
    ll len=s.length();
    string ans="";
    stack<string> st;
    string x1,x2;
    for(i=len-1;i>=0;i--)
    {
        if(checkOperator(s[i]))
        {
            x1=st.top();
            st.pop();
            x2=st.top();
            st.pop();
            ans="("+x1+s[i]+x2+")";
            st.push(ans);
        }
        else
        {
            st.push(string (1,s[i]));

        }
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    
    ll len=s.length();
    string ans=PreToIn(s);
    cout<<ans<<endl;
}