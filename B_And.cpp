#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <set>
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
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    ll res[n];
    ll i;
    set<ll> s;
    map<ll, ll> m;
    rep(i, n)
    {
        cin >> arr[i];
        res[i] = arr[i] & x;
        s.insert(res[i]);
        m[res[i]]++;
    }
    bool flag = true;
    rep(i, n)
    {
        if (arr[i] != arr[0])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0;
    }
    else
    {
        if (s.size() == n)
        {
            cout << -1;
            return 0;
        }
        // // map<ll,ll>::iterator it;
        // // for(it=m.begin();it!=m.end();it++)
        // // {
        // //     if(it->second>=2)
        // //     {
        // //         cout<<1;
        // //         return 0;
        // //     }
        // // }
        // rep(i, n)
        // {
        //     if ((arr[i] & x) != arr[i])
        //     {
        //         if (binary_search(arr, arr + n, (arr[i] & x)))
        //         {
        //             cout << 1;
        //             return 0;
        //         }
        //     }
        // }
        // if(s.size()<n)
        // {
        //     cout<<1;
        //     return 0;
        // }

        cout << 2;
        return 0;
    }
}