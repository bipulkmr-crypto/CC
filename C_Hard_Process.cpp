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
ll n, k;
vll arr;
void good()
{
    ll cnt = 0;
    ll r = 0, l = 0;
    l = 0;
    // vll pos;
    ll ans = 0;
    // while (l < n)
    // {
    //     r = l;
    //     while (r < n && (temp[r] == 1 || (temp[r] == 0 && p > 0)))
    //     {

    //         // temp[r] = 1;
    //         pos.pb(r);
    //         if (temp[r] == 0)
    //             p--;
    //         cnt++;
    //         r++;
    //     }
    //     ans = max(ans, abs(r - l) + 1);
    //     l++;
    //
    ll pos1 = 0, pos2 = 0;
    rep(l, n)
    {
        if (l > r)
        {
            r = l;
            cnt = 0;
        }
        while (r < n)
        {
            ll newcnt = cnt + (1 - arr[r]);
            if (newcnt > k)
                break;
            cnt += (1 - arr[r]);
            r++;
        }
        if (abs(r - l) > (pos2 - pos1))
        {
            pos2 = r;
            pos1 = l;
        }
        if (cnt > 0)
            cnt -= (1 - arr[l]);
    }
    ll i;
    cout << pos2 - pos1 << endl;
    fu(l, pos1, pos2-1)
    {
        arr[l] = 1;
    }
    rep(i, n) cout << arr[i] << " ";
}
int main()
{
    cin >> n >> k;
    arr.resize(n);
    ll i;
    rep(i, n) cin >> arr[i];
    // ll low = 0, mid, high = n;
    // while (high - low > 1)
    // {
    //     mid = low + (high - low) / 2;
    //     if (good(mid))
    //     {
    //         low = mid;
    //     }
    //     else
    //         high = mid;
    // }
    good();
}