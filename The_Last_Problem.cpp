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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x2, y2;
        cin >> x2 >> y2;
        ll i;
        ll sum = 0;
        ll val;
        for (i = a; i <= x2; i++)
        {
            val = (i * (i + 1)) / 2 + i * (b - 1);
            sum += val;
        }
        ll k = 1;
        // ll temp = ((x2 * (x2 + 1)) / 2);
        ll temp = val;
        for (i = b + 1; i <= y2; i++)
        {
            ll x = temp + k + i;
            temp = x;
            k++;
            sum += x;
        }
        if(b==1)sum-=1;
        // sum += (((x2 * (x2 + 1)) / 2) * (y2 - b) + x2 * (y2 - b) + (y2 * (y2 - 1)) / 2 - (b * (b - 1)) / 2);
        cout << sum << endl;
    }
}