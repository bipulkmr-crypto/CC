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
// void still_single()
// {
//     int n,m;
//     cin>>n>>m;
//     char arr[n][m];
//     int i,j;
//     rep(i,n)rep(j,m)cin>>arr[i][j];
//     ll cnt=0;
//     rep(i,n)
//     {
//         rep(j,m)
//         {
//             if(arr[i][j]=='*')
//             {
//                 cnt++;
//                 int k=1;
//                 int lx=i,ly=j;
//                 for(k=)
//             }
//         }
//     }   
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         still_single();
//     }
//     return 0;
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
#define rep(i,a,n) for(i=a;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
// void still_single()
// {
//     int n, m;
//     cin >> n >> m;
//     char arr[n][m];
//     int i, j;
//     rep(i, n)
//     {
//         rep(j, m)
//         cin >> arr[i][j];
//     }
//     int cnt = 0;
//     auto isvalid = [&](int x, int y)
//     {
//         return (x >= 0 && x < n && y >= 0 && y < m);
//     };
//     int l[n+1][m+1];
//     int r[n+1][m+1];
//     rep(i,n)
//     {

//         int p=0;
//         rep(j,m)
//         {
//             if(arr[i][j]=='.')
//             {
//                 p=0;
//                 continue;
//             }
//             else
//             {
//                 l[i][j]=p;
//                 p++;
//             }
//         }
//         p=0;
//         for(j=m-1;j>=0;j--)
//         {
//             if(arr[i][j]=='.')
//             {
//                 p=0;
//                 continue;
//             }
//             else
//             {
//                 r[i][j]=p;
//                 p++;
//             }
//         }
//     }
//     ll ans=0;
//     rep(i,n)
//     {
//         rep(j,m)
//         {
//             int k=1;
//             if(arr[i][j]=='.')
//             continue;
//             ans++;
//             for(k=1;k+i<n;k++)
//             {
//                 if(l[i+k][j]<k||r[i+k][j]<k)break;
//                 ans++;
//             }
//         }
//     }
//     cout<<ans<<endl;
//     //my brute force approach is overcounting and will give tle
//     // for (i = 0; i < n; i++)
//     // {
//     //     rep(j, m)
//     //     {
//     //         if (arr[i][j] == '*')
//     //         {
//     //             int k = 1;
//     //             cnt += 1;
//     //             fu(k, 1, n )
//     //             {
//     //                 if (isvalid(i + k, j) && arr[i + k][j] == '*' && (j - k) >= 0 && (j + k) < m)
//     //                 {
//     //                     int p = 0;
//     //                     bool flag = true;
//     //                     rep(p, k)
//     //                     {
//     //                         if (isvalid(i + k, j + p) && isvalid(i + k, j - p))
//     //                         {
//     //                             if (arr[i + k][j + p] != '*' || arr[i + k][j - p] != '*')
//     //                             {
//     //                                 flag = false;
//     //                                 break;
//     //                             }
//     //                         }
//     //                         else
//     //                         {
//     //                             flag = false;
//     //                             break;
//     //                         }

//     //                     }
//     //                     if (flag)
//     //                     {
//     //                         cnt += 1;
//     //                     }
//     //                     else
//     //                         break;
//     //                 }
//     //                 else
//     //                     break;
//     //             }
//     //         }
//     //     }
//     // }
//     // cout << cnt << endl;
// }
 
void solve(){
	int n,m;
	cin >> n >> m;
	
	string s[n];
	vector<vector<int>> l(n,vector<int>(m));
	vector<vector<int>> r(n,vector<int>(m));
int i,j;
	rep(i,0,n){
		cin >> s[i];
		int cnt = 0;
		rep(j,0,m){
			if(s[i][j] == '.'){
				cnt = 0;
				continue;
			}
			l[i][j] = cnt;
			cnt++;
		}
		
		cnt = 0;
		for(int j = m - 1; j >= 0; j--){
			if(s[i][j] == '.'){
				cnt = 0;
				continue;
			}
			r[i][j] = cnt;
			cnt++;
		}
	}
	
	int ans = 0;
	
	rep(i,0,n){
		rep(j,0,m){
			if(s[i][j] == '.') continue;
			ans++;
			for(int h = 1; i + h < n; h++){
				if(l[i+h][j] < h || r[i+h][j] < h) break;
				ans++;
			}
		}
	}
	
	cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}