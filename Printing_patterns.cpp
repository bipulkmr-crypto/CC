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
    ll r, c;
    cin >> r >> c;
    ll i, j;
    // vector<vector<ll>> arr(r,vector<ll>(c));
    ll arr[r][c];
    ll alp,bet;
    cin>>alp>>bet;
    ll visited[r][c];
    memset(visited,false,sizeof(visited));
    auto isvalid = [&](ll x, ll y) {
        return (0 <= x && x < r && 0 <= y && y < c);
    };
    memset(arr, 0, sizeof(arr));

    vector<pair<ll, ll>> dir = {{-1, -1}, {0, -1}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {-1, 0}};
    queue<pair<ll, ll>> q;
    q.push({alp,bet});
    visited[alp][bet] = true;
    while (!q.empty())
    {
        auto v = q.front();
        q.pop();
        for (i = 0; i < 8; i++)
        {
            ll newx = v.ff + dir[i].ff;
            ll newy = v.ss + dir[i].ss;
            if (isvalid(newx, newy) && !visited[newx][newy])
            {
                visited[newx][newy] = true;
                arr[newx][newy] = arr[v.ff][v.ss] + 1;
                q.push({newx,newy});
            }
        }
    }
    rep(i,r)
    {
        rep(j,c)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


// ll arr[1001][1001]={0};
// bool visited[1001][1001]=false;