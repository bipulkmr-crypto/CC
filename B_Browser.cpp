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
    int n, pos, l, r;
    int ans = 0;
    cin >> n >> pos >> l >> r;
    if (l == 1 && r == n)
    {
        cout << 0 << endl;
        return 0;
    }
    // else
    // {
    //     if ((l == 1 && r != n))
    //     {
    //         ans = abs(pos - l) + 1;
    //     }
    //     else if (r == n && l != 1)
    //     {
    //         ans = abs(pos - r) + 1;
    //     }
    //     else if(l!=1&&r!=n)
    //         ans = (r - l) + min(abs(pos - l), abs(pos - r)) + 2;
    // }
    // int  n, pos, l, r;
//	cin >> n >> pos >> l >> r;
	if (l == 1 && r == n) {
		cout << 0;
		return 0;
	}
	if (l == 1 ) {
		cout << 1+abs(pos-r);
		return 0;
	}
	if (r == n) {
		cout << 1 + abs(pos - l);
		return 0;
	}
	cout << min(2 + abs(pos - l) + abs(r - l), 2 + abs(pos - r) + abs(r - l));
	return 0;

    // if (pos >= l && pos <= r)
    // {
    //     int ans;
    //     if (pos < r && pos > l)
    //         ans = min(pos - l + 1, (r + 1 - pos));
    //     else if (pos == l)
    //     {
    //         if (r != n)
    //             ans = (r - pos + 1);
    //         else
    //             ans = 1;
    //     }

    //     else if (pos == r)
    //     {
    //         if (l != 1)
    //             ans = (pos - l + 1);
    //         else
    //             ans = 1;
    //     }

    //     if (l > 1 && r < n)
    //         ans += (r - l + 1);
    //     cout << ans << endl;
    // }
    // else
    // {
    //     int ans = 0;
    //     if (pos < l)
    //     {
    //         ans = (l - pos - 1);
    //         if(r==n)
    //         ans+=((r-l+1));
    //     }
    //     else if (pos > r)
    //     {
    //         ans = (pos - r );
    //         if(l!=1)
    //         {
    //             ans+=((r-l+1));
    //         }
    //     }
    //     // if
    //     // ans += ((r - l + 1));
    cout << ans << endl;
}
