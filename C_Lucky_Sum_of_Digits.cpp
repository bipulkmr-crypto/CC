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
long long int x, y, d;
void extendedEuclid(long long int a, long long int b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedEuclid(b, a % b);
    long long int x1, y1;
    x1 = y;
    y1 = x - a / b * y;
    x = x1;
    y = y1;
}

void still_single()
{
    cin >> d;
    if (d % 4 == 0)
    {
        x = d / 4;
        y = 0;
        int k = 0;
        fu(k, 1, x)
                cout
            << 4;
        fu(k, 1, y)
                cout
            << 7;
        cout << endl;
        return;
    }
    else if (d % 7 == 0)
    {
        x = 0;
        y = d / 7;
        int k = 0;
        fu(k, 1, x)
                cout
            << 4;
        fu(k, 1, y)
                cout
            << 7;
        cout << endl;
        return;
    }
    else
    {
        int i, j;
        fu(i, 1, 1000)
        {
            fu(j, 1, 1000)
            {
                ll sum = 4 * i + 7 * j;
                if (sum == d)
                {
                    x = i;
                    y = j;
                    int k = 0;
                    fu(k, 1, x)
                            cout
                        << 4;
                    fu(k, 1, y)
                            cout
                        << 7;
                    cout << endl;
                    return;
                }
            }
        }
    }
    // ll x,y;
    // extendedEuclid(4,7);
    // rep(i,n)
    // {

    // }
    // if(x>=0&&y>=0)
    // {
    //     ll i;
    //     rep(i,x)
    //     cout<<4;
    //     rep(i,y)
    //     cout<<7;
    // }
    // else
    cout << -1 << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}