#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
vector<bool> isprime(10001, true);
void seive()
{
    ll i, j;
    isprime[0] = isprime[1] = false;
    for (i = 2; i*i< 10001; i++)
    {
        if (isprime[i])
        {
            for (j = i * i; j < 10001; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}
int main()
{
    seive();
    ll t;
    cin >> t;
    vector<ll> primes;
    ll i;
    for (i = 1001; i < 9999; i++)
    {
        if (isprime[i])
            primes.push_back(i);
    }
    vector<vector<ll>> list;
    for (auto x : primes)
    {
        for (ll j = 0; j <= 3; j++)
        {
            string s = to_string(x);
            for (ll k = 0; k < 10; k++)
            {
                string temp = s;
                if (temp[j] != char('0' + k))
                    temp[j] = char('0' + k);
                ll val = stoi(temp);
                if (isprime[val])
                    list[x].pb(val);
            }
        }
    }
    // while (t--)
    // {
    //     vector<vector<ll>> arr;
    //     ll a, b;
    //     cin >> a >> b;
        
    // }
}