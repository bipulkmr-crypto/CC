#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
bool ispalin(string s)
{
    ll n = s.length();
    ll i = 0, j = n - 1;
    for (i = 0; i < n / 2 && j >= n / 2; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll i, j;
        ll len = s.length();
        if (k == 0)
            cout << "YES\n";
        // else
        // {
        //     if (len & 1)
        //     {
        //         if (ispalin(s))
        //         {
        //             cout << "YES\n";
        //         }
        //         else
        //         {
        //             cout << "NO\n";
        //         }
        //     }
        //     else
        //     {
        //         if (k == 0)
        //             cout << "YES\n";
        //         else
        //         {
        //             cout << "NO\n";
        //         }
        //     }
        // }
        // // cout << (ispalin("aaaaa")) << endl;
        else
        {
            i = 0;
            j = n - 1;
            bool flag = true;
            ll count = k;
            for (; i < n / 2 && j >= n / 2; i++, j--)
            {

                if (s[i] != s[j])
                {
                    flag = false;
                    break;
                }
                else
                {
                    count--;
                    if (count == 0)
                    {
                        if (j != n / 2)
                        {
                            flag = true;
                            break;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if (flag == true)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}