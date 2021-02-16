#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
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
    while (t--)
    {
        ll n;
        cin>>n;
        ll i=0;
        ll a[n];
        ll b[n];
        rep(i,n) cin>>a[i];
        rep(i,n) cin>>b[i];
        ll j=0;
        i=0;
        ll maxi=0;
       while(j<n&&i<n)
       {
           if(b[j]>=a[i])
           {
               maxi=max(maxi,j-i);
               j++;
           }
           else
           {
               i++;
           }

       }
        cout<<maxi<<endl;
    }
}