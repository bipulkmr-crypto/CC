// #include <iostream>
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
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// ll c = -1;
// ll solve(ll arr[], ll high)
// {
//     c++;
//     if (high == 0)
//         return (arr[high] - c);
//     else
//     {
//         ll sum = 0;
//         ll i;
//         ll min = arr[0], minpos = 0;
//         rep(i, high)
//         {
//             if (arr[i] <= min)
//             {
//                 min = arr[i];
//                 minpos = i;
//             }
//         }
//         sum = (min-c) * (high) + solve(arr, minpos) ;
        
//         return (sum);
//     }
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll arr[n];
//         ll i;
//         rep(i, n)
//                 cin >>
//             arr[i];

//         ll ans = solve(arr, n);
//         cout << ans << endl;
//     }
// }
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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum[n];
        ll i;
        rep(i,n)
        {
            cin>>arr[i];
        }
        sum[0]=arr[0];
        rep(i,n-1)
        {
            sum[i+1]=min(arr[i],arr[i+1]);
            arr[i+1]=min(arr[i],arr[i+1]);
        }
        ll ans=0;
        rep(i,n)
        {
            ans+=sum[i];
        }
        cout<<ans<<endl;
    }
}