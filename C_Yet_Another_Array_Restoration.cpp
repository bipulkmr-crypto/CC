#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (n == 2)
        {
            cout << a << " " << b<<endl;
        }
        else
        {
            ll diff = (b - a) / (n - 2);
            if(diff==1&&((n-2)==(b-a)))
            {
                ll i;
                rep(i,n-1)
                {
                    cout<<(i+a)<<" ";
                }
                cout<<b<<endl;
            }
            else if(diff==1&&((n-2)!=(b-a)))
            {
                ll x=ceil(2*((b-a)/(double)(n-2)));
                ll i;
                cout<<a<<" ";
                rep(i,n-2)
                {
                    b+=x;
                    cout<<(b)<<" ";
                }
                cout<<a<<endl;
            }
            else
            {
                cout<<a<<" ";
                ll i;
                rep(i,n-2)
                {
                    a+=diff;
                    cout<<a<<" ";
                }
                cout<<b<<endl;
            }
        }
    }
}