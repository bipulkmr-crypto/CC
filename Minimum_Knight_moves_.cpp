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
    ll t;
    cin >> t;

    vector<pair<ll, ll>> dir = {{2, -1}, {2, 1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, 2}, {-1, -2}};
    while (t--)
    {
        ll arr[8][8];
        memset(arr, -1, sizeof(arr));
        char c1, c2;
        ll a, b;
        cin >> c1 >> a >> c2 >> b;
        ll x = c1 - 'a';
        ll y = c2 - 'a';
        auto isvalid = [&](ll x, ll y) {
        return (0 <= x && x < 8 && 0 <= y && y < 8);
    };
        a--;b--;
        queue<pair<ll,ll> > q;
        vector<ll> d(9),p(8+1);
        q.push(make_pair(x,a));
        while(!q.empty())
        {
            auto v=q.front();
            q.pop();
            ll i;
            ll curr=0;
            ll max=0;
            rep(i,8)
            {
                ll newx=v.ff+dir[i].ff;
                ll newy=v.ss+diff[i].ss;
                if(newx==y&&newy==b)
                break;
                if(isvalid(newx,newy)&&arr[newx][newy]==-1)
                {
                    arr[newx][newy]=0;
                    // curr++;
                    d[]=d[v]+1;
                    p[u]=v;
                    q.push({newx,newy});

                }
            }
        }
        
    }
}
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)