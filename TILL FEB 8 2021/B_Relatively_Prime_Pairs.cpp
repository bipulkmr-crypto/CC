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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return (gcd(b, a % b));
}
int main()
{
    ll l, r;
    cin >> l;
    cin >> r;
    ll c = (r - l + 1) / 2;
    ll i, j;
  
    
        cout <<"YES"<< endl;
        for (i = 0; i < c; i++)
        {
                cout << (l +i*2) << " " << (l+i*2 + 1);cout << endl;
        }
    
}