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
vector<tuple<ll, ll, ll>> arr;
ll n;
bool good(ll x)
{
    ll i;
    // ll stock = get<1>(arr[0])*x;
    bool flag = true;
    ll stock = 0;
    ll j = 0;
    ll dist = 0;
    for (i = 0; i < n; i++)
    {
        // stock += i * x;
        // while (get<0>(arr[j]) >= i && get<1>(arr[j]) <= i)
        // {
        //     if (get<0>(arr[j]) >= i && get<1>(arr[j]) == i)
        //     {

        //         stock -= get<2>(arr[j]);
        //         j++;
        //     }
        // }
        // if(i>0)
        // stock+=(get<1>(arr[i])-get<1>(arr[i-1]))*x;
        stock = x * get<1>(arr[i]);
        if ((stock - dist) >= get<2>(arr[i]))
        {
            dist += get<2>(arr[i]);
        }
        else
            return false;
    }
    return true;
}
bool comp(tuple<ll, ll, ll> t1, tuple<ll, ll, ll> t2)
{
    if (get<1>(t1) == get<1>(t2))
    {
        return (get<2>(t1) < get<2>(t2));
    }
    else
    {
        return (get<1>(t1) < get<1>(t2));
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        arr.resize(n);
        ll i;
        rep(i, n)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            get<0>(arr[i]) = l;
            get<1>(arr[i]) = r;
            get<2>(arr[i]) = x;
        }
        sort(arr.begin(), arr.end(), comp);
        ll low = 1, high = 1e18, mid;
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
            cout << low << endl;
        else
        {
            cout << high << endl;
        }
    }
}