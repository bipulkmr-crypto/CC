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
        ll n;
        cin >> n;
        ll arr[n];
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll c = 0, len = 3;
        bool flag = false;
        ll j=0;
        while (len <= n)
        {
            for (i = 0; i < (n)&&(i+len)<n; i++)
            {
                ll mid = (i + len) / 2;
                flag = true;
                for (j = i; j < mid - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    for (j = mid; j < (i + len - 1) && (i + len) < n; j++)
                    {
                        if (arr[j] < arr[j + 1])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag == true)
                {
                    c++;
                }
            }
            len+=2;
        }
        cout << c<<endl;
    }
}