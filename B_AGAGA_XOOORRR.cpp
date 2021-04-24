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
        cin >> n;
        ll arr[n];
        ll i;
        rep(i, n) cin >> arr[i];
        ll x1 = 0, x2 = 0;
        // rep(i,n-1)
        // {
        //     x1^=arr[i];
        // }
        // rep(i,n-2)
        // {
        //     x2^=arr[i+1];
        // }
        // if(x1==x2)
        // cout<<"YES\n";
        // else
        // // cout<<"NO\n"
        // ll mask[32];
        // memset(mask,0,sizeof(mask));
        // rep(i,n-1)
        // {
        //     ll temp=arr[i];
        //     for(ll j=0;j<32;j++)
        //     {
        //         if(arr[i]&(1<<j))
        //         {
        //             mask[j]++;
        //         }
        //     }
        // }
        ll b[n];
        rep(i, n) b[i] = arr[i];

        // ll j = 2;
        // while (j < n)
        // {
        //     for (i = 0; i < n - j; i += 1)
        //     {
        //         arr[i] = arr[i] ^ arr[i + j];
        //     }
        //     bool flag = true;
        //     rep(i, n - j - 1)
        //     {
        //         if (arr[i] != arr[i + 1])
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }

        // }
        ll j = 2;
        ll k=0;
        while (k<n)
        {
            if (n & 1)
            {
                bool flag = true;
                ll val = arr[0] ^ arr[2];
                for (i = 0; i < n - j; i++)
                {
                    if (val != (arr[i] ^ arr[i + 2]))
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<"YES\n";
                    break;
                }
                j*=2;
            }
            else
            {
                for()
                for(i=0;i<n-j;i++)
                {
                    for
                }
            }
        }
    }
}