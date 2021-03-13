#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll k;
    cin>>k;
    ll i,count=0;
    ll range=1e2;
    for(i=1;i<=range;i+=2)
    {
        // double d=sqrt(2*k+i*i);
        ll sq=(2*k+i*i);
        // if((d-sq)==0)
        // {
        //     if(sq%2)
        //     count++;
        // }
        if(sq%2)   count++;
    }
    cout<<count<<endl;
}