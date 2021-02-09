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
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        double x;
        cin >> n >> k;
        if(n==1)
        cout<<k<<endl;
        else if(k==n)
        cout<<1<<endl;
        else if(n>k)
        {
            ll p=n/k;
            if((n%k)!=0)
            p++;
            k*=p;
            ll a=k/n;
            if((k%n)!=0)
            a++;
            cout<<a<<endl;
        }
        else
        {
            ll a=k/n;
            if((k%n)!=0)
            a++;
            cout<<a<<endl;
        }
    }
}