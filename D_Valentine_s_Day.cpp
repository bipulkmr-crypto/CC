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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll maxi[n+1]={0};
        ll j;
        rep(i,1<<n)
        {
            ll c=0,x=0;
            rep(j,n)
            {
                if(i&1<<j)
                {
                    c++;
                    x^=arr[j];
                }
            }
            maxi[c]=max(maxi[c],x);
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll inp;
            cin>>inp;
            cout<<maxi[inp]<<" ";
        }
        cout<<"\n";
    }
}