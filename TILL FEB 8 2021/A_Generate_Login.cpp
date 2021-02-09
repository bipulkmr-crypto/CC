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
    string s1,s2;
    cin>>s1>>s2;
    char ch;
    ch=s2[0];
    ll i;
    cout<<s1[0];
    for(i=1;i<s1.length();++i)
    {
        if(s1[i]<ch)
        {
            cout<<s1[i];
        }
        else
        {
            break;
        }
    }
    cout<<ch;
}