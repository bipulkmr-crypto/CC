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
bool isprime(ll i)
{
    ll j,c=0;
    
    fu(j,2,i)
    {
        if((i%j)==0)
        c++;
    }
    return((c==1));
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        ll i;
        cin>>a>>b;
        fu(i,a,b){
            if(isprime(i))
            {
                cout << i<<endl;
            }
        }
        cout << endl;
    }
}
