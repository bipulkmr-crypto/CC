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
const int MAX_N = 200005;
const int LOG = 17;
int a[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
int bin_log[MAX_N];
int mx[MAX_N][LOG];
int min_query(int L, int R)
{ // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R - (1 << k) + 1][k]);
}
int max_query(int L, int R)
{
    int length = R - L + 1;
    int k = bin_log[length];
    return max(mx[L][k], m[R - (1 << k) + 1][k]);
}
int main()
{
    // 1) read input
    int n;
    cin >> n;
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        bin_log[i] = bin_log[i / 2] + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[i][0] = a[i];
    }
    // 2) preprocessing, O(N*log(N))
    for (int k = 1; k < LOG; k++)
    {
        for (int i = 0; i + (1 << k) - 1 < n; i++)
        {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }
    for (int k = 1; k < LOG; k++)
    {
        for (int i = 0; i + (1 << k) - 1 < n; i++)
        {
            mx[i][k] = max(mx[i][k - 1], mx[i + (1 << (k - 1))][k - 1]);
        }
    }
    // 3) answer queries
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;
        double ans = 0.0;
        ll first = min_query(L, R);
        if (L < R)
            ans =first+max((max_query(L,R)-first)/2,(max_query(0,n-1)-first));
        else
            ans = max_query(L, R);
        cout << setprecision(1) << fixed << ans << endl;
    }
}