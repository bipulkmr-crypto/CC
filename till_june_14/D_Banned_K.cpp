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
    int n;
    cin >> n;
    vll arr(n);
    int i;
    mll m;
    ll sum=0;
    rep(i, n)
    {
        cin >> arr[i];
        sum+=m[arr[i]]++;
    }
    mll pairs;
    auto it = m.begin();
    rep(i,n)
    {
        cout<<sum-m[arr[i]]+1<<endl;
    }
    // for(;it!=m.end();it++)
    // {
    //     ll val=it->second;
    //     // val-=1;
    //     pairs[it->first]=(val*(val-1))*2;
    //     auto p=it;
    //     if(it!=m.begin())
    //     {
    //         p--;
    //         pairs[it->first]+=
    //     }
    // }
    // rep(i, n)
    // {
    //     ll val = m[arr[i]];
    //     ll ans = (val * (val - 1)) / 2;
    //     if(ans!=0)
    //     ans -= 1;
    // //     cout << ans << endl;
    // // }
    // it++;
    // for (; it != m.end(); it++)
    // {
    //     auto p = it;
    //     p--;
    //     pairs[it->first] += (p->second * (p->second - 1)) / 2;
    // }
    // it = m.begin();
    // for (; it != m.end(); it++)
    // {
    //     ll val = it->second - 1;
    //     pairs[it->first] += (val * (val - 1)) ;
    // }
    // for (i = 0; i < n; i++)
    // {
    //     cout << pairs[arr[i]] << endl;
    // }
}