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
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll n;
    cin>>n;
    ll i=0;
    string s="ROYGBIV";
    ll t=(n/7);
    ll rem=n%7;
    rep(i,t)
    cout<<s;
    if(rem==1)
    cout<<"G";
    else  if(rem==2)
    cout<<"GB";
    else if(rem==3)
    cout<<"YGB";
    else if(rem==4)
    cout<<"YGBI";
    else if(rem==5)
    cout<<"OYGBI";
    else if(rem==6)
    cout<<"OYGBIV";
}