#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
string s;
bool good(int mid)
{
	ll i;
	ll a[4] = {0};
	// for (int i = 0; i < mid; i++)
	// {
	//     (ar[s[i] - '0']++);
	// }
	// if ((ar[1] >= 1) && (ar[2] >= 1) && (ar[3] >= 1))
	// {
	//     return true;
	// }
	// int p = 0;
	// for (int j = mid; j < s.size(); j++)
	// {
	//     ar[s[p] - '0']--;
	//     ar[s[j] - '0']++;
	//     if ((ar[1] >= 1) && (ar[2] >= 1) && (ar[3] >= 1))
	//     {
	//         return true;
	//     }
	//     p++;
	// }
	// return false;
	rep(i, mid)
	{
		a[s[i] - '0']++;
	}
	if (a[1] >= 1 && a[2] >= 1 && a[3] >= 1)
		return true;
	ll p = 0;
	for (i = mid; i < s.length(); i++)
	{
		a[s[p] - '0']--;
		a[s[i] - '0']++;
		if (a[1] >= 1 && a[2] >= 1 && a[3] >= 1)
			return true;
		p++;
	}
	return false;
}
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{

		ll i;
		cin >> s;
		ll a[4] = {0};
		rep(i, s.length())
			a[s[i] - '0']++;
		if (a[1] >= 1 && a[2] >= 1 && a[3] >= 1)
		{
			ll ans = 0;
			ll low = 3, high = s.length() - 1, mid;
			while (high - low > 1)
			{
				mid = low + (high - low) / 2;
				if (good(mid))
				{
					high = mid;
				}
				else
				{
					low = mid ;
				}
			}
			if (good(low))
				cout << low<< endl;
			else
				cout << high << endl;
		}
		else
		cout<<0<<endl;
	}
}