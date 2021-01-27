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
        ll c[4] = {0};
        ll i;
        bool flag = true;
        ll len = s.length();
        if (isdigit(s[0]) || isdigit(s[len - 1]))
        {
            cout << "NO" << endl;
        }
        else if (s.length() >= 10)
        {
            rep(i, s.length())
            {
                if (isalpha(s[i]))
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        c[0]++;
                    }
                    else
                    c[1]++;
                }
                else if (isdigit(s[i]) && (i > 0 && i < s.length()))
                {
                    c[2]++;
                }
                else
                    c[3]++;
            }
            rep(i, 4)
            {
                if (c[i] > 0)
                    flag = true;
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}