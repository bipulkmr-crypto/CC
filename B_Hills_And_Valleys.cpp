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
        ll n;
        ll i;
        cin >> n;
        ll arr[n];
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll count = 0;
        vector<ll> pos;
        for (i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                count++;
                pos.pb(i);
            }
            else if(arr[i] <arr[i-1]&&arr[i]<arr[i+1])
            {
                count++;
                // pos.pb(i);
            }
        }
        if (pos.size() == 0)
        {
            cout << count << endl;
        }
        else if (pos.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            bool flag=false;
            for (i = 0; i < pos.size() - 1; i++)
            {
                if ((pos[i+1]-pos[i])==2)
                {
                    count-=3;
                    flag=true;
                    break;
                }
            }
            if (flag)
            {
                cout<<count<<endl;
            }
            else 
            {
                count-=2;
                cout<<count<<endl;
            }
        }
    }
}