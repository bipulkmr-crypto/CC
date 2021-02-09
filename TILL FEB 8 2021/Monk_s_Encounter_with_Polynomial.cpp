

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
 ll a, b, c, k;
ll check(ll x)
{
    return(a*x*x+b*x+c);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
       
        cin >> a >> b >> c >> k;
        if(c>=k)
        cout<<0<<endl;
        else
        {
            
            ll low=1; ll high=ceil(sqrt(k));
            ll mid,val=high;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                ll x=check(mid);
                if(x>=k)
                {
                    val=min(mid, val);
					high=mid-1;
                }
                else
                    low=mid+1;
            }
            cout<<val<<endl;
        }
    }
}

