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
#define int ll
vector<pair<int, map<int, int>>> m(100001);
void pre()
{
    int i, j;
    fu(j, 1, 1e5)
    {
        int p = j;
        for (i = 2; i * i <= p; i++)
        {
            while (p % i == 0 and p > 1)
            {
                p /= i;
                m[j].ss[i]++;
            }
        }
        if (p > 1)
        {
            m[j].ss[p]++;
        }
    }
}
int ans[100001];
void calculate(int k)
{
    
}
int findTheGreatestX(int P, int Q)
{
    map<int, int> divisiors;

    for (int i = 2; i * i <= Q; i++)
    {

        while (Q % i == 0 and Q > 1)
        {

            Q /= i;
            divisiors[i]++;
        }
    }

    // If Q is a prime factor
    if (Q > 1)
        divisiors[Q]++;

    // Stores the desired result
    int ans = 0;

    // Iterate through all divisors of Q
    for (auto i : divisiors)
    {

        int frequency = i.second;
        int temp = P;

        // Stores the frequency count
        // of current prime divisor on
        // dividing P
        int cur = 0;

        while (temp % i.first == 0)
        {
            temp /= i.first;

            // Count the frequency of the
            // current prime factor
            cur++;
        }

        // If cur is less than frequency
        // then P is the final result
        if (cur < frequency)
        {
            ans = P;
            break;
        }

        temp = P;

        // Iterate to get temporary answer
        for (int j = cur; j >= frequency; j--)
        {
            temp /= i.first;
        }

        // Update current answer
        ans = max(temp, ans);
    }

    // Print the desired result
    return ans;
}
void still_single()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    ll i;
    fu(i, 1, n)
    {
        ans *= findTheGreatestX(i, k);
        ans %= mod;
    }
    cout << ans << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    pre();
    fast int t = 1;
    cin >> t;
    while (t--)
    {

        still_single();
    }
    return 0;
}