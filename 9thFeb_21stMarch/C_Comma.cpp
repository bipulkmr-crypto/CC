// #include <iostream>
// #include <map>
// #include <cstdio>
// #include<set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     fast
//     ll n;
//     cin>>n;
//     ll ans=0;
//     if(n<(ll)(1e3))
//     {
//         ans=0;
//     }
//     else if(n>=(ll)1e3&&n<(ll)(1e6))
//     {
//         ans=(n-999);
//     }
//     else if(n>=(ll)1e6&&n<(ll)(1e9))
//     {
//         ans=(1e6-1e3)+(2*(n-999999));
//     }
//     else if(n>=(ll)1e9&&n<(ll)(1e12))
//     {
//          ans=(1e6-1e3)+2*(1e9-1e6)+(3*(n-(ll)999999999));
//     }
//      else if(n>=(ll)1e12&&n<=(ll)(1e15))
//     {
//          ans=(1e6-1e3)+2*(ll)(1e9-1e6)+((4ll)*(n-(ll)999999999999))+3*(ll)(1e12-1e9);
//     }
//     cout<<ans<<endl;
// }
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <time.h>
#include <utility>
#include <vector>
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
    fast ll n;
    cin >> n;
    ll ans = 0;
    if (n < 1000)
        cout << 0 << endl;
    else if(n==1000)
    cout<<1<<endl;
    else
    {
        ll d10 = 1000;
        while (d10 -1 < n)
        {
            ans += n - d10 + 1;
            d10 *= 1000;
        }
        cout << ans << endl;
    }
}