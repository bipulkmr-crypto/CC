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
    int n;
    cin >> n;
    vll arr(n);
    int i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[0] > arr[1])
            {
                cnt += (arr[0] - arr[1]);
                arr[0] = arr[1];
            }
        }
        else if (i == n - 1)
        {
            if (arr[n - 1] > arr[n - 2])
            {
                cnt += (arr[n - 1] - arr[n - 2]);
                arr[n - 1] = arr[n - 2];
            }
        }
        else
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cnt += (arr[i] - min(arr[i - 1], arr[i + 1]));
                arr[i] = min(arr[i - 1], arr[i + 1]);
            }
        }
    }
    for (i = n-1; i >=0; i--)
    {
        if (i == 0)
        {
            if (arr[0] < arr[1])
            {
                cnt += (arr[1] - arr[0]);
                arr[1] = arr[0];
            }
        }
        else if (i == n - 1)
        {
            if (arr[n - 1] < arr[n - 2])
            {
                cnt += (arr[n - 2] - arr[n - 1]);
                arr[n - 2] = arr[n - 1];
            }
        }
        else
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cnt += (arr[i] - max(arr[i - 1], arr[i + 1]));
                arr[i] = max(arr[i - 1], arr[i + 1]);
            }
        }
    }
    rep(i, n)
    {
        if (i == 0)
            cnt += arr[0];
        else if (i == n - 1)
            cnt += arr[n - 1];
        else
            cnt += abs(arr[i] - arr[i - 1]);
    }
    cout << cnt << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}