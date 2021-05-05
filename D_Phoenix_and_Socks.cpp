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
        int n, l, r;
        cin >> n >> l >> r;
        int left[l];
        int right[r];
        int i;
        rep(i, l) cin >> left[i];
        rep(i, r) cin >> right[i];
        int j = 0;
        i = 0;
        sort(left, left + l);
        sort(right, right + r);
        int ans = 0;
        int mini = min(l, r);
        int mx = max(l, r);
        mini += 1;
        while (i < l && j < r)
        {
            if (left[i] != right[j])
            {
                ans += 1;
            }
            i++;
            j++;
        }
        if (l > r)
        {
            // if (i < l)
            {
                for (int k = r + 1; k < l - 1; k += 2)
                {
                    if (left[k] != left[k + 1])
                        ans += 2;
                    else
                        ans += 1;
                }
            }
        }

        else if (r > l)
        {
            for (int k = l + 1; k < r - 1; k += 2)
            {
                if (right[k] != right[k + 1])
                    ans += 2;
                else
                    ans += 1;
            }
        }
        cout << ans << endl;
    }
}