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
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> m;
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        // set<pair<ll, ll>> s;getting problem in implementing using set so using heaps

        // for (auto it : m)
        // {
        //     s.insert({it.second, it.first});
        // }
        // while(s.size()>2)
        // {
        //     auto it=s.begin();
        //     set<pair<ll,ll> >::iterator  it2 = it;
        //     it2++;
        //     // (*it2).ff = (*it2).ff - (*it).ff;
        //     // (*it).ff = 0;
        //     auto p1=*it;
        //     auto p2=*it2;
        //     p2.ff=p2.ff-p1.ff;
        //     p1.ff=0;
        //     s.insert({p2.ff,p2.ss});
        //     // s.insert({p1.ff,p1.ss});
        //     s.erase((*it));
        //     s.erase((*it2));
        //     // m[p1.ss]=0;
        // }
        // ll ans = 0;
        // for (auto it : s)
        // {
        //     ans += it.ff;
        // }
        priority_queue<pair<ll,ll> >q;
        for(auto it:m)
        {
            q.push(make_pair(it.ss,it.ff));
        }
        ll ans=n;
        while(q.size()>=2)
        {
            auto [c1,x1]=q.top();
            q.pop();
            auto [c2,x2]=q.top();
            q.pop();
            c1--;c2--;
            if(c1)
            q.push(make_pair(c1,x1));
            if(c2)
            q.push(make_pair(c2,x2));
            ans-=2;
        }
        cout << ans << endl;
    }
}