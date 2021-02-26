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
bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.ff == p2.ff)
    {
      return(p1.ss<p2.ss);
    }
    else
    {
        return (p1.ff >p2.ff);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<pair<ll, ll>> arr;
        map<ll,ll> m;
                ll i;
        cin >> n;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            arr.pb(make_pair(inp,(i+1)));
            // time.pb(make_pair((i+1),0));
        }
        sort(arr.begin(), arr.end(), comp);
        for (i = 0; i < n; i++)
        {
            m[arr[i].ss]=(i+1);
        }
        map<ll, ll>::iterator it;
        it=m.begin();
        for(it=m.begin();it!=m.end();it++)
        {
            cout<<it->second<<" ";
        }
        // rep(i,n)
        // {
        //     time.ss=
        // }
        cout<<endl;
    }
}

//     }#include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// #define gl(n) scanf(%d,&n)
// #define pi(n) printf(%d,n)
// #define pl(n) printf(%lld,n)
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll,ll> arr;
//         for()
// }