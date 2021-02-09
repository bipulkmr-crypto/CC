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
    string s;
    cin >> s;
    ll i, j = s.length() - 1;
    bool flag = true;
    ll n = s.length();
    char maxi = s[0];
    ll freq = 0;
    for (i = 0; i < n / 2 && j >= n / 2; i++)
    {
        if (s[i] != s[j])
        {
            flag = false;
            break;
        }
        j--;
    }
    rep(i, n)
    {
        if (maxi < s[i])
        {
            maxi = s[i];
        }
    }
    rep(i, n)
    {
        if (maxi == s[i])
        freq+=1;
    }
    if (flag)
    {

        rep(i, freq)
                cout<< maxi;
    }
    else
    {
        rep(i, freq)
                cout<< maxi;2
    }
}