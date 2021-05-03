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
// ll arr[101];
// ll dp[101];
// ll n;
// ll solve(ll i)
// {
//     if (i == n - 1)
//         return 1;
//     else if(dp[i]!=-1)
//     return dp[i];
//     else
//     {
//         ll ans = max(1 + solve(i + 1), arr[i] + solve(i + 1));
//         dp[i]=ans;
//         return ans;
//     }
// }
// int main()
// {
//     // ll n;
//     cin >> n;
//     ll i;
//     memset(dp,-1,sizeof(dp));
//     rep(i, n) cin >> arr[i];
//     ll b[n];
//     ll sum=0;
//     rep(i,n)
//     {
//         if(arr[i]==1)
//         b[i]=-1;
//         else 
//         b[i]=1;
//         sum+=arr[i];
//     }
//     ll j;
//     for(i=1;i<n;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(arr[i]>arr[j]&&b[i]<(b[j]+arr[i]))
//             {
//                 b[i]=b[j]+arr[i];
//             }

//         }
//     }
//     ll ans =*max_element(b,b+n);
//     ans+=sum;
//     cout<<ans<<endl;
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
int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    ll sum=0;
    ll one=0;
    ll x=n;
    while (n--)
    {
        ll temp;
        cin>>temp;
        one+=temp;
        if(temp)
        temp=-1;
        else 
        temp=1;
        sum=max(sum+temp,temp);
        ans=max(ans,sum);
    }
    if(one==x)
    cout<<x-1<<endl;
    else
    cout<<(one+ans)<<endl;
    
}