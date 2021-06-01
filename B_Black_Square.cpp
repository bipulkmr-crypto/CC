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
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int i, j;
    int cnt = 0;
    rep(i, n)
    {
        string s;
        cin >> s;
        rep(j, m) arr[i][j] = s[j];
    }
    int minx = INT_MAX, max_x = INT_MIN, miny = INT_MAX, max_y = INT_MIN;
    rep(i, n)
        rep(j, m)
    {
        if (arr[i][j] == 'B')
        {
            cnt++;
            minx = min(i, minx);
            miny = min(j, miny);
            max_y = max(max_y, j);
            max_x = max(i, max_x);
        }
    }
    if(cnt==0)
    {
        cout<<1<<endl;
        exit(0);
    }
    int len = max(max_x - minx + 1, max_y - miny + 1);
    if (len > n || len > m)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (len * len - cnt) << endl;
    }
}