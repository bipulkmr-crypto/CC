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
        vector<pair<int, int>> arr(4);
        int i;
        pii f1, f2;
        rep(i, 4)
        {
            int a;
            cin >> a;
            arr[i] = {a, i};
        }
        if (arr[0].ff > arr[1].ff)
        {
            f1 = arr[0];
        }
        else
            f1 = arr[1];
        if (arr[2].ff > arr[3].ff)
        {
            f2 = arr[2];
        }
        else
            f2 = arr[3];
        sort(all(arr));
        if ((f1 == arr[2] && f2 == arr[3]) || (f2 == arr[2] && f1 == arr[3]))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}