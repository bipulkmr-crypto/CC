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
    ofstream fout("bcount.out");
    ifstream fin("bcount.in");
    int n, q;
    fin >> n >> q;
    // ll arr[3][n];
    // int i;
    // memset(arr, 0, sizeof(arr));
    // rep(i, n)
    // {
    //     int x;
    //     fin >> x;
    //     arr[x - 1][i]++;
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         arr[i][j] += (arr[i][j - 1]);
    //     }

    // 	freopen("tc.cpp", "r", stdin);
    // freopen("tc2.cpp", "w", stdout);
    vll a(n + 1);
    vll b(n + 1);
    vll c(n + 1);
    ll i;

    fu(i, 1, n)
    {
        int x = 0;
        fin >> x;
        a[i] = a[i - 1] + (x == 1);
        b[i] = b[i - 1] + (x == 2);
        c[i] = c[i - 1] + (x == 3);
    }
    while (q--)
    {
        int l, r;
        fin >> l >> r;
        l--;
        fout << a[r] - a[l] << " " << (b[r] - b[l]) << " " << (c[r] - c[l]) << endl;
        }
    fout.flush();
}