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
    ll h, m;
    char ch;
    string s;
    cin >> h >> ch >> m >> s;
    while (t--)
    {
        ll h1, m1, h2, m2;
        string s1, s2;
        char ch1, ch2;
        cin >> h1 >> ch1 >> m1 >> s1 >> h2 >> ch2 >> m2 >> s2;
        if(s1=="AM"&&s2=="PM")
        h2+=(ll)(12-h1);
        
    }
}