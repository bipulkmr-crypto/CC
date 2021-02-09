#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
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
        ll n;
        cin >> n;

        string s;
        map<string, int> m;
        map<string, int> kill;
        while (n--)
        {
            /*cin >> s;
            string a, b;
            s += " ";
            ll i, c = 0;
            string tep = "";
            for (i = 0; i < s.length(); i++)
            {
                if (s[i] != ' ')
                    tep += s[i];
                else
                {
                    if (c == 0)
                        a = tep;
                    else if (c == 2)
                        b = tep;
                    else
                        continue;
                    tep = "";
                }
            }*/
            ll c = 0;
            for (ll i = 0; i < 3; i++)
            {
                cin >> s;
                if (i == 0)
                    m[s]++;
                else if (i == 2)
                    kill[s]++;
                else
                    continue;
            }
            // m[a]++;
            // m[b]--;
        }

        map<string, int>::iterator it = m.begin();
        map<string, int>::iterator it2 = kill.begin();
        int maxi = it->second, maxik = it2->second;
        string max = it->first, maxk = it2->first;
        for (it = m.begin(); it != m.end(); it++)
        {
            if (maxi < it->second)
            {
                maxi = it->second;
                max = it->first;
            }
            if (maxik < it2->second)
            {
                maxik = it2->second;
                maxk = it2->first;
            }
            it2++;
        }
        cout << max << " " << maxk << endl;
    }
}