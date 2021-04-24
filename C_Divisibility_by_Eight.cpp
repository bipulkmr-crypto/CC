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
    string s;
    cin >> s;
    map<char, ll> m;
    ll i;
    ll n = s.length();
    rep(i, n)
    {
        m[s[i]]++;
    }
    if (m['0'] > 0)
    {
        cout << "YES\n";
        cout << "0" << endl;
    }
    else
    {
        if (m['8'] > 0)
        {
            cout << 8 << endl;
        }
        else if ((m['1'] > 0 && m['6'] > 0))
        {
            cout << "YES\n";
            cout << "16" << endl;
        }
        else if ((m['2'] > 0 && m['4'] > 0))
        {
            cout << "YES\n";
            cout << "24" << endl;
        }
        else if (m['3'] > 0 && m['2'] > 0)
        {
            cout << "YES\n";
            cout << "32" << endl;
        }
        else if (m['4'] > 0 && m['0'] > 0)
        {
            cout << "YES\n";
            cout << "40" << endl;
        }
        else if (m['4'] > 0 && m['8'] > 0)
        {
            cout << "YES\n";
            cout << "48" << endl;
        }
        else if (m['5'] > 0 && m['6'] > 0)
        {
            cout << "YES\n";
            cout << "56" << endl;
        }
        else if (m['6'] > 0 && m['4'] > 0)
        {
            cout << "YES\n";
            cout << "64" << endl;
        }
        else if (m['7'] > 0 && m['2'] > 0)
        {
            cout << "YES\n";
            cout << "72" << endl;
        }
        else if (m['8'] > 0 && m['0'] > 0)
        {
            cout << "YES\n";
            cout << "80" << endl;
        }
        else if (m['8'] > 0 && m['8'] > 0)
        {
            cout << "YES\n";
            cout << "88" << endl;
        }
        else if (m['9'] > 0 && m['6'] > 0)
        {
            cout << "YES\n";
            cout << "96" << endl;
        }
        else 
        cout<<"NO\n";
    }
}