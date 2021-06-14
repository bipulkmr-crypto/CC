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
int siz = 100000;
vector<bool> is_prime(100001, true);
void seive()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= siz; i++)
    {
        if (is_prime[i] && (long long)i * i <= siz)
        {
            for (int j = i * i; j <= siz; j += i)
                is_prime[j] = false;
        }
    }
}
int main()
{
    seive();
    int n;
    cin >> n;
    int p = INT_MAX;
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (is_prime[i])
        {
            p = i;
            break;
        }
    }
    int m = n;
    while (!is_prime[m])
        m++;
    cout << m << endl;
    // cout << n << endl;
    // if (n != 3)
    // {
    //     int m = p - 1 + (n - 2) / 2;
    //     if (n % 2 == 0)
    //         m += 2;
    // cout << m << endl;
    // }
    // else
    // cout << 3 << endl;
    cout << 1 << " " << n << endl;
    for (i = 1; i < n; i++)
    {
        cout << i << " " << i + 1 << endl;
    }
    // for(i=m-n;i<=n;i++)
    // for (i = 2; i <= p + 1; i++)
    // {
    //     cout << 1 << ' ' << i << endl;
    // }
    // for (i = 2; i < n; i += 2)
    // {
    //     cout << i << ' ' << i + 1 << endl;
    // }
    // if (n % 2 == 0)
    // {
    //     cout << 2 << " " << n << endl;
    //     if (!is_prime[n - 1])
    //         cout << 3 << " " << n << endl;
    // }
    for (i = 0; i < m - n; i++)
    {
        cout << (i + 1) << " " << i + ((n / 2) + 1) << endl;
    }
}
