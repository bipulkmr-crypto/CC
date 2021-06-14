// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// bool comp(ll *a, ll *b)
// {
//     return (*b <= *a);
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     ll l = 0, r = 0;
//     ll arr[n + 1];
//     ll i;
//     arr[0] = 0;
//     int mini = INT_MAX, mx = INT_MIN;
//     fu(i, 1, n) cin >> arr[i];
//     fu(i, 1, n)
//     {
//         if (arr[i] != i)
//         {
//             if (arr[i] < mini)
//             {
//                 mini = arr[i];
//                 r = i;
//             }
//             if (arr[i] > mx)
//             {
//                 mx = arr[i];
//                 l = i;
//             }
//         }
//     }
//     if (l == 0 && r == 0)
//     {
//         cout << "yes\n";
//         cout << "1 1" << endl;
//     }
//     else
//     {
//         // reverse(arr + r, arr + l);
//         // for (i = l; i < r; i++)
//         // {
//         //     swap(arr[i], arr[r - i + 1]);
//         // }
//         if (is_sorted(arr + 1, arr + n + 1))
//         {
//             cout << "yes\n";
//             cout << r << " " << l << endl;
//         }
//         else
//             cout << "no\n";
//     }
// }
#include <bits/stdc++.h>

using namespace std;

const int N = (int) 1e5 + 5;
int a[N], b[N];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	map<int, int> mp;
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		a[i] = mp[a[i]];
	}
	int L = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != i) {
			L = i;
			break;
		}
	}
	int R = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
			R = i;
			break;
		}
	}
	if (L == -1 || R == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(a + L, a + R + 1);
		int ok = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != i) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}