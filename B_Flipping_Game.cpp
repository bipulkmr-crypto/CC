#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
void still_single()
{
    int i, j;
    int n;
    cin >> n;
    int arr[n];

    rep(i, n) cin >> arr[i];
    int k;
    if (n == 1)
    {
        cout << (!arr[0]) << endl;
        ret;
    }
    int ans = INT_MIN;
    int cnt = 0;
    int pre[n] = {0};
    int suff[n] = {0};
    pre[0] = arr[0];
    fu(i, 1, n - 1)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    suff[n - 1] = arr[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + arr[i];
    }
    rep(i, n)
    {
        for (j = i; j < n; j++)
        {
            cnt = 0;
            for (k = i; k <= j; k++)
            {
                if (!arr[k])
                    cnt++;
            }
            if (i > 0 && j < n - 1)
                ans = max(ans, cnt + pre[i - 1] + suff[j + 1]);
            else if (i > 0)
                ans = max(ans, cnt + pre[i - 1]);
            else if (j < n - 1)
            {
                ans = max(ans, cnt + suff[j + 1]);
            }
            else
                ans = max(cnt, ans);
        }
    }
    cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}