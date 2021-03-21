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
        bool flag = true;
        // string s;
        // cin >> s;
        // string tem = "21";
        // ll i;
        // rep(i, s.length() - 1)
        // {
        //     string p = s.substr(i, i + 2);
        //     if (p == tem)
        //     {
        //         flag = false;
        //         break;
        //     }
        // }
        // ll num = stol(s);
        // if (((num % 21) != 0) && flag)
        // {
        //     cout << "The streak lives still in our heart!" << endl;
        // }
        // else
        // {
        //     cout << "The streak is broken!" << endl;
        // }
        ll num = 0;
        cin >> num;
        if (num % 21==0)
            cout << "The streak is broken!" << endl;
        else
        {
            bool flag = true;
            while (num > 0)
            {
                if (num % 100 == 21)
                {
                    flag = false;
                    break;
                }
                num/=10;
            }
            if (flag)
                cout << "The streak lives still in our heart!" << endl;
            else
                cout << "The streak is broken!" << endl;
        }
    }
}