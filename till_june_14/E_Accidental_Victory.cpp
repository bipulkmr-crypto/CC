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
vector<pll> arr;
ll n;
vector<ll> pre;
bool good(ll pos)
{
    ll i;
    ll power=arr[pos].ff;
    rep(i,n)
    {
        if(pos==i)continue;
        if(arr[i].ff<=power)
        {
            power+=arr[i].ff;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.resize(n);
        ll i;
        rep(i, n)
        {
            ll x;
            cin >> x;
            arr[i] = {x, i + 1};
        }
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" ";
            continue;
        }
        pre.resize(n);
        pre[0] = arr[0].ff;
        fu(i, 1, n - 1)
        {
            pre[i] = pre[i - 1] + arr[i].ff;
        }
        sort(all(arr));
        ll low = 0, high = n - 1, mid;
        while (high - low > 1)
        {
            mid = low + (high - low) / 2;
            if (good(mid))
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        if (good(low))
        {
            vector<int> ind;
            fu(i, low, n - 1) ind.pb(arr[i].ss);
            sort(all(ind));
            cout<<ind.size()<<endl;
            for (auto x : ind)
                cout << x << ' ';
            cout << endl;
        }
        else
        {
            vector<int>ind;
            fu(i, high, n - 1) ind.pb(arr[i].ss);
            sort(all(ind));
            cout<<ind.size()<<endl;
            for (auto x : ind)
                cout << x << ' ';
            cout << endl;
        }
    }
}