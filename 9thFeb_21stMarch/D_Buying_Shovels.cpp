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
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k;
//         cin>>n>>k;
//         if(n>k)
//         {
//             if(n%2)
//             cout<<n<<endl;
//             // else if(k>=n/2)
//             // cout<<(2)<<endl;
//             // else
//             // cout<<n<<endl;
//             ll p=2;
//             while(n>1)
//             {
//                 if(k>=n/p)
//                 {
//                     cout
//                 }
//             }
//         }
//         else
//         {
//             cout<<1<<endl;
//         }
//     }
// }
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
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
ll n;
bool good(ll mid)
{
    bool flag = (n % mid == 0) && (n % (n / mid) == 0);
    return flag;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> n >> k;
        //     ll high = k, low = 1, mid;
        //     while (high - low > 1)
        //     {
        //         mid = low + (high - low) / 2;

        //         if (good(mid))
        //         {
        //             high = mid;
        //         }
        //         else
        //         {
        //             low = mid;
        //         }
        //     }
        //     if (good(low))
        //         cout << low << endl;
        //     else
        //         cout << min(high,1ll) << endl;
        // }
        ll ans = n;
        // for (ll i = 1; i * i <= n; i++)
        // {
        //     if (n % i == 0)
        //     {
        //         if (n / i <= k)
        //         {
        //             ans = min(ans, n/i);
        //         }
        //         if (n / i <= k)
        //             ans = min(ans, i);
        //     }
        // }
        for (ll j = 1; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                if (j <= k)
                {
                    ans = min(ans, n / j);
                }

                if (n / j <= k)
                {
                    ans = min(ans, j);
                }
            }
        }

        cout << ans << endl;

    }
}