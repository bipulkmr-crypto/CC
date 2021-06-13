#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
const int M = 1e6 + 3;
int pr[M];
vector<int> primes;
vector<int> prefix(M);
//sieve of erathoses
void pre()
{
    int i;
    rep(i, M)
        pr[i] = 1;
    pr[1] = 0, pr[0] = 0;
    for (i = 2; i * i < M; i++)
    {
        if (pr[i])
        {
            for (int j = i * i; j < M; j += i)
            {
                pr[j] = 0;
            }
        }
    }
    int x = 0;
    prefix[0]=prefix[1]=0;
    fu(i, 2, M - 1)
    {
        if (pr[i])
        {
            x++;
            prefix[i] = x;
        }
        else
            prefix[i] = x;
    }
    // for (i = 2; i < M; i++)
    // {
    //     if (pr[i])
    //         primes.pb(i);
    // }
}
int r1, r2;
int n;
string s;
int dp[M];
int rec(int index)
{

    if (index == n)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    int mini1 = 1e9;

    if (index + 1 <= n && s[index + 1] != '*')
        mini1 = min(mini1, 1 + rec(index + 1));

    if (index + 2 <= n && s[index + 2] != '*')
        mini1 = min(mini1, 1 + rec(index + 2));

    if (prefix[index] * r2 >= index * r1 && (index + prefix[index] <= n) && (s[index + prefix[index]] != '*'))

        mini1 = min(mini1, 1 + rec(index + prefix[index]));

    return dp[index] = mini1;
}

void still_single()
{
    // int r1, r2;
    cin >> r1 >> r2;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    cin >> s;
    s='0'+s;
    // int ans=solve(0);
    // if (s[0] == '#')
    //     dp[0] = 1;
    // if (s[1] == '#')
    //     dp[1] = 1;
    // int i;
    // for (i = 2; i < n; i++)
    // {
    //     if (s[i] == '#')
    //     {
    //         int ans = 0;
    //         bool test = (prefix[i + 1] * r2) >= (r1 * (i + 1));
    //         int p1 = INT_MAX, p2 = INT_MAX, p3 = INT_MAX;
    //         if (test)
    //         {

    //             if (i - 1 >= 0)
    //                 p1 = dp[i - 1];
    //             if (i - 2 >= 0)
    //                 p2 = dp[i - 2];
    //             if (i - prefix[i + 1] >= 0)
    //                 p3 = dp[i - prefix[i + 1]];
    //             dp[i] = 1 + min({p1, p2, p3});
    //         }
    //         else
    //         {
    //             if (i - 1 >= 0)
    //                 p1 = dp[i - 1];
    //             if (i - 2 >= 0)
    //                 p2 = dp[i - 2];
    //             dp[i] = 1 + min(p1, p2);
    //         }
    //     }
    //     else
    //     {
    //         dp[i] = INT_MAX;
    //     }
    // }
    int ans = rec(1);
    if(s[1]=='*'||s[n]=='*')
    {
        cout<<"No way!";
        return ;
    }
    // ans = dp[n - 1];
    if (ans == 1e9)

        cout << "No way!" << endl;
    else
        cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}