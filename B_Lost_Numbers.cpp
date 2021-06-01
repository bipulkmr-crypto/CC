

// Lets go to the next level
// AIM CM at CF *__* asap
// Hit A,B,C and D faster and reach Candidate Master
// template taken from Striver_79
// Remember you were also a novice when you started,
// hence never be rude to anyone who wants to learn something
// Never open a ranklist untill and unless you are done with solving problems, wastes 3/4 minuts
// Donot treat CP as a placement thing, love it and enjoy it, you will succeed for sure.
// Any doubts or want to have a talk, contact https://www.facebook.com/raj.striver
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
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF LLONG_MAX

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
void solve()
{
    ll a[6];
    a[0] = 4, a[1] = 8, a[2] = 15, a[3] = 16, a[4] = 23, a[5] = 42;
    ll res[4];
    forn(i, 4)
    {
        cout << "? 1 " << i + 2 << endl;
        cin >> res[i];
    }
    ll ans[6];
    forn(i, 6)  
    {
        forsn(j, i + 1, 6)
        {
            if (a[i] * a[j] == res[0])
            {
                ans[0] = a[i], ans[1] = a[j];
            }
        }
    }
    forn(i, 3)
    {
        ans[i + 2] = res[i + 1] / ans[0];
        bool bo = false;
        forn(j, 6) if (a[j] == ans[i + 2]) bo = true;
        if (!bo || res[i + 1] % ans[0] != 0 || ans[i + 2] == ans[0] || ans[i + 2] == ans[1])
        {
            swap(ans[0], ans[1]);
        }
        ans[i + 2] = res[i + 1] / ans[0];
    }
    ans[5] = 0;
    forn(i, 6) ans[5] += a[i];
    forn(i, 5) ans[5] -= ans[i];
    cout << "! ";
    forn(i, 6) cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    solve();
    // vll arr(6);
    // arr[0] = 4, arr[1] = 8, arr[2] = 15, arr[3] = 16, arr[4] = 23, arr[5] = 42;
    // sll s;
    // s.insert(4);
    // s.insert(8);
    // s.insert(15);
    // s.insert(16);
    // s.insert(23);
    // s.insert(42);
    // ll i, j;
    // vll ans(6);
    // rep(i, 4)
    // {
    //     cout << "? " << (i + 1) << ' ' << (i + 1) << endl;
    //     cout.flush();
    //     ll x;
    //     cin >> x;
    //     arr[i] = sqrt(x);
    // }
    // rep(i, 4)
    // {
    //     s.erase(arr[i]);
    // }
    // cout << "! ";
    // rep(i, 4)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << *s.begin() << ' ' << *s.rbegin() << endl;
    // cout.flush();
}