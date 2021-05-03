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
ll fact(ll n)
{
    ll i=1,fact=1;
    for(i=1;i<=n;i++)fact*=i;
    return fact;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    map<char, ll> m1;
    map<char, ll> m2;
    ll i;
    ll n = s1.length();
    rep(i, n)
    {
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    double prob;
    ll diff = 0;
    diff = abs(m1['+'] - m2['+']) + abs(m1['-'] - m2['-']);
    if (diff > m2['?'])
    {
        cout << "0.000000000000"<< endl;
    }
    else
    {
        ll val=1<<m2['?'];
        double num = (fact(diff) / (fact(abs(m1['-'] - m2['-'])) * fact(abs(m1['+'] - m2['+']))));
        double prob = (num) / (double(val));
        cout << setprecision(12) << fixed << prob << endl;
    }
}