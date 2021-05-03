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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n] = {-1};
        ll i, j;
        ll p = k;

        if (n%2==1&&(k>(n/2)))
        {
            cout << -1 << endl;
        }
        else if(n%2==0&&(n/2-1)<k)
        cout<<-1<<endl;
        else
        {
            ll x = 1;
            for (i = 0; i < n;)
            {
                arr[i] = (x);
                if (k > 0)
                {
                    i += 2;
                    k--;
                }

                else
                {
                    i++;
                }
                x++;
            }
            ll z=n;
            for (i = 1; i < n; i += 2)
            {
                if (p > 0)
                {
                    arr[i]=z;
                    z--;
                    p--;
                }
            }
            rep(i, n)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}