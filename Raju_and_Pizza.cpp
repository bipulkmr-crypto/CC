// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
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
// typedef long long int uli;

// const uli mod = 1e9 + 7;
// const int mx = 1e5 + 10;
// uli fa[mx], fi[mx], d[mx];
// int n, n1;
// uli ivs;
// uli fxp(uli b, uli x, uli m)
// {
//     uli a = 1;
//     for (; x != 0; b = b * b % m, x >>= 1)
//         if (x & 1ll)
//             a = a * b % m;
//     return a;
// }
// inline uli solve(int u)
// {
//     uli cmb = fa[n - u] * fi[n1 - u] % mod * ivs % mod;
//     if (u == n1)
//     {
//         if (n == u)
//             return 0;
//         return cmb;
//     }
//     return (cmb - solve(u + 1) + mod) % mod;
// }
// int main()
// {
//     fa[0] = fi[0] = 1;
//     for (int i = 1; i < mx; i++)
//     {
//         fa[i] = fa[i - 1] * uli(i) % mod;
//         fi[i] = fxp(fa[i], mod - 2, mod);
//     }
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         scanf("%d", &n);
//         string s;
//         cin >> s;
//         n1 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%lld", d + i);
//             if (d[i] == 1)
//                 n1++;
//         }
//         sort(d, d + n);
//         ivs = 1;
//         for (int i = 0; i < n;)
//         {
//             uli v = d[i];
//             int qv = 0;
//             while (i < n && d[i] == v)
//                 i++, qv++;
//             if (v != 1)
//                 ivs = ivs * fi[qv] % mod;
//         }
//         uli ans = solve(0);
//         if (ans == 1)
//         cout<<"Shyam\n";
//         else
//         cout<<
//     }
//     return 0;
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll arr[n];
        ll i;
        rep(i,n)
        {
            cin>>arr[i];
        }
        if(n==1&&arr[0]%2==0)
        {
            if(s=="Raju")
            cout<<"Raju\n";
            else 
            cout<<"Shyam\n";
        }
        else 
        cout<<"Shyam\n";
    }
}