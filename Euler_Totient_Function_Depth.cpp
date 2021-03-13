#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
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
    ll range = 1e6;
    vector<int> phi(range + 1);
    ll i, j;
    phi[0] = 0;
    phi[1] = 1;
    for (i = 2; i <= range; i++)
    {
        phi[i] = i;
    }
    for (i = 2; i <= range; i++)
    {
        if (phi[i] == i)
        {
            for (j = i; j <= range; j+=i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }
    vector<int> depth(range + 1, 0);
    for (i = 2; i <= range; i++)
    {
        ll temp = i;
        while (phi[temp] != 1)
        {
            depth[i]++;
            temp = phi[temp];
        }
    }
    // ll r[20][range+1]={0};
    // for(i=1;i<20;i++)
    // {
    //     ll x=0;
    //     for(j=0;j<=range;j++)
    //     {
    //         if(depth[j]==i)
    //         x++;
    //         r[i][j]=x;
    //     }
    // }
    vector<pair<ll,vector<ll>> > arr(20,0);
    for(i=1;i<20;i++)
    {
        ll x=0;
        for(j=0;j<=range;j++)
        {
            if(depth[j]==i)
            x++;
            arr[i].pb(j);
        }
    }

    while (t--)
    {
        ll low,high;
        ll z;
        cin>>low>>high>>z;
        cout<<(r[z][high]-r[z][low-1])<<endl;
    }
}