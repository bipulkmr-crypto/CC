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
        map<char, ll> m;
        ll px, py;
        cin >> px >> py;
        string s;
        cin >> s;
        ll x = 0, y = 0;
        ll i;
        rep(i, s.length())
        {
            m[s[i]]++;
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
        }
        bool flag1 = false, flag2 = false;
        if (x == px && y == py)
        {
            cout << "YES\n";
        }
        else
        {
            flag1 = false;
            flag2 = false;
            //  ll dx=m['L']-m['U'];
            //  if(dx)
            ll dx = px - x;
            if (dx > 0)
            {
                if (m['L'] < dx)
                    flag1 = false;
                else
                    flag1 = true;
            }
            else
            {
                if (m['R'] < abs(dx))
                    flag1 = false;
                else
                    flag1 = true;
            }
            ll dy = py - y;
            if (dy > 0)
            {
                if (m['D'] < dy)
                    flag2 = false;
                else
                    flag2 = true;
            }
            else
            {
                if (m['U'] < abs(dy))
                    flag2 = false;
                else
                    flag2 = true;
            }
            if (flag2 & flag1)
                cout << "YES" << endl;
            else
            {
                cout << "NO\n";
            }
        }
    }
}