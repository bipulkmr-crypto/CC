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
vii arr;
int dp[5001][5001];
int n;
int solve(int left, int right)
{
    if (left > right || left < 0 || right > n)
        return 0;
    if (left == right)
        return arr[left];
    else if (dp[left][right] != -1)
    {
        return dp[left][right];
    }
    else
    {
        int sum = max(arr[left] + max(solve(left + 2, right), solve(left, right - 2)), arr[right] + max(solve(left + 2, right), solve(left, right - 2)));
        dp[left][right] = sum;
        return sum;
    }
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    arr.resize(n);
    int i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    int ans = solve(0, n - 1);
    cout << ans << endl;
}