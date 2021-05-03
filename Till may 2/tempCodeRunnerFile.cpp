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
ll n, f;
vector<ll> arr;

bool good(double x)
{
    ll count = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        count += (ll)((M_PI * arr[i] * arr[i]) / x);
    }
    return ((count - 1) >= f);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> n >> f;
        arr.resize(n);
        ll i;
        rep(i, n) cin >> arr[i];
        double low = 0, mid, high = 1e6;
        ll epsilon = (1e-4);
        // while (high - low > epsilon)
        for (i = 0; i < 1040; i++)
        {
            mid = (low + (high - low) / 2.0);
            if (good(mid))
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        if (good(high))
        {
            cout << setprecision(4) << fixed << high << endl;
        }
        else
        {
            cout << setprecision(4) << fixed << low << endl;
        }
    }
}