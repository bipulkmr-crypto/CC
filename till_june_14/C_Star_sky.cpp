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
int arr[101][101];
ll sum[101][101];
int main()
{
    int n, queries, c;
    cin >> n >> queries >> c;
    int i;
    memset(arr, 0, sizeof(arr));
    rep(i, n)
    {
        int x, y, s;
        cin >> x >> y >> s;
        arr[x][y] = s;
    }
    sum[0][0] = arr[0][0];
    for (int j = 1; j < 101; j++)
    {
        sum[0][j] = arr[0][j] + sum[0][j - 1];
    }
    for (int i = 1; i < 101; i++)
    {
        sum[i][0] = arr[i][0] + sum[i - 1][0];
    }
    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    while (queries--)
    {
        int x1, y1, x2, y2, time;
        cin >> time >> x1 >> y1 >> x2 >> y2;
        ll p = x1, q = y2, r = x2, s = y1;
        ll total = sum[r][s];

        if (q - 1 >= 0)
        {
            total -= sum[r][q - 1];
        }

        if (p - 1 >= 0)
        {
            total -= sum[p - 1][s];
        }

        if (p - 1 >= 0 && q - 1 >= 0)
        {
            total += sum[p - 1][q - 1];
        }
        total += abs((x2 - x1) * (y1 - y2));
        total %= c;
        cout << total << endl;
    }
}