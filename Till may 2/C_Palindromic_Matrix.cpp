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
    ll i;
    mll m;
    rep(i, (n * n))
    {
        ll inp;
        cin >> inp;
        m[inp]++;
    }
    auto it = m.begin();
    if (n % 2 == 1)
    {
        for (; it != m.end(); it++)
        {
            if (it->second % 2 == 1)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    ll j;
    ll arr[n][n];
    it = m.begin();
    memset(arr, 0, sizeof(arr));
    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            for (j = 0; j < n/2; j++)
            {
                if (it->second > 1)
                {
                    arr[i][j] = it->first;
                    arr[n - i][j] = it->first;
                    it->second -= 2;
                    if (it->second == 0)
                        it++;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < n / 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (it->second > 1)
                {
                    arr[i][j] = it->first;
                    arr[n - i][j] = it->first;
                    it->second -= 2;
                    if (it->second == 0)
                        it++;
                }
            }
        }
        for (i = 0; i < n / 2; i++)
        {
            arr[n / 2][i] = arr[n - i][i] = it->second;
            it->second -= 2;
            if (it->second == 0)
            {
                it++;
            }
        }
        arr[n / 2][n / 2] = it->second;
    }
    rep(i, n)
    {
        rep(j, n)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}