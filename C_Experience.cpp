#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
using namespace std;
const int MAX_N = 1e6 + 1;
int parent[MAX_N];
int points[MAX_N];
int size[MAX_N] = {0};
void make_set(int v)
{
	parent[v] = v;
	size[v] = 1;
	points[v] = 0;
}
int find_set(int v)
{
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
	a = find_set(a);
	b = find_set(b);
	if (a != b)
	{
		if (size[a] < size[b])
		{
			swap(a, b);
		}
		parent[b] = a;
		// points[a] += points[b];

		size[a] += size[b];
	}
}
void add(int x, int val)
{
	x = find_set(x);
	points[x] += val;
}
int  main()
{
	// memset(parent, -1, sizeof(parent));
	fast
	int n, q;
	cin >> n >> q;
	int i;
	for (i = 1; i <= n; i++)
	{
		make_set(i);
	}
	while (q--)
	{
		string s; int a, b;
		cin >> s;
		if (s == "join")
		{
			cin >> a >> b;
			union_sets(a, b);
		}
		else if (s == "add")
		{
			cin >> a >> b;
			add(a, b);
		}
		else
		{
			cin >> a;
			// int val = find_set(a);
			{
				cout << points[a] << endl;
			}
		}

	}
	// fu(i,1,n)
	// {
	//     cout<<mini[i]<<" "<<maxi[i]<< " "<<size[i]<< ' '<<parent[i]<<endl;
	// }
}