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
struct point
{
    int x;
    int y;
    int val = 0;
};
void still_single()
{
    int r, c;
    cin >> r >> c;
    int x1, y1;
    cin >> x1 >> y1;
    pii dir[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
    queue<point> q;
    q.push({x1, y1, 0});
    int arr[r][c];
    auto isvalid = [&](int x, int y)
    {
        return (x >= 0 && x < r && y >= 0 && y < c);
    };
    memset(arr, -1, sizeof(arr));
    // arr[r / 2][c / 2] = 0;
    int i, j;
    arr[x1][y1]=0;
    while (!q.empty())
    {
        auto p = q.front();
        int xx = p.x;
        int yy = p.y;
        int val = p.val;
        q.pop();
        for (i = 0; i < 8; i++)
        {
            int newx = xx + dir[i].ff;
            int newy = yy + dir[i].ss;
            if (isvalid(newx, newy) && arr[newx][newy] == -1)
            {
                arr[newx][newy] = val + 1;
                q.push({newx, newy, val + 1});
            }
        }
    }
    rep(i, r)
    {
        rep(j, c)
                cout
            << arr[i][j]<<' ';
        cout << endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}