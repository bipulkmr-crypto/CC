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
void still_single()
{
    int n;
    cin >> n;
    vll arr(n);
    int i;
    ll sum = 0;
    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
        ret;
    }
    sort(all(arr));
    ll j = 0;
    ll x = 0;
    // for(i=n-1;i>=0;i--)
    // {
    //     x+=arr[i];
    //     sum-=arr[i];
    //     if(sum==x)
    //     {
    //         cout<<"YES"<<endl;
    //         ret;
    //     }
    // }
    if (2 * arr[n - 1] > sum)
        cout << "NO\n";
    else
        cout << "YES\n";
    // ll val = sum / 2;
    // mll m;
    // rep(i, n)
    // {
    //     m[arr[i]]++;
    // }
    // bool flag = true;
    // int odd = 0;
    // ford(m, it)
    // {
    //     if (it->second % 2)
    //         odd++;
    // }
    // if (odd == 0)
    // {
    //     cout << "YES\n";
    //     ret;
    // }
    // if ((odd % 2 == 0) && n % 2 == 1)
    // {
    //     cout << "YES\n";
    // }
    // else
    //     cout << "NO\n";
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}