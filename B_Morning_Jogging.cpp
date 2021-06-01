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
        // int n, m;
        // cin >> n >> m;
        // int arr[n][m];
        // int i, j;
        // rep(i, n) rep(j, m) cin >> arr[i][j];
        // int mn[m];
        // rep(i, m) mn[i] = arr[0][i];
        // sort(mn, mn + m);
        // rep(i, n)
        // {
        //     rep(j, m)
        //     {
        //         int k;
        //         rep(k, m)
        //         {
        //             if (mn[k] > arr[i][j])
        //             {
        //                 mn[k] = arr[i][j];
        //                 break;
        //             }
        //         }
        //     }
        // }
        int i, j, k;
        int n, m;
        cin >> n >> m;
        int ar[n][m];
        vector<pair<int, pii>> v;
        rep(i, n)
        {
            rep(j, m)
            {
                cin >> ar[i][j];
                v.pb({ar[i][j], {i, j}});
            }
        }
        sort(all(v));
        int ans[n][m];
        memset(ans, -1, sizeof(ans));
        rep(i, m)
        {
            int a = v[i].ss.ff, b = v[i].ss.ss;
            ans[a][b] = i;
        }
        rep(i, n)
        {
            rep(j, m)
            {
                bool f = false;
                rep(k, m)
                {
                    if (ans[i][k] == j)
                    {
                        f = true;
                        break;
                    }
                }
                if (f)
                    continue;
                rep(k, m)
                {
                    if (ans[i][k] == -1)
                    {
                        ans[i][k] = j;
                        break;
                    }
                }
            }
        }
        rep(i, n)
        {
            vector<pii> v;
            rep(j, m)
            {
                v.pb({ans[i][j], ar[i][j]});
            }
            sort(all(v));
            for (auto x : v)
                cout << x.ss << " ";
            cout << endl;
        }
    }
}