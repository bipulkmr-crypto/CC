#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
void solve(ll n, ll source, ll taget, ll aux)
{
    if (n > 0)
    {
        ll i;
        rep(i, n - 1)
        {
            cout << source << " " << aux << endl;
        }
        cout << source << " " << taget << endl;
        rep(i, n - 2)
        {
            cout << aux << " " << source << endl;
        }
        if(n>1)
        cout << aux << " " << taget << endl;
        solve(n - 2, 1,3,2 );
    }
}
int main()
{
    ll n;
    cin >> n;cout<<((1<<n)-1)<<endl;
    solve(n, 1, 3, 2);
}