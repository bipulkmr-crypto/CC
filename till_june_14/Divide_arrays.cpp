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
        ll n;
        cin >> n;
        ll mex = 0;
        ll i;
        ll arr[n];
        mll m1, m2;
        rep(i, n)
        {
            cin >> arr[i];
            m1[arr[i]]++;
            m2[arr[i]]++;
        }
        while (m1.find(mex) != m1.end())
            mex++;
        ll temp = mex;
        ll pre[n] = {0};
        ll suff[n] = {0};
        for (i = n - 1; i >= 0; i--)
        {
            pre[i] = temp;
            m1[arr[i]]--;
            if (m1[arr[i]] == 0)
            {
                m1.erase(arr[i]);
            }
            if (arr[i] < temp && m1.find(arr[i]) == m1.end())
                temp = arr[i];
        }
        temp = mex;
        for (i = 0; i < n; i++)
        {
            suff[i] = temp;
            m2[arr[i]]--;
            if (m2[arr[i]] == 0)
                m2.erase(arr[i]);
            if (arr[i] < temp && m2.find(arr[i]) == m2.end())
            {
                temp = arr[i];
            }
        }
        bool flag = false;
        for (i = 0; i < n - 1; i++)
        {
            if (pre[i] == suff[i + 1])
            {
                cout << (i + 1) << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
}