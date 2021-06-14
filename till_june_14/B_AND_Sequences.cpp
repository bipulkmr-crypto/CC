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
#define gi(n) scanf(% d, &n
#define Fo(i,a,n) for(i=a;i<=n;i++)
const int N = 1e6;
ll fac[N], inv[N], b[N];
void pre()
{
    ll i;
    fac[0] = inv[0] = 1;
    fac[1] = inv[1] = 1;
    Fo(i, 2, N)
    {
        fac[i] = (i * fac[i - 1]) % mod;
        // inv[i] = (mpow(i, mod - 2) * inv[i - 1]) % mod;
    }
}
int main()
{
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll ans = 0;
        ll i;
        ll fact = 1;
        rep(i, n) cin >> arr[i];
        ll mini = *min_element(arr, arr + n);
        ll cnt = 0;
        bool flag = false;
        rep(i, n)
        {
            if (arr[i] == mini)
                cnt++;
            if((mini&arr[i])!=mini)
            {
                cout<<0<<endl;
                flag=true;
                goto ext;
            }
        }
        if(flag)
        {
            ext:continue;
        }
        // fu(i, 1, n - 2)

        // {
        //     fact *= i;
        //     fact %= mod;
        // }
        if (cnt >= 2)
        {
            cout << ((cnt * (cnt - 1) % mod) * fac[n - 2]) % mod << endl;
        }
        else
            cout << 0 << endl;
    }
}