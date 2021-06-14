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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, t;
        cin >> n >> t;
        int ans = 0;
        int cnt = 0;
        ll i;
        for (i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (t % 2 == 0 && x * 2 == t)
            {
                cnt++;
                cnt %= 2;
                cout << cnt << " ";
                continue;
            }
            else if (x * 2 < t)
                ans = 0;
            else
                ans = 1;
            cout << ans << " ";
        }
        cout << endl;
    }
    // vector<pll> arr(n);
    // ll i;
    // map<ll, vector<ll>> m;

    // rep(i, n)
    // {
    //     ll x;
    //     cin >> x;
    //     arr[i] = make_pair(x, i);
    //     m[arr[i]].pb(i);
    // }
    // vector<int>marked(n,0);
    // auto it=m.begin();
    // for(;it!=m.end();it++)
    // {
    //     if(m[t-it->first].size()!=0)
    //     {
    //         for(int j=0;j<min(m[t-it->first].size(),m[it->first].size());j++)
    //         {
    //             marked[m[t-it->first][j]]=1;
    //         }
    //     }
    // }
    // rep(i,n)cout<<marked[i]<<" ";
    // cout<<endl;

    // // sort(all(arr));
    // // int ans = 0;
    // // vector<int> mark(n, 0);
    // // auto it = arr.begin();
    // // for (; it != arr.end(); it++)
    // // {
    // //     auto p = *it;
    // //     if (binary_search(it, arr.end(); t - p.ff))
    // //     {
    // //         auto q = lower_bound(it, arr.end(), t - p.ff);
    //         if (mark[q.ff] == mark[p.ff])
    //         {
    //             mark[q.ff] = 1 - mark[p.ff];
    //         }
    //     }
    // }
}