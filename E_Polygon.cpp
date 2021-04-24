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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n][n];
        ll i, j;
        auto isvalid = [&](ll i, ll j) {
            if (i >>= 0 && i < n && j >= 0 && j < n)
                return true;
            else
            {
                return false;
            }
        };
        rep(i, n)
        {
            string s;
            cin >> s;
            rep(j, n)
            {
                arr[i][j] = (s[j] - '0');
                // cin >> arr[i][j];
            }
        }
        bool visited[n][n];
        memset(visited, false, sizeof(visited));
        // rep(i, n)
        // {
        //     rep(j, n)
        //     {
        //         if (arr[i][j])
        //         {
        //             if ((isvalid(i + 1, j) && arr[i + 1][j] == 1)||(arr[i][j]==1&&j==n-1))
        //             {
        //                 ll k;
        //                 rep(k, n)
        //                 {
        //                     arr[k][j] = 0;
        //                 }
        //             }
        //             else if ((isvalid(i, j + 1) && arr[i][j + 1] == 1)||arr[i][j]==1&&i==n-1)
        //             {
        //                 ll k;
        //                 rep(k, n)
        //                 {
        //                     arr[i][k] = 0;
        //                 }
        //             }
        //         }
        //     }
        // }
        bool flag = true;
        for (i = n - 2; i >= 0; i--)
        {
            for (j = n - 2; j >= 0; j--)
            {
                if (arr[i][j] && !arr[i + 1][j] && !arr[i][j + 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
}