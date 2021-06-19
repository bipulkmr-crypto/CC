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
int n;
vll arr(3005);
ll dp[3005][3005];
ll x = 0, y = 0;
void solve(int l, int r, int p)
{
    if (l >= n || r < 0)
        return ;
    // else if (dp[l][r] != -1)
    //     {
    //         if(p==0)
    //         x+=dp[l][r];
    //     }
    else
    {
        if (p == 0)
        {
            if (arr[l] > arr[r])
            {
                x += arr[l];
                solve(l + 1, r, 1);
            }
            else
            {
                x += arr[r];
                solve(l, r - 1, 1);
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                y += arr[l];
                solve(l + 1, r, 0);
            }
            else
            {
                y += arr[r];
                solve(l, r - 1, 0);
            }
        }
    }
}
void still_single()
{
    cin >> n;
    int i;
    memset(dp, -1, sizeof(dp));
    rep(i, n) cin >> arr[i];
    int pos;
    solve(0, n - 1, 0);
    cout<<x-y<<endl;
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