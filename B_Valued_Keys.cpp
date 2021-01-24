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
    string s1, s2;
    cin >> s1 >> s2;
    ll i;
    bool flag = true;
    for (i = 0; i < s1.length(); ++i)
    {
        if ((s2[i] - s1[i]) > 0)
        {
            cout << -1 << endl;
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        /*for (i = 0; i < s1.length(); ++i)
        {

            if (s1[i] == s2[i])
            {
                if (s1[i] == 'z')
                    cout << ((char)(s2[i] - 1));
                else
                    cout << ((char)(s1[i] + 1));
            }
            else
                cout << s2[i];
        }
        cout << endl;*/
        cout << s2<<endl;
    }
}