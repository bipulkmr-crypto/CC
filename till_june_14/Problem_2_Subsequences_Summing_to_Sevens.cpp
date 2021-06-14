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
    ofstream fout("div7.out");
    ifstream fin("div7.in");
    int n;
    fin >> n;
    ll arr[n];
    ll i;
    rep(i, n) fin >> arr[i];
    ll pre[n];
    // ll i;
    pre[0] = arr[0];
    fu(i, 1, n - 1)
    {
        pre[i] = (pre[i - 1] + arr[i]);
    }
    ll l = 1;
    ll r = n - 1;
    ll ans = 0;
    ll mx = 0;
    for (r = n - 1; r >= 0; r--)
    {
        l = 0;
        while ((pre[r] - pre[l - 1] % 7) != 0)
        {
            l++;
        }
        mx = max(mx, r - l + 1);
    }
    fout<<mx;
    fout.flush();
}