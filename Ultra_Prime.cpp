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
    ll i, j;
    ll range = 1e6;
    vector<bool> isprime(range, true);
    isprime[0] = isprime[1] = false;
    for (i = 4; i < range; i += 2)
    {
        isprime[i] = false;
    }
    for (i = 3; i * i < range; i += 2)
    {
        if (isprime[i])
        {
            for (j = i * i; j < range; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    vector<ll> prime;
    ll count = 1;
    rep(i, range)
    {
        if (isprime[i])
            prime.pb(i);
    }
    vector<ll> ultraprime;
    ll freq[range + 1] = {0};
    for (ll x : prime)
    {
        ll sum = 0;
        ll temp = x;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (isprime[sum])
            ultraprime.pb(x);
    }
    vector<ll>::iterator it = ultraprime.begin();
    for (i = 1; i < range + 1; i++)
    {
        if (i >= *it)
        {
            it++;
            freq[i]++;
        }
        freq[i] = freq[i] + freq[i - 1];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << (freq[r] - freq[l-1]) << endl;
    }
}