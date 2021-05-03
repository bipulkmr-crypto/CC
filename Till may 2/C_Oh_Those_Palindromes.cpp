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
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    // map<char, ll> m;
    // ll i, j;
    // rep(i, n)
    // {
    //     m[s[i]]++;
    // }
    // vector<pair<ll, char>> arr;
    // string ans = "";
    // auto it = m.begin();
    // for (; it != m.end(); it++)
    // {
    //     char c = it->first;
    //     arr.pb({it->second, c});
    // }
    // sort(arr.rbegin(), arr.rend());
    // ll x = arr.size();
    // if (x % 2 == 1)
    // {
    //     if (x > 3)
    //     {
    //         for (i = 0; i < x - 3; i++)
    //         {
    //             pair<ll, char> p = arr[i + 1];
    //             for (j = 0; j < p.ff; j++)
    //             {
    //                 s += arr[i].ss;
    //                 s += p.ss;
    //             }
    //             for (j = p.ff; j < arr[i].ff; j++)
    //             {
    //                 s += arr[i].ss;
    //             }
    //             i++;
    //         }
    //     }
    //     string temp = "";
    //     pair<ll, char> p1 = arr[x - 3];
    //     pair<ll, char> p2 = arr[x - 2];
    //     pair<ll, char> p3 = arr[x - 1];
    //     for(i=0;i<p1.ff;i++)
    //     {

    //     }
    // }
    sort(all(s));
    cout << s << endl;
}