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
// //         map<ll, ll> m;
// //         ll i = 2;
// //         for (i = 2; i * i <= n; i++)
// //         {
// //             ll count = 0;
// //             if (n % i == 0)
// //             {
// //                 while (n % i == 0)
// //                 {
// //                     count++;
// //                     n /= i;
// //                 }
// //             }
// //             if (count > 0)
// //                 m[i] = count;
// //         }
// //         if (m.size() >= 3)
// //         {
// //             cout << "YES\n";

// //         }
// //     }
// // }
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
//         ll i = 2;
//         ll count = 0;
//         ll p1=0, p2=0, p3=0;
//         bool flag = true;
//         if (n <= 23)
//             cout << "NO\n";
//         else
//         {
//             for (i = 2; i * i <= n; i++)
//             {
//                 if (n % i == 0)
//                 {
//                     count++;
//                     if (count == 1)
//                         p1 = i;
//                     else if (count == 2)
//                     {
//                         p2 = i;
//                         n /= p1;
//                         if (n % p2 == 0)
//                         {
//                             p3 = n / p2;
//                         }
//                         else
//                         {
//                             flag = false;
//                         }
//                         break;
//                     }
//                 }
//             }

//             if (p1 == p2 || p1 == p3 || p2 == p3)
//                 cout << "NO\n";
//             else if (count == 0)
//                 cout << "NO\n";
//             else if (flag)
//             {
//                 cout << "YES\n";
//                 cout << p1 << " " << p2 << " " << p3 << endl;
//             }
//             else
//                 cout << "NO\n";
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
        set<ll> used;
        ll i;
        cin>>n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0&&!used.count(i))
            {
                used.insert(i);
                n/=i;
                break;
            }
        }
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0&&!used.count(i))
            {
                used.insert(i);
                n/=i;
                break;
            }
        }
        if(used.size() <2ll||used.count(n)||n==1)
        cout<<"NO\n";
        else 
        {
            used.insert(n);
            cout<<"YES\n";
            for(ll x:used)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}