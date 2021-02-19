#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
bool binary_search(vector<ll>::iterator start)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n, 0);
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        vector<pair<ll,ll> > sum(n,0);
        sum[0].ff = arr[0];
        sum[0].ss=0;
        fu(i, 1, n - 1)
        {
            sum[i].first = sum[i - 1].ff + arr[i];
            sum[i].ss=i;
        }
        while (m--)
        {
            ll x;
            cin >> x;
            if (x < sum[n - 1].ff)
            {
                if (binary_search(sum.begin(), sum.end(), x))
                {
                    cout << (find(sum.begin(), sum.end(), x) - sum.begin()) << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
            else
            {
                ll ans = (x / sum[n - 1]) * n;
                ll temp = (x % sum[n - 1]);
                if (binary_search(sum.begin(), sum.end(), temp))
                {

                    ans += (find(sum.begin(), sum.end(), temp) - sum.begin());
                    cout << ans << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
        }
        cout << endl;
    }
}