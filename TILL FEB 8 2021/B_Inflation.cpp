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
int length(ll n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll temp=n;
        ll c=0;
        ll sum=0;
        double per=0.0;
        fu(i,1,n-1)
        {
            double x=(double)(arr[i-1]);
            per=(double)(arr[i]/x)*100.0;
            if(per-k>0)
            {
                c=length(arr[i-1]);
                double j=(double)(k)/100.0;
                ll y=(ll)pow(10,c-1);
                sum+=(ceil((per-(k))*y)+floor((per-(k))*y));
                arr[i]=arr[i-1]+sum;
            }
            else
            {
                arr[i]+=arr[i-1];
            }

        }
        cout << sum<<endl;
    }
}