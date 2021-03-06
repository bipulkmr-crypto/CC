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
vector<vector<int>>adj;
vector<bool>visited(2*(1e5)+5);
ll cnt=0;
void dfs(int i)
{
    visited[i]=true;
    cnt++;
    for(auto u:adj[i])
    {
        if(!visited[u])
        dfs(u);
    }
}
void still_single()
{
    int n;
    cin>>n;
    vll arr(n);
    int i;
    rep(i,n)
    {
        cin>>arr[i];
    }
    // int i;
    int siz=2*(1e5)+5;
    adj.resize(siz);
    fu(i,0,n/2-1)
    {
        if(arr[i]!=arr[n-i-1])
        {
            adj[arr[i]].pb(arr[n-i-1]);
            adj[arr[n-i-1]].pb(arr[i]);
        }
    }
    ll ans=0;
    for(i=1;i<siz;i++)
    {
        if(!visited[i])
        {
            cnt=0;
            dfs(i);
            if(cnt!=0)
            ans+=(cnt-1);
        }
    }
    cout<<ans<<endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
fast
int t=1;
// cin >> t;
while (t--)
{
    still_single();
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld large double
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rev_loop(i, a, b) for (int i = a; i > b; i--)
#define pb push_back

vector<ll> arr[100005];
ll vis[100005] = {0};
ll siz;

void dfs(ll v)
{
    vis[v] = 1;
    siz++;

    for (ll child : arr[v])
        if (!vis[child])
            dfs(child);
}

int main()
{
    fast_io;
    ll n;
    cin >> n;
    ll a[n];
    loop(i, 0, n)
            cin >>
        a[i];
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    loop(i, 0, n / 2)
    {
        if (n % 2 == 0 && i == n / 2)
            arr[a[i]].pb(a[n - 1 - i]);
        else
        {
            arr[a[i]].pb(a[n - 1 - i]);
            arr[a[n - 1 - i]].pb(a[i]);
        }
    }
    sort(a, a + n);
    vector<ll> v;

    loop(i, 1, a[n - 1] + 1)
    {
        if (!vis[i])
        {
            siz = 0;
            // cout<<size<<" ";
            dfs(i);
            v.pb(siz);
            // cout<<size<<endl;
        }
    }
    ll ans = 0;
    int t = v.size();
    for (int i = 0; i < t; i++)
    {
        // cout<<v[i]<<" ";
        ans += (v[i] - 1);
    }
    cout << ans << endl;
    return 0;
}
