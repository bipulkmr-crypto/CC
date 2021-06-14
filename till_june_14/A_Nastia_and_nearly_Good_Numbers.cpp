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
void solve(ll a, ll b)
{
    ll i, j;
    // ll x = 0;
    ll x, y, z;
    bool flag = true;
    for (i = 1; i <= (1e3); i++)
    {
        for (j = 1; j <= (1e2); j++)
        {
            if ((i != j) && (i + j) % b == 0)
            {
                x = a * i;
                y = j * a;
                z = x + y;
                cout << "YES\n";
                cout << x << " " << y << " " << z << " " << endl;
                return;
            }
            // else if ((i + j) > )
            // {
            //     cout << "NO\n";
            //     return;
            // }
        }
    }
    // cout<<"NO\n"<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            ll x = a;
            ll y;
            if(b>2)
             y = a * (b - 1);
            else
            {
                y=a*3;
            }
            cout<<"YES\n";
            cout << x << " " << y << " " << (x + y) << endl;
        }
    }
}