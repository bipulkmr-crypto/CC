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
string s;
ll logar(ll n)
{
    double x=0;
    while(n>0)
    {
        ans
    }
}
void solve1()
{
    ll n = s.length();
    ll i;
    ll row = 0, col = 0;
    string r, c;
    r = "", c = "";
    ll pos = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'O')
        {
            pos = i;
            break;
        }
    }
    for (i = 1; i < pos; i++)
    {
        r += s[i];
    }
    for (i = pos + 1; i < n; i++)
    {
        c += s[i];
    }
    col = stol(c, nullptr, 10);
    c = "";
    long long int k, p;
    int dig;
    // cin >> k >> p;
    char A[k];
    // if (p > pow(26, ))
    // {
    //     cout << (-1);
    //     return 0;
    p=col;
    // }
    k = logar(p);
    for (int j = k - 1; j >= 0; j--)
    {
        dig = p % 26;
        if (j == k - 1)
            A[j] = 96 + dig;
        else
            A[j] = 97 + dig;
        p = p / 26;
    }
    for (int j = 0; j < k; j++)
    {
        // cout << A[j];
        c += A[j];
    }

    string ans = "";
    ans = c + r;
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> s;
        if (isalpha(s[0]) && isdigit(s[1]))
        {
            solve1();
        }
        else
        {
            solve1();
        }
    }
}