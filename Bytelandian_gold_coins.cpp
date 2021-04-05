#include <iostream>
#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
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
mll m;
ll solve(ll n)
{
    // cout << n << endl;
    if (n <4)
    {   
        return n;
    }
    if(m[n]!=0)
    return m[n];
    ll ans;
    ll a, b, c;
    a=solve(n/2);
    b=solve(n/3);
    c=solve(n/4);

    // if (m[a] == 0 && a != 0)
    // {
    //     m[a] = solve(a);
    // }
    // if (m[b] == 0 && b != 0)
    // {
    //     m[b] = solve(b);
    // }
    // if (m[c] == 0 && c != 0)
    // {
    //     m[c] = solve(c);
    // }

    ans = max(n, a+b+c);
    m[n]=ans;
    return ans;
}
int main()
{
    ll n;
    // memset(m, -1, sizeof(m));
    while (cin >> n)
    {

        if (n == 0)
            cout << 0 << endl;
        else
        {
            ll ans = solve(n);
            cout << ans << endl;
        }

        m.clear();
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// map<long long, long long> m;

// ll solve(ll n)
// {
//         if (n < 4) {
//                 return n;
//         }

//         ll pre = m[n];
//         if (pre != 0)
//                 return pre;

//         ll ans;
//         ll a, b, c;

//         a = solve(n / 2);
//         b = solve(n / 3);
//         c = solve(n / 4);

//         ans = max(n, a + b + c);
//         m[n] = ans;
//         return ans;
// }

// int main()
// {
//         ll n;
//         while (cin >> n) {
//                 ll ans = solve(n);
//                 cout << ans << endl;
//                 m.clear();
//         }
// }