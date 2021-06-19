// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// vector<vector<int>> arr;
// vector<int> visited;
// int n, m;
// bool flag = true;
// void dfs(int node, int colour)
// {
//     visited[node] = colour;
//     for (auto v : arr[node])
//     {
//         if (visited[v] == 0)
//         {
//             if (colour == 1)
//                 dfs(v, 2);
//             else
//                 dfs(v, 1);
//         }
//         else
//         {
//             if (visited[v] == visited[node])
//             {
//                 // cout << "IMPOSSIBLE";
//                 flag = false;
//                 ret;
//             }
//         }
//     }
// }
// void still_single()
// {
//     cin >> n >> m;
//     arr.resize(n + 1);
//     visited.resize(n + 1, 0);
//     int i;
//     rep(i, m)
//     {
//         int a, b;
//         cin >> a >> b;
//         arr[a].pb(b);
//         arr[b].pb(a);
//     }
//     dfs(1, 1);
//     fu(i, 2, n)
//     {
//         if (visited[i] == 0)
//         {
//             dfs(i, 1);
//         }
//     }
//     if (flag)
//     {
//         fu(i, 1, n)
//         {
//             cout << visited[i] << ' ';
//         }
//     }
//     else
//     {
//         cout<<"IMPOSSIBLE"<<endl;
//     }
    
// }
// /*Don't just sit and hope that God will solve this
// fucking do some	thing, try to observe or solve it a different way.
// Use that pen and paper.
// If nothing works take a deep breath and start again*/
// int main()
// {
//     fast int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         still_single();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define rfo1(i,n) for(int i=n;i>o;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define mivi map<int,vector<int>>
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)

vi adj[100001];
int col[100001];
bool vis[100001];
bool flag=true;
void dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(auto child:adj[node])
    {
        if(!vis[child]) (dfs(child,c^1)) ;
        else 
        {
            if(col[child]==col[node]) 
            flag=false;
        }
    }
    // return true;
}


signed main()
{
    fast
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool f=1;
    fo1(i,n)
    {
        if(!vis[i]) dfs(i,1);
    }
    if(flag)
    {
        fo1(i,n)
        {
            if(col[i]==1) cout<<1<<" ";
            else cout<<2<<" ";
        }
    }
    else cout<<"IMPOSSIBLE\n";

    


    return 0;
}