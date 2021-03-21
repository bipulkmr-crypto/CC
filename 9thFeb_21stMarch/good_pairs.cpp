// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
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
//         ll ceven = 0, codd = 0;
//         rep(i, n)
//         {
//             cin >> arr[i];
//             if (arr[i] % 2)
//                 codd++;
//             else
//                 ceven++;
//         }
//         if (n == 1)
//             cout << 0 << endl;
//         else if (n == 2)
//         {
//             if (arr[0] == 1 && arr[1] == 2 || arr[0] == 2 && arr[1] == 1)
//                 cout << 1 << endl;
//             else
//                 cout << 0 << endl;
//         }
//         else
//         {
//             sort(arr, arr + n);
//             ll count = 0;
//             rep(i, n)
//             {
//                 if (arr[i] == 2)
//                     count += codd;
//                 if (arr[i] == 2)
//                 {
//                     if (binary_search(arr, arr + n, 4))
//                     {
//                         count++;
//                     }
//                 }
//                 else if (arr[i] % 2 == 0 && (arr[i] / 2) & 1 && binary_search(arr, arr + n, arr[i] / 2) && arr[i] != 0)
//                     count++;
//             }
//             cout << count << endl;
//         }
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i,n)
        cin>>arr[i];
        ll ans=0;
        ll j;
        rep(i,n)
        {
            rep(j,n)
            {
                if((__gcd(arr[i],arr[j])==arr[i]/2&&arr[i]%2==0)||(__gcd(arr[i],arr[j])==arr[j]/2&&arr[j]%2==0))
                {
                    ans++;
                }
            }
        }
        cout<<(ans/2)<<endl;
    }
}