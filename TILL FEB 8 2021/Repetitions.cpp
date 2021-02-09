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
    ll n;
    string s;
    cin >> s;
    n = s.length();
    ll i = 0;
    
    ll k = 0;
    ll max = 1, curr = 1;
    for (ll i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            curr++;
        else
            curr = 1;

        if (curr > max)
            max = curr;
    }
    cout << (max) << endl;
}