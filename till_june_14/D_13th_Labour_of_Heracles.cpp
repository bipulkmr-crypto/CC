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
vll arr;
bool comp(pll a, pll b)
{
    if (a.ss == b.ss)
    {
        return (arr[a.ff] < arr[b.ff]);
    }
    else
    {
        return (a.ss < b.ss);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        arr.resize(n + 1, 0);
        int i;
        rep(i, n) cin >> arr[i + 1];
        ll sum = 0;
        fu(i, 1, n)
            sum += arr[i];
        vector<ll> m(n + 1, 0);
        rep(i, n - 1)
        {
            int a, b;
            cin >> a >> b;
            m[a]++;
            m[b]++;
        }
        vector<ll> res;
        fu(i, 1, n)
        {
            for (int j = 1; j < m[i]; j++)
                res.pb(arr[i]);
        }
        sort(all(res));
        reverse(all(res));
        for (auto &v : res)
        {
            cout << sum << " ";
            sum += v;
        }
        cout<<sum<<endl;
        // cout << sum << " ";
        // auto it = m.begin();
        // for (; it != m.end(); it++)
        // {
        //     res.pb({it->first, it->second});
        // }
        // sort(all(res), comp);
        // for (i = 0; i < res.size(); i++)
        // {
        //     if (res[i].ss > 1)
        //     {
        //         for (int j = 2; j <= res[i].ss; j++)
        //         {
        //             cout << sum + arr[(res[i].ff)] * (j - 1) << " ";
        //         }
        //     }
        //     sum += arr[res[i].ff] * (res[i].ss - 1);
        // }
        // cout << endl;
    }
}