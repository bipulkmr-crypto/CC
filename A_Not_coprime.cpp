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
#define siz 51
vector<bool> isprime;
void seive()
{
    isprime.resize(siz, true);
    isprime[0] = isprime[1] = false;

    ll i, j;
    for (i = 2; i * i < siz; i++)
    {
        if (isprime[i])
            for (j = i * i; j < siz; j += i)
            {
                isprime[j] = false;
            }
    }
}
int main()
{
    seive();
    vector<ll> primes;

    ll n;
    cin >> n;
    // multiset<ll> q;
    // q.insert(321);
    // q.insert(0);
    // q.insert(1);
    // q.insert(321);
    ll arr[n];
    mll m;
    mll fin;
    ll i;
    rep(i, siz)
    {
        if (isprime[i])
            primes.push_back(i);
    }
    rep(i, n)
    {
        cin >> arr[i];
    }
    ll j;
    ll ans = 1;
    sll s;
    for (j = 0; j < n; j++)
    {
        ford(primes, it)
        {
            if ((arr[j] % (*it)) == 0)
            {
                s.insert(*it);
                break;
            }
        }
    }
    ford(s, it)
    {
        ans *= (*it);
    }

    //Not correct answer it is a question based on subset genreration

    // rep(i, n)
    // {
    //     ll x = 2;
    //     ll count = 0;
    //     ll temp = arr[i];
    //     while (temp > 1)
    //     {

    //         if (temp % x == 0)
    //         {
    //             m[x]=1;
    //             count++;
    //             temp /= x;
    //         }
    //         else
    //         {

    //             count = 0;
    //             x++;
    //         }
    //     }
    //     ford(m, it)
    //     {
    //         if(m.size() == 1)
    //         fin[it->ff] = max(it->ss, fin[it->ff]);
    //     }
    //     m.clear();
    // }
    // ll ans = 1;
    // ford(fin, it)
    // {
    //         ans *= pow(it->ff, it->second);
    // }
    cout << ans << endl;
}
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//         ll n;
//         cin >> n;
//         ll arr[n];
//         map<long long, long long> m;
//         map<long long, long long> fin;
//         ll i;
//         for (i = 0; i < n; i++) { cin >> arr[i]; }
//         for (i = 0; i < n; i++)
//         {
//                 ll temp = arr[i];
//                 ll x = 2;
//                 while (temp > 1) {
//                         if (temp % x == 0) {
//                                 fin[x] = 1;
//                                 break;
//                         } else {
//                                 x++;
//                         }
//                 }
//         }
//         ll ans = 1;
//         for (auto it = fin.begin(); it != fin.end(); it++) { ans *= it->first; }
//         cout << ans << endl;
// }