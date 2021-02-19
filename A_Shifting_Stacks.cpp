#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum[n] = {0};
        ll arr[n];
        vector<ll> p;
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        sum[0] = arr[0];
        for (i = 1; i < n; i++)
            sum[i] = sum[i - 1] + arr[i];
        //     ll x = 0;
        //     while (sum > 0)
        //     {
        //         sum -= x;
        //         p.pb(x);
        //         x++;
        //         if (sum == 0||p.size()>=n)
        //             break;
        //     }
        //     if(p.size()>=n)
        //     cout<<"YES\n";
        //     else
        //     cout<<"NO\n";
        ll x = 0;
        // for(i=1;i<n;i++)
        // {
        //     arr[i]+=arr[i-1];
        //     arr[i-1]=min(sum[i],x);
        //     x++;

        // }
        // bool flag=true;
        // rep(i,n-1)
        // {
        //     if(arr[i]>=arr[i+1])
        //     {
        //         flag=false;
        //          cout<<"NO\n";
        //         break;
        //     }

        // }
        // if(flag)
        // cout<<"YES\n";
        bool flag=true;
        for (i = 0; i < n; i++)
        {
            ll s =( i * (i + 1)) / 2;
            if (sum[i] >= s)
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
