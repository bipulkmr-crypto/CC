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
bool isprime (ll n)
{
    ll i,c=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c)
    return true;
    else 
    return false;
}
int main()
{
    ll n;
    cin>>n;
    ll i=4;
    ll diff=n-i;
    while(!isprime(i)||!isprime(diff))
    {
        i++;
        diff--;
    }
    cout<<i<<" "<<diff<<endl;
}