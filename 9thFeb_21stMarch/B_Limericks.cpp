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
#include <set>
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
    ll range = 1e3;
    vector<bool> isprime(range + 1, true);
    isprime[0] = isprime[1] = false;

    ll n;
    cin >> n;
    ll i = 2;
    vector<ll> ans;
    // for (i = 2; i * i <= range; i++)
    // {
    //     if (isprime[i])
    //     {
    //         for (ll j = i * i; j <= range; j += i)
    //         {
    //             isprime[j] = false;
    //         }
    //     }
    // }
    while(n>1)
    {
        if(n%i==0)
        {
            ans.pb(i);
            n/=i;
        }
        else
        {
            i++;
        }
    }
    vector<ll>::iterator it;
    for(it=ans.begin();it!=ans.end();it++)
    {
        cout<<*it;
    }
    // for (i = 2; i < range + 1; i++)
    // {
    //     if (isprime[i])
    //         if (n % i == 0)
    //             ans.push_back(i);
    // }
    // for (ll j : ans)
    // {
    //     cout << j;
    // }
    // cout<<endl;
}