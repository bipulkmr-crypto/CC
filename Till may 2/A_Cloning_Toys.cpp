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
// int main()
// {
//     ll x, y;
//     cin >> y >> x;
//     if(y<(x-1)||(x==0&&y>0))
//     {
//         cout<<"No\n";
//         return 0;
//     }
//     ll val = (y - (x - 1)) % 2;
//     if (val)
//     {
//         cout << "No\n";
//     }
//     else
//     {
//         cout << "Yes\n";
//     }
// }
// // void dfs(ll x)
// // {
// //     if(v[x].size()==0)
// //     {
// //         return ;
// //     }
// //     for(i=0;i<v[i].size();i++)
// //     {
// //         if(!visited[(v[x])][i])
// //         dps(v[x][i]);
// //     }
// // }
// // int count=0;
// // void dfs(int x)
// // {
// //     visited[x]=true;
// //     count++;
// //     for(i=0;i<v[i].size();i++)
// //     {

// //     }
// // }
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
    ll x, y;
    cin >> x >> y;
    if (y == 0)
    {
        cout << "No\n";
        return 0;
    }
    if (y == 1)
    {
        if (x == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
        return 0;
    }
    if (x >= (y - 1) && (x - y + 1) % 2 == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    
}