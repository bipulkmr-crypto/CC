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
ll arr[200001];
ll n;
// ll solve(ll i)
// {
//     if (i == n)
//         return 0;
//     else 
//     {
//         for(ll j=i+1;j<n;j++)
//         {
//             ll ans=LLONG_MIN;
//             if((arr[i]>0&&arr[j]<0)||(arr[j]>0&&arr[i]<0))
//             {
                
//             }
//         }
//     }
// }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        auto sign= [&](ll x)
        {
            if(x>0) return 1;
            else return -1;
        };
        cin >> n;
        ll i;
        rep(i, n) cin >> arr[i];
        // ll dp[n][n];
        // memset(dp, 0, sizeof(dp));
        ll ans = 0;
        for (i = 0; i < n; i++)
        {
            ll curr=arr[i];
            ll maxi=arr[i];
            ll j=i;
            while (j<n&&(sign(arr[i])==sign(arr[j])))
            {
                maxi=max(maxi,arr[j]);
                j++;
            }
            ans+=maxi;
            i=j-1;
        }
        cout<<ans<<endl;
    }
}