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
int main()
{
    ll n, m, q;
    cin >> n >> m >> q;
    ll x[n];
    ll y[m];
    ll i;
    rep(i, n) cin >> x[i];
    rep(i, m) cin >> y[i];
    sort(x, x + n);
    sort(y, y + m);
    ll t;
    cin >> t;
    while (t--)
    {
        ll z, l1, l2, r2, r1;
        char ch;
        cin >> z >> ch;
        ll ans = 0;
        ll* pt1,* pt2;
        ll c=0;
        ll c1=0;
        switch (ch)
        {
        case 'A':
            cin >> l1 >> r1;
            pt1 = lower_bound(x, x + n, l1);
            pt2 = upper_bound(x, x + n, r1);
             
            while (pt1 != pt2)
            {
                if (binary_search(y, y + m, (z - *pt1)))
                    c++;
                pt1++;
            }
            ans = c1 * c;
            break;
        case 'B':
            cin >> l1 >> r1;
            pt1 = lower_bound(y, y + m, l1);
            pt2 = upper_bound(y, y + m, r1);
           c1=(ll)(pt2-pt1);
            while (pt1 != pt2)
            {
                if (binary_search(x, x + n, (z - *pt1)))
                    c++;
                pt1++;
            }
            ans = c1 * c;
            break;
        // case 'C':
        //     cin>>l1>>r1>>l2>>r2;


        default:
            break;
        }
        cout<<ans;
    }
}