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
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
ll binpowmod(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll k;
        cin >> n >> k;
        ll mod = pow(10, k);
        ll last = binpowmod(n, n, mod);
        long double tmp = n;
        long double D = (tmp * log10(tmp));
        long long dig = (long long)(D + 1) - k;
        D -= (long double)dig;
        long double ans = powl(10, D);
        long long qq = (long long)ans;
        printf("%lld %0*lld\n",qq,(int)k,last)                                                                                             ;
    }
}
// // long double tmp=n;
// // long double D=(tmp*log10(tmp));
// // long long dig=(long long)(D+1)-k;
// // D-=(long double)dig;
// // long double ans=powl(10,D);
// // long long qq=(long long)ans;
//Doing the same thing as the solution below but not knowing where i am going wrong

// #include<bits/stdc++.h>
// using namespace std;

// long long lastK(long long n, long long div)
// {
//     long long temp=n, ans=1LL;
//     while(n!=0)
//     {
//         if(n&1) ans = (ans*temp)%div;
//         temp = (temp*temp)%div;
//         n >>= 1;
//     }
//     return ans%div;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t; cin>>t;
//     long long ten[12]; ten[0]=1; for(int i=1;i<=11;i++) ten[i]=ten[i-1]*10;
//     while(t--)
//     {
//         long long n; int k;
//         cin>>n>>k;
//         long double tmp=n;
//         long double D=(tmp*log10(tmp));
//         long long dig=(long long)(D+1)-k;
//         D-=(long double)dig;
//         long double ans=powl(10,D);
//         long long qq=(long long)ans;
//         printf("%lld %0*lld\n",qq,(int)k,lastK(n,ten[k]));
//     }
//     return 0;
// }
