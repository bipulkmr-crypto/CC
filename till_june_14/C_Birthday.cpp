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
void still_single()
{
    int n;
    cin >> n;
    vll arr(n+1);
    int i;
    vll b(n+1);
    fu(i,1, n) cin >> arr[i];
    sort(all(arr));
    int j;
	j=1;int k=n;
	fu(i,1,n)
	{
		if (i&1) b[j++]=arr[i]; else b[k--]=arr[i];
	}
    fu(i,1,n)
	cout<<b[i]<<' ';
	// return 0;
   // if (n % 2)
    // {
    //     rep(i, n)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             ans[i] = arr[i];
    //         }
    //     }
    //     for (i = n - 1; i >= 0; i--)
    //     {
    //         if (i % 2 == 1)
    //         {
    //             ans[n - i - 1] = arr[i];
    //         }
    //     }
    // }
    // else
    // {
    //     rep(i,n)
    //     {
    //         if(i % 2==0)
    //         ans[i]=arr[i];
    //     }
    //     for(i=n-1;i>=0;i--)
    //     {
    //         if(i%2==1)
    //         ans[n-i]=arr[i];
    //     }
    // }
    // for (auto x : ans)
    //     cout << x << " ";
    // cout << endl;
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        still_single();
    }
    return 0;
}