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
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    vector<ll> sorted(n, 0);
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted.begin(), sorted.end());
    reverse(sorted.begin(), sorted.end());
    ll curr = -1;
    for (i = n - 1; i >= 0; i--)
    {
        if (sorted[i] == 1)
        {
            curr = i;
            break;
        }
    }
    while (q--)
    {
        ll x, pos;
        cin >> x >> pos;
        if (x == 1)
        {

            //    sorted[curr]=1-sorted[curr];
            if (arr[pos-1] == 1)
            {
                sorted[curr] = 0;
                curr--;
                if (curr < 0)
                    curr = n - 1;
            }
            else
            {
                sorted[curr + 1] = 1;
                curr++;
            }
            arr[pos - 1] = 1 - arr[pos - 1];
        }
        else if (x == 2)
        {
            cout << (sorted[pos - 1]) << endl;
        }
    }
}
