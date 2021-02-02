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
    while (t--)
    {
        string s;
        cin >> s;
        ll i, c = 0;
        ll n = s.length();
        ll j = n - 1;
        if (n % 2==0)
        {
            for (i = 0; i < n / 2; i++)
            {
                if (s[i] != s[j])
                {
                    s[i] = s[j] = (char)((s[i] + s[j]) / 2);
                }
                j--;
            }
            cout << s << endl;
        }
        else
        {
            for (i = 0; i < (n / 2)-1; i++)
            {
                if (s[i] != s[j])
                {
                    s[i] = s[j] = (char)((s[i] + s[j]) / 2);
                }
                j--;
            }
            s[n/2]=(char)(s[n/2]+1);
            cout << s << endl;
        }
    }
}