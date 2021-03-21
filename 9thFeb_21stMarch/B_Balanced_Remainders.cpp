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
        ll arr[n];
        ll i;
        map<ll, ll> m;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            m[inp % 3]++;
        }
        ll val = n / 3;
        ll ans = 0;
        while (!((m[0] == m[1]) && (m[1] == m[2])))
        {
            // for(i=0;i<3;i++)
            // {
            //     if(m[i]<val)
            //     {
            //         m[i]++;
            //     }
            //     else
            //     m[i]--;
            //     ans++;
            // }
            if (m[0] < val)
            {
                if (m[2] > val)
                {
                    ans += 1;
                    m[0]++;
                    m[2]--;
                }

                else if (m[1] > val)
                {
                    ans += 2;
                    m[1]--;
                    m[0]++;
                }
            }
            else if (m[1] < val)
            {
                if (m[0] > val)
                {
                    m[1]++;
                    ans+=1;
                    m[0]--;
                }
                else if(m[2]>val)
                {
                    m[2]--;
                    ans+=2;
                    m[1]++;
                }
            }
            else if(m[2]<val)
            {
                if(m[0]>val)
                {
                    m[0]--;
                    ans+=2;
                    m[2]++;
                }
                else if(m[1]>val)
                {
                    m[1]--;
                    ans+=1;
                    m[2]++;
                }
            }
        }
        cout<<ans<<endl;
    }
}