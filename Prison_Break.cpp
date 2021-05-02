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
// ll n;
// vector<vector<bool>> visited;
// vector<vector<ll>> arr;
// ll ans = 0;
// bool dfs(ll i, ll j)
// {

//     if (i == n - 1 && j == n - 1)
//     {
//         ans++;
//         return true;
//     }
//     else if (i < 0 || j < 0 || i >= n || j >= n || visited[i][j])
//         return false;
//     else if (arr[i][j])
//         return false;
//     else
//     {
//         visited[i][j] = true;
//         if (dfs(i + 1, j))
//             ans += 1;
//         if (dfs(i, j - 1))
//             ans += 1;
//         if (dfs(i, j + 1))
//             ans += 1;
//         if (dfs(i - 1, j))
//             ans += 1;
//         return false;
//     }
//     return false;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         arr.resize(n, vector<ll>(n));
//         visited.resize(n, vector<bool>(n));
//         ll i, j;
//         rep(i, n)
//                 rep(j, n) cin >>
//             arr[i][j];
//         dfs(0, 0);
//         cout << ans << endl;
//     }
// }
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
ll n;
vector<vector<bool>> visited;
vector<vector<ll>> arr;
ll ans = 0;
void dfs(ll i, ll j)
{

    if (i == n - 1 && j == n - 1)
    {
        ans++;
        return;
    }
    else if (i < 0 || j < 0 || i >= n || j >= n )
        return ;
	else if(visited[i][j])
	return ;
    else if (arr[i][j])
        return ;
    else
    {
        visited[i][j] = true;
        (dfs(i + 1, j));
        (dfs(i, j - 1));
         (dfs(i, j + 1));
        (dfs(i - 1, j));
        visited[i][j]=false;
    }
	visited[i][j]=false;

}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.resize(n, vector<ll>(n));
        visited.resize(n, vector<bool>(n));
        ll i, j;
        rep(i, n)
                rep(j, n) cin >>
            arr[i][j];
		ans=0;
        dfs(0, 0);
        cout << ans << endl;
    }
}