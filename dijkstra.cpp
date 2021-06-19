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
#define rep(i, a, n) for (i = a; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define int ll
int vis[100005], dis[100005];
vector<pii> adj[100005];
void solve()
{
	int n, m;
	cin >> n >> m;
	int i;
	rep(i, 0, m)
	{
		int u, v, w;
		cin>>u>>v>>w;
		adj[u].pb(make_pair(v,w));
	}
	//dijkstra
	rep(i, 2, n + 1) dis[i] = 1e16;
	priority_queue<pii, vector<pii>, greater<pii>> q;
	q.push(make_pair(0,1));
	while (!q.empty())
	{
		int u = q.top().ss;
		q.pop();
		if (vis[u])
			continue;
		vis[u] = 1;
		for (auto [v, w] : adj[u])
		{
			if (dis[v] > dis[u] + w)
			{
				dis[v] = dis[u] + w;
				q.push(make_pair(dis[v], v));
			}
		}
	}
	rep(i, 1, n + 1) cout<<(dis[i])<<' ';
}
signed main()
{
	fast
	int t = 1;
	//cin>>t;
	while (t--)
	{
		solve();
		//cout<<'\n';
	}

}