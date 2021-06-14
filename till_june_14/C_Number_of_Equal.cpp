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
#define Fo(i, a, n) for (i = a; i <= n; i++)
int main()
{
    fast int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int i;
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int l = 0, r = 0;
    int j = 0;
    i = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            // ans++;
            int temp2 = b[j];
            int temp = a[i];
            i++;
            j++;

            l = j;
            r = i;
            ll sum1 = 1;
            ll sum2 = 1;
            while (l < m && temp == b[l])
            {
                l++;
                sum1 += 1;
            }
            while (r < n && temp2 == a[r])
            {
                r++;
                sum2 += 1;
            }
            ans += (sum1 * sum2);
            i = r;
            j = l;
        }
        else
        {
            if (a[i] > b[j])
                j++;
            else
                i++;
        }
    }
    cout << ans << endl;
}