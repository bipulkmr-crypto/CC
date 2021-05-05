// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// int c;
// int solve(int a, int b)
// {
//     if (a == b)
//         return 0;
//     else if(a<0)
//     return 0;
//     else
//     {
//         int ans = 0;
//         if(a>b)
//         {
//             ans=1+min(solve(a-2,b),solve(a-1,b));
//         }
//         else
//         {
//             ans=1+solve(a*c,b);
//         }
//         return ans;
//     }

// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b >> c;
//         int ans = solve(a, b);
//         cout<<ans<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define endl "\n"
#define pb push_back
ll check(ll &a, ll &b, ll &c);

int main()
{
    Fast
        ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = check(a, b, c);
        cout << ans << endl;
    }
}
ll check(ll &a, ll &b, ll &c)
{

    ll cnt = 0;
    if (a == b)
    {
        return cnt;
    }
    if (a < b)
    {
        a = a * c;
        cnt++;
        check(a, b, c);
    }
    if ((a % 2 == 0) && (b % 2 == 0))
    {
        if (a > b)
        {
            a = a - 2;
            cnt++;
            check(a, b, c);
        }
    }
    if ((a % 2 == 0) && (b % 2 != 0))
    {
        if (a > b)
        {
            a = a - 1;
            cnt++;
            check(a, b, c);
        }
    }
    if ((a % 2 != 0) && (b % 2 == 0))
    {
        if (a > b)
        {
            a = a - 1;
            cnt++;
            check(a, b, c);
        }
    }
    if ((a % 2 != 0) && (b % 2 != 0))
    {
        if (a > b)
        {
            a = a - 2;
            cnt++;
            check(a, b, c);
        }
    }
    return 0;
}