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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        ll i;
        rep(i, n) cin >> arr[i];
        int bits[n][32];
        ll j;
        memset(bits, 0, sizeof(bits));
        for (i = 0; i < n; i++)
        {
            ll temp = arr[i];
            for (j = 0; j < 32; j++)
            {
                if (temp & (1 << j))
                    bits[i][j] = 1;
                else
                    bits[i][j] = 0;
            }
        }
        ll count[32] = {0};
        ll val = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 32; j++)
            {
                count[j] += bits[i][j];
            }
        }
        for (i = 0; i < 32; i++)
        {
            if (count[i] > 0)
                val += (1 << i);
        }
        cout << val << endl;
        while (q--)
        {
            ll pos, num;
            cin >> pos >> num;
            pos -= 1;
            for (i = 0; i < 32; i++)
            {
                count[i] = count[i] - bits[pos][i];
            }
            ll temp = num;
            for (j = 0; j < 32; j++)
            {
                if (temp & (1 << j))
                {
                    bits[pos][j] = 1;
                    count[j] += 1;
                }

                else
                {
                    bits[pos][j] = 0;
                }
            }
            val = 0;
            for (i = 0; i < 32; i++)
            {
                if (count[i] > 0)
                    val += (1 << i);
            }
            cout << val << endl;
        }
    }
}