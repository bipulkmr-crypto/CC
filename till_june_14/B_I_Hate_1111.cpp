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
// long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return res * res * a;
//     else
//         return res * res;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     ll val[11] = {0};
//     ll i;
//     fu(i, 0, 10)
//     {
//         ll y = binpow(10, i + 2);
//         y -= 1;
//         y /= 9;
//         val[i] = y;
//     }
//     while (t--)
//     {
//         // string s;
//         // cin>>s;
//         // reverse(all(s));

//         ll n;
//         cin >> n;
//         if(n<11||(n%10==0))
//         {
//             cout<<"NO"<<endl;
//             continue;
//         }
//         bool flag = true;
//         ll p = log10(n) + 1;
//         for (i = p; i >= 0; i--)
//         {
//             n -= ((n / val[i]) * val[i]);
//         }
//         if (n  == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 111
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
int32_t mod_inv(int32_t a, int32_t m)
{
    int32_t g = m, r = a, x = 0, y = 1;
    while (r != 0)
    {
        int32_t q = g / r;
        g %= r;
        swap(g, r);
        x -= q * y;
        swap(x, y);
    }
    return x < 0 ? x + m : x;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int p=x%111;
        int a=p*mod_inv(11,111)%111;
        int left=x-a*11;
        if(left>=0&&left%111==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}