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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        // sort(all(s1));
        // sort(all(s2));
        int state = 0;
        int i = 0, j = 0;
        if (s1 == s2)
        {
            cout << "EQUAL\n";
            continue;
        }
        int cnt1 = 0, cnt2 = 0;
        while (i < n && j < n)
        {
            if (s1[i] > s2[j])
            {
                cnt1++;
            }
            else if (s1[i] < s2[j])
            {
                cnt2++;
            }

            i++;
            j++;
        }
        if (cnt1 > cnt2)
        {
            cout << "RED\n";
        }
        else if(cnt1<cnt2)
        {
            cout << "BLUE\n";
        }
        else cout << "EQUAL\n";
    }
}