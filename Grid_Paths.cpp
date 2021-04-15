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
int main()
{
    ll n;
    cin >> n ;
    char arr[n][n];
    ll i, j;
    ll dp[n][n];
    memset(dp, 0, sizeof(dp));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == '.')
            {
                if (i > 0 && j > 0)
                    dp[i][j] += (dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
                else if(i>0)
                {
                    dp[i][j]+=dp[i-1][j]%mod;
                }
                else if(j>0)
                {
                    dp[i][j]+=dp[i][j-1]%mod;
                }
                    
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    cout<<(dp[n-1][n-1])<<endl;
}