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
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    // int val1 = abs(i - 1) + abs(j - 1);
    // int val2 = abs(i - n) + abs(j - 1);
    // int val3 = abs(i - 1) + abs(j - m);
    // int val4 = abs(i - n) + abs(j - m);
    // if ((val1 + val2) > (val3 + val4))
    // {
    //     cout << 1 << ' ' << 1 << ' ' << n << ' ' << 1 << endl;
    // }
    // else if ((val1 + val3) > (val2 + val4))
    // {
    //     cout << 1 << ' ' << 1 << ' ' << 1 << ' ' << m << endl;
    // }
    // else if ((val1 + val4) > (val2 + val3))
    // {
    //     cout << 1 << ' ' << 1 << ' ' << n << ' ' << m << endl;
    // }
    // else if ((val2 + val3) > (val1 + val4))
    // {
    //     cout << n << ' ' << 1 << ' ' << 1 << ' ' << m << endl;
    // }
    // else if ((val4 + val2) > (val3 + val1))
    // {
    //     cout << n << ' ' << m << ' ' << n << ' ' << 1 << endl;
    // }
    // else if ((val4 + val3) > (val1 + val2))
    // {
    //     cout << n << ' ' << m << ' ' << 1 << ' ' << m << endl;
    // }
    // else
    //     cout << 1 << ' ' << 1 << ' ' << n << ' ' << m << endl;
    int path1=(abs(i-1)+abs(j-1)+abs(n-i)+abs(m-j));
    int path2=abs(i-1)+abs(j-m)+abs(i-n)+abs(j-1);
    if(path1>path2)
    {
        cout<<1<<' '<<1<<' '<<n<<' '<<m<<endl;
    }
    else 
    {
        cout<<1<<' '<<m<<' '<<n<<' '<<1<<endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}