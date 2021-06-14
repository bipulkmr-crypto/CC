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
    int q;
    set<pair<int, int>> s1, s2;
    int i = 1;
    cin >> q;
    int t;
    int k = 1;
    vector<pair<int, int>> arr;
    while (q--)
    {
        ll val;
        cin >> t;
        if (t == 1)
        {
            cin >> val;
            s1.insert({-val, i});
            s2.insert({i, -val});
            // arr.push_back({val,i});
            i++;
        }
        else if (t == 2)
        {
            auto pos = *s2.begin();
            s2.erase(s2.begin());
            s1.erase(s1.find({pos.ss, pos.ff}));
            cout << pos.ff << " ";
            // cout << endl;
        }
        else if (t == 3)
        {
            auto x = *s1.begin();
            s1.erase(x);
            s2.erase(s2.lower_bound({x.ss, x.ff}));
            cout << x.ss << " ";
            // cout << endl;
        }
    }
}