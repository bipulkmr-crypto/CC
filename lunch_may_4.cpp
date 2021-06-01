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
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		string s;
		int i;
		cin >> s;
		int pos = 0;
		rep(i, n - 1)
		{
			if (s[i] == s[i + 1])
			{
				pos += 2;
			}
			else
				pos += 1;
		}
		while (k--)
		{
			int x;
			cin >> x;
			x--;
			s[x] = (s[x] == '0') ? '1' : '0';
			if (x > 0)
			{
				if (s[x] == s[x - 1])pos++; else pos--;
			}
			if (x < n - 1)
			{
				if (s[x] == s[x + 1])
				{
					pos++;
				}
				else
					pos--;
			}
			// if (x < n)
			// {


			// if (x != 0 && x != n - 1)
			// {
			// 	s[x] = (s[x] == '0') ? '1' : '0';
			// 	if (s[x] == s[x - 1])
			// 	{
			// 		pos += 1;
			// 	}
			// 	else
			// 		pos -= 1;
			// 	if (s[x] == s[x + 1])
			// 	{
			// 		pos += 1;
			// 	}
			// 	else
			// 		pos -= 1;
			// }
			// else
			// {
			// 	s[x] = (s[x] == '0') ? '1' : '0';
			// 	if (x == 0)
			// 	{

			// 		if (s[x] == s[x + 1])
			// 		{
			// 			pos += 1;
			// 		}
			// 		else
			// 			pos -= 1;
			// 	}
			// 	else
			// 	{
			// 		if (s[x] == s[x - 1])
			// 		{
			// 			pos += 1;
			// 		}
			// 		else
			// 			pos -= 1;
			// 	}
			// }
			cout << pos << endl;
		}

	}
	return 0;
}


