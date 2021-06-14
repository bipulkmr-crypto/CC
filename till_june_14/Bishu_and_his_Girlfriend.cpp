// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
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
// int n;
// int main()
// {
//     // ll n;
//     cin >> n;
//     int i;
//     arr.resize(n + 1);
//     for (i = 0; i < n - 1; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         arr[a].pb(b);
//         arr[b].pb(a);
//     }
//     int ans[n+1];
//     rep(i,n-1)
//     {
//         int length[n+1];
//         int j;
//         for(j=1;j<=n;j++)
//         {
//             if(i!=j)
//             {
//                 length[j]=dfs(j,0);
//             }
//         }
//         int val;
//         int mini=length[0];
//         for(i=0;i<n;i++)
//         {

//         }
//     }
// }
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
int n;
vector<bool> visited;
vector<vector<int>> arr;
vector<int> level;
void dfs(int x, int pos)
{
    visited[x] = true;
    level[x] = pos;
    for (int i = 0; i < arr[x].size(); i++)
    {
        if (!visited[arr[x][i]])
        {
            dfs(arr[x][i], pos + 1);
        }
    }
}
// bool comp(tuple<int,int,int> t1,tuple)
int main()
{
    int n;
    cin >> n;
    int i, j;
    arr.resize(n + 1);
    visited.resize(n + 1);
    level.resize(n + 1);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    int id[n + 1];
    level[1] = 0;
    // rep(i, n - 1)
    // {
    //     int yrm;
    //     cin >> yrm;
    //     id[yrm] = 1;
    // }
    dfs(1, 0);
    // for (i = 1; i <= n; i++)
    // {
    //     if (!visited[i])
    //     {
    //         dfs(i, 0);
    //     }
    // }
    // vector<tuple<int, int, int>> ans;
    // for (i = 1; i <= n; i++)
    // {
    //     ans.pb({level[i], id[i],i});
    // }
    // sort(all(ans),comp);
    // cout <<
    // int ans = 0;
    int mini = INT_MAX, ans = 1;
    int q;
    cin>>q;
    while(q--)
    {
        int tits;
        cin>>tits;
        if(level[tits]<mini)
        {
            mini=level[tits];
            ans=tits;
        }
        else
        {
            if(level[tits]==mini&&tits<ans)
            {
                ans=tits;
            }
        }
    }
    cout << ans << endl;
}