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
        int n;
        cin >> n;
        ll arr[n];
        ll i;
        rep(i, n) cin >> arr[i];
        ll mx[n];
        ll mini[n];
        mx[0] = arr[0];
        mini[0] = arr[0];
        // fu(i, 1, n - 1)
        // {
        //     mx[i] = max(mx[i - 1], arr[i]);
        //     mini[i] = min(mini[i - 1], arr[i]);
        // }
        ll ans = 0;
        rep(i, n)
        {
            if (arr[i] <= 0)
                ans++;
        }
        sort(arr, arr + n);
        ll mn = INT_MAX;
        rep(i, n)
        {
            if (arr[i] > 0)
            {
                mn = min(arr[i], mn);
            }
        }
        bool flag = (mn < INT_MAX);
        fu(i, 1, n - 1)
        {
            if (arr[i] <= 0)
            {
                flag &= (arr[i] - arr[i - 1] >= mn);
            }
        }
        if (flag)
        {
            cout << ans + 1 << endl;
        }
        else
            cout << ans << endl;
        // ll c = *max_element(arr, arr + n);
        // fu(i, 1, n - 1)
        // {
        //     mx[i] = max(mx[i - 1], arr[i]);
        //     mini[i] = min(mini[i - 1], arr[i]);
        //     if ((mx[i] - mini[i]) <= c)
        //     {
        //         ans--;
        //         mini[i]=mini[i-1];
        //         mx[i]=mx[i-1];
        //     }
        // }
        // cout << ans << endl;
    }
}