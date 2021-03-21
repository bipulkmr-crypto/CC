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
ll n, b;
ll max;
vector<ll> arr;
bool good(ll x)
{
   ll i,c=1;
   for(i=0;i)
}
int main()
{

    while(1)
    {
        cin>>n>>b;
        if(n==-1&&b==-1)
        break;
        ll i;
        arr.resize(n);
        rep(i,n)
        cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll low=0,high=1e13,mid;
        while(high-low>1)
        {
            mid=low+(high-low)/2;
            if(good(mid))
            {
                low=mid;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<low<<endl;
    }
}