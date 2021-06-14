// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int gcd(int a, int b, int& x, int& y) {
// 	if (b == 0) {
// 		x = 1;
// 		y = 0;
// 		return a;
// 	}
// 	int x1, y1;
// 	int d = gcd(b, a % b, x1, y1);
// 	x = y1;
// 	y = x1 - y1 * (a / b);
// 	return d;
// }
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		int x, y;
// 		int g = gcd(3, 7, x, y);
// 		cout << x << " " << y;
// 		if (x >= 0 && y >= 0)
// 		{
// 			cout << "YES\n";
// 		}
// 		else
// 			cout << "NO\n";
// 	}
// }

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n, i, j;
		cin >> n;
		bool flag = false;
		for (i = 0; i <= 100; i++)
		{
			for (j = 0; j <= 100; j++)
			{
				if ((3 * i + 7 * j) == n)
				{
					flag = true;
					cout << "YES" << endl;
					goto ext;
				}
			}
		}
		if (flag)
		{
ext:
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}

