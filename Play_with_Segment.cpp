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
                cin >>
            arr[i];
        ll maxi = -1, mini = 1e12;
        ll len = 0, curr = 1;
        maxi = arr[0], mini = arr[0];
        for (i = 1; i < n; i++)
        {

            if ((maxi - mini) == 1)
            {
                curr++;
                maxi = max(maxi, arr[i]);
                mini = min(mini, arr[i]);
            }
            else
            {
                len = max(len, curr);
                curr = 2;
                maxi = arr[i];
                mini = arr[i];
            }
        }
        len = max(len, curr);
        cout << len << endl;
    }
}