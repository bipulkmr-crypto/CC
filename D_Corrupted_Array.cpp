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
        int sz = n + 2;
        vll arr(sz);
        int i;
        rep(i, sz) cin >> arr[i];
        sort(all(arr));
        ll sum = accumulate(all(arr), 0);
        vll fx(sz);
        rep(i, sz - 1)
        {
            fx[i] = sum - (arr[i] + arr[i + 1]);
        }
        fx[sz - 1] = sum - (arr[0] + arr[sz - 1]);
        bool flag = false;
        int pos = -1;
        rep(i, sz)
        {
            if (binary_search(all(arr), fx))
            {
                flag = true;
                pos = find(all(arr), fx[i]) - arr.begin();
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
        else
        {
            rep(i, sz)
            {
                if (pos != i || pos != (i + 1))
                    cout << arr[i] << endl;
            }
        }
    }
}