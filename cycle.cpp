
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
using namespace std;
#define int ll
#define endl "\n"
#define mod 1000000007

vector<vector<int>> arr(100005);
vector<char> marked;
vector<int> p;

int startinig, end_c;

bool dfs(int v) {
    marked[v] = 1;
    for (int u : arr[v]) {
        if (marked[u] == 0) {
            p[u] = v;
            if (dfs(u))
                return true;
        } else if (marked[u] == 1) {
            end_c = v;
            startinig = u;
            return true;
        }
    }
    marked[v] = 2;
    return false;
}

signed main()
{
    fast

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].pb(y);
    }
    marked.assign(n, 0);
    p.assign(n, -1);
    startinig = -1;

    for (int v = 0; v < n; v++) {
        if (marked[v] == 0 && dfs(v))
            break;
    }

    if (startinig == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}