#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
bool comp(ll a, ll b)
{
    if (abs(a) == abs(b))
    {
        return (a < b);
    }
    return (abs(a) < abs(b));
}
void still_single()
{
    int i;
    int n;
    cin >> n;
    vll arr;
    vll pos;
    vll neg;
    mll m;
    rep(i, n)
    {
        int x;
        cin >> x;
        m[x]++;
        arr.pb(x);
        if (x > 0)
            pos.pb(x);
        else
            neg.pb(x);
    }
    sort(all(pos));
    sort(all(neg));
    sort(all(arr), comp);
    int cnt = 0;
    if (n - m[0] < 5)
    {
        cout << 0 << endl;
        ret;
    }
    ll ans = 1;
    if (pos.size() == 0)
    {
        rep(i, 5)
        {
            ans *= neg[i];
        }
        cout << ans << endl;
        ret;
    }
    reverse(all(arr));
    rep(i, 5)
    {
        ans *= arr[i];
    }

    if (ans < 0)
    {
        ans = 1;
        rep(i, 5)
        {
            if (arr[i] < 0)
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            i = 0;
            int x = 0;
            while (i < n && x < 5)
            {
                if (arr[i] > 0)
                {
                    ans *= arr[i];
                    x++;
                }
                i++;
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }
    // if (neg.size() < 2)
    // {
    //     for (auto x : pos)
    //         ans *= x;
    //     if (pos.size() >= 5)
    //     {
    //         cout << ans << endl;
    //     }
    //     else
    //     {
    //         int diff = 5 - pos.size();
    //         for (i = 0; i < diff; i++)
    //         {
    //             ans *= neg[i];
    //         }
    //         cout << ans << endl;
    //     }
    //     return;
    // }
    // for (i = n - 1; i >= n - 5; i--)
    // {

    //     if (arr[i] < 0)
    //     {
    //         cnt++;
    //     }
    //     else
    //     {
    //         ans *= arr[i];
    //         if (m[-1 * arr[i]] != 0 && m[-1 * arr[i]] % 2 == 0)
    //         {
    //             cnt += 2;
    //         }
    //         pos.erase(find(all(pos), arr[i]));
    //     }
    //     if (cnt >= 4)
    //     {
    //         if (pos.size() > 1)
    //         {
    //             ans *= *pos.rbegin();
    //         }
    //         break;
    //     }
    // }
    cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}