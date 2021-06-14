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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        string s;
        int m[2];
        m[0] = a;
        m[1] = b;
        cin >> s;
        int i;
        int n = s.length();
        rep(i, n)
        {
            if (s[i] != '?')
                m[s[i] - '0']--;
        }
        if (m[0] < 0 || m[1] < 0)
        {
            cout << -1 << endl;
            continue;
        }
        // if (m[0] % 2 == 1 && m[1] % 2 == 1)
        // {
        //     cout << (-1) << endl;
        //     continue;
        // }
        fu(i, 0, n / 2 - 1)
        {
            if (s[i] == '?')
            {
                if (s[n - i - 1] == '?')
                {
                    if (m[0] > 0)
                    {
                        s[i] = '0';
                        s[n - i - 1] = '0';
                        m[0] -= 2;
                    }
                    else
                    {
                        s[i] = '1';
                        s[n - i - 1] = '1';
                        m[1] -= 2;
                    }
                }
                else
                {
                    s[i] = s[n - i - 1];
                    m[s[n - i - 1] - '0'] -= 1;
                }
            }
        }
        if (n % 2 == 1)
        {
            fu(i, n / 2 + 1, n - 1)
            {
                if (s[i] == '?')
                {

                    s[i] = s[i - n / 2 - 1];
                    m[s[i - n / 2 - 1] - '0']--;
                }
            }
        }
        else
        {
            fu(i, n / 2, n - 1)
            {
                if (s[i] == '?')
                {
                    s[i] = s[i - n / 2 + 1];
                    m[s[i - n / 2] - '0']--;
                }
            }
        }

        if (n % 2 == 1)
        {
            if (m[0] > 0)
                s[n / 2] = '0';
            else
            {
                s[n / 2] = '1';
            }
        }
        bool flag = true;
        for (i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                cout << "-1" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << s << endl;
    }
}