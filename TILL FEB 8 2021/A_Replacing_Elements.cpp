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
        ll n, d;
        ll i;
        ll min = 0;
        cin >> n >> d;
        bool flag = true;
        ll arr[100001] = {0};
        rep(i, n)
        {
            cin >> arr[i];
        }
        rep(i, n)
        {
            if (arr[i] > d)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {

            sort(arr, arr + n);
            min = arr[0] + arr[1];
            if (min >= d)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}