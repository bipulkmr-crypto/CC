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
        vector<ll> v;
        ll i;
        rep(i,n)
        {
            ll inp;
            cin>>inp;
            v.pb(inp);
        }
        for(i=0;i<v.size();i++)
        {
            
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char p[1000];
    int ch;
    int k = 0;
    fp = fopen("/home/crypto/git_workspace/CC/A_Sushi_for_Two.cpp", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        p[k++]=(char)(ch);
    }
    int i=0;
    int sen=0,w=0;
    for(i=0;i<1000;i++)
    {
        if(p[i]==' ')
        w++;
        if(p[i]=='.')
        sen++;
    }
    w++;
    sen++;
    k=k-w-sen+2;
    printf("sentences= %d",sen);
    printf("\n");
    printf("words=%d",w);
    printf("\n");
    printf("characters=%d",k);
    printf("\n");
    fclose(fp);
}