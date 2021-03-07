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
    map<char, ll> m;
    ll n = s.length();
    ll i, pairs = 0, single = 0;
    vector<pair<char, char>> v1;
    vector<char> v2;
    for (i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    map<char, ll>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second % 2 == 0)
        {
            pairs += (it->second) / 2;
            for (i = 0; i < it->second; i += 2)
                v1.pb(make_pair(it->first, it->first));
        }
        else
        {
            single++;
            pairs += (it->second / 2);
            v2.push_back(it->first);
        }
    }
    string temp1 = "", temp2 = "";
    if (n % 2)
    {
        if (single > 1)
            cout << "NO SOLUTION\n";
        else
        {
            ll total = pairs + single;
            for (i = 0; i < (total); i++)
            {
                // if (i == (total / 2))
                //     temp1 += v2[0];
                // else
                // {
                temp1 += v1[i].ff;
                temp2 = v1[i].ss + temp2;
                // }
            }
            // reverse(temp2.begin(),temp2.end());

            // cout << (temp1 +v2[0]+ temp2) << endl;
            // rep(i,)
            cout << temp1 << v2[0] << temp2 << endl;
        }
    }
    else
    {
        if (single > 0)
            cout << "NO SOLUTION\n";
        for (i = 0; i < pairs; i++)
        {
            temp1 = temp1 + v1[i].ff;
            temp2 = temp2 + v1[i].ss;
        }
        cout << (temp1 + temp2) << endl;
    }
}