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
// vector<vector<ll>> arr(10001);
// vector<bool> visited(10001);
// ll currdep = 0;
// // void dfs(ll x)
// // {
// //     currdep++;
// //     visited[x]=false;
// //     for(ll i=0;i<arr[x].size();i++)
// //     {
// //         if(!visited[arr[x][i]])
// //         {
// //             dfs(arr[x][i]);
// //         }
// //     }
// // }
// void dfs(ll src)
// {
//     // if (src == 1)
//     // {
//     //     flag = true;
//     //     return;
//     // }
//     currdep++;
//     visited[src] = true;
//     for (ll i = 0; i < arr[src].size(); i++)
//     {
//         if (!visited[arr[src][i]])
//             dfs(arr[src][i]);
//     }
// }
// int main()
// {
//     ll n;
//     ll i;
//     cin>>n;
//     resize(arr,10001);
//     resize(visited,10001);
//     rep(i, n - 1)
//     {
//         ll a, b;
//         cin >> a >> b;
//         arr[a].push_back(b);
//         arr[b].push_back(a);
//     }
//     ll ans = 0;
//     for (i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(i);
//             ans = max(currdep, ans);
//             currdep = 0;
//         }
//     }
//     cout << (ans-2) << endl;
// }
//Trying using BFS two times first finding the maximum distance mode and then repeating the process
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
vector<vector<ll> > arr;
vector<bool> visited;
vector<ll> d;
int main()
{
    ll n;
    cin>>n;
    arr.resize(10000+1,0);
    visited.resize(10001,false);
    d.resize(10000+1,0);
    ll i;
    rep(i,n-1)
    {   
        ll a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        
    }
}