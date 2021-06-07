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
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         string s;
//         cin>>s;
//         int n=s.length();
//         int i;
//         int suff[n]={0};
//         if(s[n-1]=='?')
//         suff[n-1]=1;
//         // for(i=n-2;i>=0;i--)
//         // {
//         //     suff[i]=suff[i+1];
//         //     if(s[i]=='?')
//         //     {
//         //         suff[i]+=1;
//         //     }
//         // }
//         // ll ans=0;
//         // for(i=0;i<n-1;i++)
//         // {
//         //     if(s[i]=='?')
//         //     {
//         //         ans+=(n-1-i);
//         //     }
//         // }
//         // ans+=n;
//         for(i=)
//         cout<<ans<<endl;
//     }
    
// }
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
ll dp[200005][2];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		memset(dp, 0, sizeof(dp));
		int i, j;
		int n = s.length();
		if (s[0] == '1')
			dp[0][1] = 1;
		else
			dp[0][0] = 1;
		if (s[0] == '?')
		{
			dp[0][0] = 1;
			dp[0][1] = 1;
		}
		for (i = 1; i < n; i++)
		{
			if (s[i] == '1')
			{
				// dp[i][0] = (dp[i - 1][0] + 1);
				dp[i][1] = dp[i - 1][0] + 1;
			}
			else if (s[i] == '0')
			{
				dp[i][0] = dp[i - 1][1] + 1;
				// dp[i][1] = dp[i - 1][1] + 1;
			}
			else
			{
				dp[i][0] = dp[i - 1][1] + 1;
				dp[i][1] = dp[i - 1][0] + 1;
			}
		}
		ll ans = 0;
		for (i = 0; i < n; i++)
		{
			if (s[i] == '1')
			{
				ans += dp[i][1];
			}
			else if (s[i] == '0')
			{
				ans += dp[i][0];
			}
			else
			{
				ans += max(dp[i][0], dp[i][1]);
			}
		}
		cout << ans << endl;

	}
}