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
        ll c;
        cin >> c;
        ll d = log2(c) ;
        ll a = 0, b = 0;
        ll maxi = 0;
        // string a="",b="";
        ll p = 0;
        ll count = 0;
        while (c > 0)
        {
            if ((c & 1)==0)
            {
                // a="1"+a;
                // b="1"+b;
                a += 1 * (1 << p);
                b += 1 * (1 << p);
            }
            else
            {
                // count++;
                if (p==d)
                {
                    // a="1"+a;
                    // b="0"+b;
                    a += 1 * (1 << p);
                }
                else
                {
                    // a = "0" + a;
                    // b = "1" + b;
                    b+=1*(1 << p);
                }
            }
            c >>= 1;
            p++;
        }
        cout<<(a*b)<<endl;
        // printf

        // while(a>0&&b<(1<<d))
        // {
        //     if(a^b==c)
        //     maxi=max(a*b,maxi);
        //     a--;
        //     b=a^c;
        // }
    }
}