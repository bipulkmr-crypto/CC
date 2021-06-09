#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// #define mod 1000000007
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
    for (i = 2; i < M; i++)
    {
        if (pr[i])
            primes.pb(i);
    }
}
int T;
ll mod;
int b[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
ll a[] = {1996011519951206ll, 1995120619960115ll, 1995100319960115ll, 195100319951206ll, 1996011519951003ll};

ll multi(ll x, ll y)
{
    ll w = x * y - mod * (ll(double(x) * y / mod + 1e-3));
    while (w < 0)
        w += mod;
    while (w >= mod)
        w -= mod;
    return w;
}

ll pow(ll x, ll y)
{
    ll t = 1;
    while (y)
    {
        if (y & 1)
            t = multi(t, x);
        x = multi(x, x);
        y >>= 1;
    }
    return t;
}

bool judge(ll n)
{
    if (n == 2)
        return true;
    if (n < 2 || !(n & 1))
        return false;
    for (int i = 0; i < 25; i++)
        if (n % b[i] == 0 && n != b[i])
            return false;
    mod = n;
    int t = 0;
    ll u = n - 1;
    while (!(u & 1))
        t++, u >>= 1;
    for (int i = 0; i < 5; i++)
    {
        ll x = a[i] % (n - 1) + 1;
        x = pow(x, u);
        ll y = x;
        for (int j = 1; j <= t; j++)
        {
            x = multi(x, x);
            if (x == 1 && y != 1 && y != n - 1)
                return false;
            y = x;
        }
        if (x != 1)
            return false;
    }
    return true;
}

void still_single()
{
    ll ans = 1;
    mll m;
    ll b;
    cin >> b;
    ll temp = b;
    // if(judge(temp))
    // {
    //     cout<<1<<endl;
    // for (auto x : primes)
    // {
    //     if (x > b)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         while (temp % x == 0)
    //         {
    //             m[x]++;
    //             temp /= x;
    //         }
    //     }
    // }
    // int i=2;
    // while(temp>1)
    // {
    //     if(temp%i==0)
    //     {
    //         ll cnt=0;
    //         while(temp%i==0)
    //         {
    //             cnt++;
    //             temp/=i;
    //         }
    //         ans*=cnt;
    //     }
    //     else i++;
    // }
    ll i;
    ll cnt=0;
    for(i=1;i*i<=(temp);i++)
    {
        
        if(b%i==0)
        {
            cnt++;
            // b/=i;
            if(i*i!=b)cnt+=1;
        }
    }
    // if(m.size()==0)
    // {
    //     ll val=sqrt(b);
    //     if((val*val)==b)
    //     {

    //         cout<<4<<endl;
    //     }
    //     else
    //     cout<<2<<endl;
    //     return;
    // // }
    // ford(m, it)
    // {
    //     // cout<<it->first<<endl;
    //     ans *= (it->second + 1);
    // }
    cout << cnt;
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    // pre();
    //no need for sieve

    int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}