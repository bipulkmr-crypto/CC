// // // #include <iostream>
// // // #include <map>
// // // #include <cstdio>
// // // #include <vector>
// // // #include <time.h>
// // // #include <utility>
// // // #include <cmath>
// // // #include <cstring>
// // // #include <algorithm>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define ff first
// // // #define ss second
// // // #define rep(i,n) for(i=0;i<n;i++)
// // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // #define gi(n) scanf(%d,&n)
// // // #define gl(n) scanf(%d,&n)
// // // #define pi(n) printf(%d,n)
// // // #define pl(n) printf(%lld,n)
// // // int main()
// // // {
// // //     ll t;
// // //     cin>>t;
// // //     while(t--)
// // //     {
// // //         ll n;
// // //         cin>>n;
// // //         ll arr[n];
// // //         map<ll,bool> m;
// // //         ll i,j;
// // //         rep(i,n)
// // //         {
// // //             cin>>arr[i];
// // //             m[arr[i]]=true;

// // //         }

// // //         ll p[n];
// // //         ll maxpos=n-1;
// // //         ll max=arr[n-1];
// // //         for(i=n-2;i>=0;i--)
// // //         {
// // //             if(max<arr[i]&&m[arr[i]])
// // //             {
// // //                 maxpos=i;
// // //                 max=arr[i];
// // //             }
// // //             for(j=maxpos;j<n;j++)
// // //             {
// // //                 if(m[arr[j]])
// // //                 cout<<arr[j]<<" ";
// // //                 m[arr[j]]=false;
// // //             }
// // //             for(j=0;j<maxpos;j++)
// // //             {
// // //                 if(m[arr[j]])
// // //                 cout<<arr[j]<<" ";
// // //                 m[arr[j]]=false;
// // //             }
// // //         }
// // //         cout<<endl;
// // //     }
// // // }
// // #include <iostream>
// // #include <map>
// // #include <cstdio>
// // #include <vector>
// // #include <time.h>
// // #include <utility>
// // #include <cmath>
// // #include <cstring>
// // #include <algorithm>
// // using namespace std;
// // typedef long long int ll;
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define ss second
// // #define rep(i,n) for(i=0;i<n;i++)
// // #define fu(i,a,n) for(i=a;i<=n;i++)
// // #define fd(i,n,a) for(i=n;i>=a;i--)
// // #define gi(n) scanf(%d,&n)
// // #define gl(n) scanf(%d,&n)
// // #define pi(n) printf(%d,n)
// // #define pl(n) printf(%lld,n)
// // int main()
// // {
// //     ll t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         ll n;
// //         cin>>n;
// //         vector<ll> a(n),b(n);
// //         ll i;
// //         ll j=0;
// //         vector<ll> c;
// //         map<ll,bool> m;
// //         rep(i,n)
// //         {
// //             cin>>a[i];
// //             b[i]=a[i];
// //             m[a[i]]=true;
// //         }
// //         sort(b.rbegin(),b.rend());
// //         for(i=n--1;i>=0;i--)
// //         {
// //             if(a[i]!=b[j])
// //             c.pb(a[i]);
// //             m[a[i]]=false;
// //         }
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
// #include<queue>
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
//         priority_queue<ll,vector<ll> > p;
//         ll n;
//         cin>>n;
//         ll i;
//         rep(i,n)
//         {
//             ll inp;
//             cin>>inp;
//             p.push(inp);
//         }
//         rep(i,n)
//         {
//             cout<<p.top()<<" ";
//             p.pop();
//         }
//         cout<<endl;
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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n), pos(n + 1);
        ll i;
        rep(i, n)
        {
            cin >> arr[i];
        }
        reverse(arr.begin(), arr.end());
        for (i = 0; i < n; i++)
        {
            pos[arr[i]] = i;
        }
        ll ptr = 0;
        vector<ll> ans;
        for (i = n ; i >= 1; i--)
        {
            if (pos[i] != -1)
            {
                vector<ll> x;
                for (; ptr <= pos[i]; ++ptr)
                {
                    x.pb(arr[ptr]);
                    pos[arr[ptr]] = -1;
                }
                reverse(x.begin(), x.end());
                for (auto j : x)
                {
                    ans.pb(j);
                }
            }
        }
        for(auto y:ans)
        {
            cout<<y<<" ";
        }
        cout << endl;
    }
}