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
        // int n;
        // cin >> n;
        // ll arr[n];
        // int i;
        // mll m;
        // rep(i, n)
        // {
        //     cin >> arr[i];
        //     m[arr[i]]++;
        // }
        // if (m[1] == 1)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        // int ans = 0;
        // int a1 = 0, a2 = n - 1;
        // for (i = 0; i < n-1; i++)
        // {
        //     if (arr[i] == 1)
        //     {
        //         a1 = i;
        //     }
        // }
        // reverse(arr, arr + n);
        // // fd(i, n - 1, 0)
        // rep(i, n-1)
        // {
        //     if (arr[i] == 1)
        //     {
        //         a2 = i;
        //         // break;
        //     }
        // }
        // ans = abs(a2 - a1);
        // cout << ans << endl;
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        while (a.back() == 0)
            a.pop_back();
        reverse(a.begin(), a.end());
        while (a.back() == 0)
            a.pop_back();
        cout << count(a.begin(), a.end(), 0) << endl;
    }
}