// // #include <iostream>
// // #include <map>
// // #include <cstdio>
// // #include <set>
// // #include <vector>
// // #include <time.h>
// // #include <utility>
// // #include <cmath>
// // #include <cstring>
// // #include <algorithm>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define all(v) v.begin(), v.end()
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // int main()
// // {
// //     ll t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;
// //         vector<pair<ll, ll>> arr;
// //         ll delay[n];
// //         ll i;
// //         rep(i, n)
// //         {
// //             ll a, b;
// //             cin >> a >> b;
// //             arr.pb(make_pair(a, b));
// //         }

// //         rep(i, n)
// //         {
// //              cin >>delay[i];
// //             //  if(i!=0)
// //             //  delay[i]+=delay[i-1];
// //         }
               
// //         // ll current = arr[0].ff + delay[0];
// //         ll current=0;
// //         for(i=0;i<n-1;i++)
// //         {
// //             // current+=arr[i].ff+delay[i];
// //             current = arr[i].ff+delay[i];
// //             
// //                 current += (ll)(ceil(arr[i].ss - arr[i].ff) / 2.0);
// //             
// //         }
// //         //  for(i=0;i<n-1;i++)
// //         // {
// //         //     // current+=arr[i].ff+delay[i];
// //         //     current = arr[i].ff+delay[i];
// //         //     if (current < arr[i].ss)
// //         //     {
// //         //         delay[i+1] -= (ll)(ceil(arr[i].ss - arr[i].ff) / 2.0);
// //         //     }
// //         // }
// //         // current=arr[n-1].ff+delay[n-1];
// //         current+=delay[n-1];
// //         cout << current << endl;
// //     }
// // }
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
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<pair<ll,ll> > arr(n+1);
//         ll i;
//         ll delay[n+1]={0};
//         ll curr=0;
//         fu(i,1,n)
//         {
//             ll a,b;
//             cin>>a>>b;
//             arr[i]=make_pair(a,b);
//         }
//         fu(i,1,n)
//         cin>>delay[i];
//         fu(i,1,n-1)
//         {
//             curr+=arr[i].ff-arr[i-1].ss+delay[i];
//             // if(curr<arr[i].ss)
//             // {
//             //     delay[i+1]+=ceil((arr[i].ss-arr[i].ff)/2.0);
//             // }
//             // else
//             // {
//             //     delay[i+1]+=arr[i].ss-arr[i].ff;
//             // }
//             delay[i+1]+=ceil((arr[i].ss-arr[i].ff)/2.0);
//         }
//         curr=arr[n].ff+delay[n];
//         cout<<curr<<endl;

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
        vector<pair<ll,ll> > arr;
        ll delay[n];
        ll i;
        rep(i,n)
        {
            ll a,b;
            cin>>a>>b;
            arr.push_back(make_pair(a,b));
        }
        rep(i,n)    cin>>delay[i];
        ll arrival=0;
        ll dept=0;
        for(i=0;i<n;i++)
        {
            arrival=arr[i].ff+delay[i];
            if(i!=0)
            {
                arrival+=(dept-arr[i-1].ss);
            }
            dept=max(arrival+(ll)ceil((arr[i].ss-arr[i].ff)/2.0),arr[i].ss);
        }
        cout<<arrival<<endl;
    }
}