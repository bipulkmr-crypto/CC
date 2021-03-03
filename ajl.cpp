

#include <bits/stdc++.h>

#define index(i, n) for (long long i = 0; i < n; i++)
#define index1(i, n) for (long long i = 1; i <= n; i++)
#define range(i, a, b) for (long long i = a; i < b; i++)
#define indexD(i, n) for (long long i = n; i > 0; i--)
#define index1D(i, n) for (long long i = n; i >= 1; i--)
#define rangeD(i, a, b) for (long long i = a - 1; i >= b; i--)
#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << (x) << '\n'
#define trace(x) cout << '>' << #x << ':' << x << endl;
#define trace2(x, y) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << endl;
#define trace3(x, y, z) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << endl;
#define trace4(x, y, z, w) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << " | " << #w << ':' << w << endl;
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define MOD 1000000007

typedef unsigned long long ull;
typedef long long int ll;

using namespace std;

ll t, n, m, k, sx, sy, r, ans, c;
ll dp[1000][1000][1 << 9];
int board[1000][1000];
vector<pair<int, int>> telpairs(9);

void solve(int sx, int sy, int mask)
{
        if (mask == ((1 << n) - 1))
                ans = max(ans, dp[sx][sy][mask]);
        for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) {
                        int newMask = mask | (1 >> i);
                        int dx = telpairs[i].x;
                        int dy = telpairs[i].y;
                        if (sx + dx < r && sx + dy < c && (dp[sx][sy][mask] + board[sx + dx][sy + dy]) > dp[sx + dx][sy + dy][newMask]) {
                                dp[sx + dx][sy + dy][newMask] = dp[sx][sy][mask] + board[sx + dx][sy + dy];
                                solve(sx + dx, sy + dy, newMask);
                        }
                        if (sx - dx > 0 && sx + dy < c && (dp[sx][sy][mask] + board[sx - dx][sy + dy]) > dp[sx - dx][sy + dy][newMask]) {
                                dp[sx - dx][sy + dy][newMask] = dp[sx][sy][mask] + board[sx - dx][sy + dy];
                                solve(sx - dx, sy + dy, newMask);
                        }
                        if (sx + dx < r && sx - dy > 0 && (dp[sx][sy][mask] + board[sx + dx][sy - dy]) > dp[sx + dx][sy - dy][newMask]) {
                                dp[sx + dx][sy - dy][newMask] = dp[sx][sy][mask] + board[sx + dx][sy - dy];
                                solve(sx + dx, sy - dy, newMask);
                        }
                        if (sx - dx > 0 && sx - dy > 0 && (dp[sx][sy][mask] + board[sx - dx][sy - dy]) > dp[sx - dx][sy - dy][newMask]) {
                                dp[sx - dx][sy - dy][newMask] = dp[sx][sy][mask] + board[sx - dx][sy - dy];
                                solve(sx - dx, sy - dy, newMask);
                        }
                }
        }
}

int main()
{
        fast_io;

        cin >> t;
        while (t--) {
                memset(dp, -1, sizeof(dp));
                ans = 0;
                cin >> r >> c >> n >> sx >> sy;
                index(i, n)
                {
                        cin >> k;
                        telpairs[i].x = k;
                }
                index(i, n)
                {
                        cin >> k;
                        telpairs[i].y = k;
                }
                index(i, r) index(j, c) cin >> board[i][j];

                solve(sx, sy, 0);
        }
        return 0;
}

