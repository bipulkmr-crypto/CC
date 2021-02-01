
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
// Function to return if the paranthesis are balanced or not
bool ispar(string s)
{
    // Your code here
    ll len=s.length();
    stack<char> st;
    ll i;
    char x;
    for(i=0;i<len;i++)
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='[')
        {
            st.push(s[i]);
            continue;
        }
        else if(st.empty())
        {
            return false;
        }
        else
        {
            switch(s[i])
            {
                case ')':
                x=st.top();
                st.pop();
                if(x=='{'||x=='[')
                return false;
                break;
                case '}':
                x=st.top();
                st.pop();
                if(x=='('||x=='[')
                return false;
                break;
                case ']':
                x=st.top();
                st.pop();
                if(x=='{'||x=='(')
                return false;
                break;
            }            
        }
    }
    return(st.empty());
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
}  // } Driver Code Ends