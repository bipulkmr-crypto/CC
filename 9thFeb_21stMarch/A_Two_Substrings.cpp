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
    string s;
    ll i,j;
    bool flag1=false,flag2=false;
    cin>>s;
    ll n=s.length();
    rep(i,n-1)
    {
        string temp=s.substr(i,2);
        if(temp=="AB")
        {
            s[i]=' ';
            s[i+1]=' ';
            flag1=true;
        }
        
        else if(temp=="BA")
        {
            s[i]=' ';
            s[i+1]=' ';
            flag2=true;
        }
        if(flag1&&flag2)
        break;
    }
    if(flag1&&flag2)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}