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
    fast
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<vector<ll>> v;
        ll i;
        cin >> n;
        v.resize(n + 1);
        vector<bool> visited(n + 1);
        vll deg(n+1,0);
        // memset(deg,0,sizeof(deg));
        rep(i, n - 1)
        {
            ll a, b;
            cin >> a >> b;
            v[a].pb(b);
            v[b].pb(a);
            deg[a]++;
            deg[b]++;
        }
        vector<ll> weight(n + 1);
        fu(i, 1, n)
                cin >>
            weight[i];
        ll ans = 0;
        for (i = 1; i <= n; i++)
        {
            queue<ll> q;
            q.push(i);
            while (!q.empty())
            {
                ll x = q.front();
                q.pop();
                if (v[x].size() >= 2 && weight[x] >= 1&&!visited[x])
                {
                    ans++;
                }
                for (ll j : v[x])
                {
                    if (!visited[j])
                    {
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
        }
        ll val=0;
        fu(i,1,n)
        {
            if(deg[i]>=2&&weight[i]>=1)
            val++;
        }
        cout << val << endl;
    }
}