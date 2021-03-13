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
#define all(x) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    ll n;
    cin >> n;
    ll i;
    ll arr[n];
    ll sorted[n];
    rep(i, n)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted + n);
    vector<pair<ll, ll>> ans;
    rep(i, n)
    {
        ll j;
        ll t=i;
        for (j = i; j < n; j++)
        {
            // if (arr[i] == sorted[j])
            // {
            //     if (i != j &&find())

            //         ans.push_back(make_pair(i, j));
            //     break;
            // }
            if(arr[t]>arr[j])
            t=j;
        }
        if(i!=t)
         ans.push_back(make_pair(i, t));
    swap(arr[i],arr[t]);
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.ff << " " << it.ss << endl;
    }
}