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
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll i;
    ll pro = 1;
    ll count = 0;
    rep(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            count++;
        pro *= (arr[i] % mod);
        pro %= mod;
    }
    ll b[n] = {0};
    if (count <= 1)
    {
        rep(i, n)
        {
            if (arr[i] != 0)
                b[i] = (pro / arr[i]);
            else
                b[i] = pro;
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            ll id, v;
            cin >> id >> v;
            id--;
            // arr[id] = v;
            // b[id] = (pro / arr[id]);
            pro = (b[id] * v) % mod;
            arr[id] = v;
        }
        else if (x == 1)
        {
            ll id;
            cin >> id;
            id -= 1;
            if (arr[id] != 0)
                cout << (pro / arr[id]) << endl;
            else
                cout << pro << endl;
        }
    }
}