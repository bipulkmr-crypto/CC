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
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        set<ll> s;
        ll i;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            s.insert(inp);
        }
        ll j = 0;
        ll check = -1;
        for (auto x : s)
        {
            if(x!=j)
            {
                check=j;
                break;
            }
            j++;
        }
        if(k==0)
        {
            cout<<s.size() <<endl;
        }
        else if(check == -1)
        {
            cout<<(s.size()+k)<<endl;
        }
        else 
        {
            ll ma=*(--s.end());
            ll p=ceil((ma+check)/2.0);
            s.insert(p);
            cout<<(s.size())<<endl;
        }
    }
}