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
#define pl(n) printf(% lld, n)z
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // if (n == 1||n==10000000000if n != 2 and n == maxor - 1:
        //     print(maxor, maxor - 3)
        // else:for _ in range(int(input())):
    // n = int(input())
    // if n % 2 == 1:
    //     print(n, n)
    // else:
    //     maxor = 2 ** (floor(log2(n)) + 1) - 1
    //     if n != 2 and n == maxor - 1:
    //         print(maxor, maxor - 3)
    //     else:
    //         print(maxor, maxor ^ n)
        //     print(maxor, maxor ^ n)
        //     cout << n << " " << n << endl;
        // else
        // {
             ll set = floor(log2(n)) + 1;
            ll y = ((1 << set) - 1);
            ll x = y ^ n;
            if(n%2)
            cout<<
            if(n!=2&&n==x-1)
            cout<<y<<" "<<(y-3)<<endl;
            else
            cout << y << " " << x<<endl;
        // }
    }
}