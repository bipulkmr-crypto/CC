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
ll n, m;
vector<vector<char>> ch;
vector<vector<bool>> visited;
void dfs(ll i,ll j)
{
    if(i<0||j<0||i>=n||j>=m)
    return ;
    if(visited[i][j])
    return ;
    visited[i][j]=true;
    if(ch[i][j]=='#')
    return ;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    return ;
}
int main()
{
    cin >> n >> m;
    ll i, j;
    ch.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m,false));
    rep(i, n)
    {
        rep(j, m) cin >> ch[i][j];
    }
    ll ans=0;
    for (i = 0; i < n; i++)
    {
        rep(j, m)
        {
            if (!visited[i][j]&&ch[i][j]=='.')
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
}