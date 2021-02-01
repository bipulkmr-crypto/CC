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
    cin >> n;
    ll door[26] = {0};
    ll key[26] = {0};
    string s;
    cin >> s;
    ll i;
    ll c = 0;
    ll len = s.length();
    rep(i, len)
    {
        if (i % 2 == 0)
            key[s[i] - 97]++;
        else
        {
            ll pos = tolower(s[i]) - 97;
            if (key[pos] > 0)
                key[pos]--;
            else
                c++;
        }
    }
    cout << c << endl;
}