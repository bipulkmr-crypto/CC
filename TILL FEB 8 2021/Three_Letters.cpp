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
typedef  long long int ll
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf("%d",&n)
#define gl(n) scanf("%d",&n)
#define pi(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define pp printf(" ")
#define pn printf("\n")
#define MAX 200006
#define LN 10
 int main()
 {
    ll t,i;
    cin>>t;
    rep(i,t)
    {
        string s;
        ll i,s=0;
        ll f[26];
        cin>>s;
        for(i=0;i<26;i++)
        {
            f[96-s[i]]++;
        }
        for(i=0;i<26;i++)
        {
            if(f[i]>=2)
            {

