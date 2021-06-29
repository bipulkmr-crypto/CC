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
const int N = (1e5) + 5;
int pre[N];
int pro;
void preCompute(int a, int b)
{
    pro = a * b;
    int i;
    pre[0] = 0;
    fu(i, 1, N - 1)
    {
        pre[i] = pre[i - 1];
        if ((i % a) % b != (i % b) % a)
        {
            pre[i] += 1;
        }
    }
}
ll solve(ll x)
{
    ll p = x / pro;
    ll rem = x % pro;
    ll ans = pre[pro] * p + pre[rem];
    return ans;
}
void still_single()
{
    ll a, b, q;
    cin >> a >> b >> q;
    preCompute(a, b);
    ll g = (a * b) / (__gcd(a, b));
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        // if(r<min(a,b))
        // {
        //     cout<<0<<endl;
        //     return ;
        // }
        ll x = solve(l - 1);
        ll y = solve(r);
        cout << (y - x) << " ";
    }
    cout << endl;
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