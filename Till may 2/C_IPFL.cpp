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
    string s;
    ll q;
    cin >> n >> s >> q;
    string temp = "";
    ll i;
    rep(i, n)
    {
        temp += s[i];
    }
    for (i = 2 * n - 1; i >= n; i--)
    {
        temp = s[i] + temp;
    }
    ll count = 0;
    ll check = 1;
    while (q--)
    {
        ll t, a, b;
        cin >> t;
        cin >> a >> b;
        a--;
        b--;
        if (t == 1)
        {
            if (check == 1)
            {
                char c = s[a];
                s[a] = s[b];
                s[b] = c;
            }
            else
            {
                // if (a > n && b > n)
                // {
                //     char c = s[a - n];
                //     s[a - n] = s[b - n];
                //     s[b - n] = c;
                // }
                // else if (a < n && b < n)
                // {
                //     char c = s[a + n];
                //     s[a + n] = s[b + n];
                //     s[b + n] = c;
                // }
                // else
                // {
                //     char c = s[a + n];
                //     s[a + n] = s[b - n];
                //     s[b - n] = c;
                // }
                if (a < n)
                {
                    a = a + n;
                }
                else
                    a = a - n;
                if (b < n)
                    b += n;
                else
                    b -= n;
                char c = s[a];
                s[a] = s[b];
                s[b] = c;
            }
        }
        else if (t == 2)
        {
            check *= -1;
        }
    }
    if (check == -1)
    {
        string x = "";
        for (i = 2 * n - 1; i >= n; i--)
            x = s[i]+x;
        rep(i, n)
        {
            x += s[i];
        }

        s = x;
    }
    cout << s << endl;
}