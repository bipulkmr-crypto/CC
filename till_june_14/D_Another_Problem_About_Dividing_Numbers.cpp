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
void still_single()
{
    int a, b;
    cin >> a >> b;
    int k;
    cin >> k;
    if(a==b&&k>=1)
    {
        cout<<"NO\n";
        return;
    }
    int g = __gcd(a, b);
    int div1 = a / g;
    int div2 = b / g;
    int cnt = 0;
    int x = div1;

    for (int i = 2; i * i <= sqrt(div1) + 5; i++)
    {
        int p1 = 0;
        while (x % i == 0)
        {
            p1++;
            x /= i;
        }
        cnt += p1;
    }
    // if(sqrt(div1)*sqrt(div1)!=div1)
    // cnt++;
    x = div2;
    for (int i = 2; i * i <= sqrt(div2) + 5; i++)
    {
        int p1 = 0;
        while (x % i == 0)
        {
            p1++;
            x /= i;
        }
        cnt += p1;
    }
    x = g;

    for (int i = 2; i * i <= sqrt(g) + 5; i++)
    {
        int p1 = 0;
        while (x % i == 0)
        {
            p1++;
            x /= i;
        }
        cnt += p1;
    }
    if (cnt >= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}