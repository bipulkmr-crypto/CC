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
bool check(string s, int end)
{
    int i;
    rep(i, end)
    {
        if (s[i] != s[0])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    int step = 0;
    if (check(s, n))
    {
        cout << 0 << endl;
        exit(0);
    }
    vector<int> pos;
    // for (i = 1; i < n - 1; i += 1)
    // {
    //     if (s[i - 1] != s[i])
    //     {
    //         s[i] = s[i - 1];
    //         if (s[i + 1] == 'B')
    //             s[i + 1] = 'W';
    //         else
    //             s[i + 1] = 'B';
    //         if (check(s, i + 1))
    //         {
    //             pos.pb(i + 1);
    //         }
    //     }
    // }
    if (s[0] != 'W')
    {
        pos.pb(1);
        s[0] = 'W';
        if (s[1] == 'B')
            s[1] = 'W';
        else
        {
            s[1] = 'B';
        }
    }
    for (i = 1; i < n - 1; i++)
    {
        if (s[i] != 'W')
        {
            pos.pb(i + 1);
            s[i] = 'W';
            if (s[i + 1] == 'B')
                s[i + 1] = 'W';
            else
            {
                s[i + 1] = 'B';
            }
        }
    }
    if (s[n - 1] == 'B')
    {
        if (s[0] != 'B')
        {
            pos.pb(1);
            s[0] = 'B';
            if (s[1] == 'W')
                s[1] = 'B';
            else
            {
                s[1] = 'W';
            }
        }
        for (i = 1; i < n - 1; i++)
        {
            if (s[i] != 'B')
            {
                pos.pb(i + 1);
                s[i] = 'B';
                if (s[i + 1] == 'W')
                    s[i + 1] = 'B';
                else
                {
                    s[i + 1] = 'W';
                }
            }
        }
    }
    else
    {
        cout << pos.size() << endl;
        for (auto x : pos)cout << x << " "; exit(0);
    }
    if (check(s, n))
    {
        // cout << s << endl;
        cout << pos.size() << endl;
        for (auto x : pos)
        {
            cout << x << ' ';
        }
    }
    else
    {
        cout << -1 << endl;
    }

}