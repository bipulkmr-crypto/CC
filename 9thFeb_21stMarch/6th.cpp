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
//         rep(i, n)
//                 cin >>
//             arr[i];
//         ll count1 = 0, count2 = 0, count3 = 0;
//         ll j;
//         for (j = 0; j <= n - 3; j += 3)
//         {
//             if (arr[j] == 2)
//             {
//                 for (i = j; i < j + 3; i++)
//                 {
//                     if (i % 3 == 1)
//                     {
//                         if (arr[i] != 0)
//                             count1++;
//                     }
//                     else if (i % 3 == 2)
//                     {
//                         if (arr[i] != 1)
//                             count1++;
//                     }
//                 }
//             }
//             else if (arr[j] == 0)
//             {
//                 for (i = j; i < j + 3; i++)
//                 {
//                     if (i % 3 == 1)
//                     {
//                         if (arr[i] != 1)
//                             count2++;
//                     }
//                     else if (i % 3 == 2)
//                     {
//                         if (arr[i] != 2)
//                             count2++;
//                     }
//                 }
//             }
//             else if (arr[j] == 1)
//             {
//                 for (i = j; i < j + 3; i++)
//                 {
//                     if (i % 3 == 1)
//                     {
//                         if (arr[i] != 2)
//                             count3++;
//                     }
//                     else if (i % 3 == 2)
//                     {
//                         if (arr[i] != 0)
//                             count3++;
//                     }
//                 }
//             }
//         }

//         // for(i=0;i<n-3;i++)
//         // {
//         //     ll a1=arr[i],a2=arr[i+1]
//         // }
//         ll ans;
//         if (count1 == 0 && count2 == 0 && count3 == 0)
//             ans = 0;
//         else
//         {
//             if(count1==0)
//             count1=1e6;
//             if(count2==0)
//             count2=1e6;
//             if(count3==0)
//             count3=1e6;
//             ans = min({count1, count2, count3});
//         }

//         cout << ans << endl;
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
        ll n;
        cin >> n;
        ll arr[n];
        ll i;
        rep(i, n)
                cin >>
            arr[i];
        ll count1 = 0, count2 = 0, count3 = 0;
        ll j;
        for (i = 0; i <n; i +=1)
        {
            if (i % 3 == 0)
            {
                if (arr[i] != 0)
                    count1++;
            }
            else if (i % 3 == 2)
            {
                if (arr[i] != 1)
                    count1++;
            }

            if (i % 3 == 1)
            {
                if (arr[i] != 1)
                    count2++;
            }
            else if (i % 3 == 2)
            {
                if (arr[i] != 2)
                    count2++;
            }
            if (i % 3 == 1)
            {
                if (arr[i] != 2)
                    count3++;
            }
            else if (i % 3 == 2)
            {
                if (arr[i] != 0)
                    count3++;
            }
        }
        cout<<(min({count1,count2,count3}))<<endl;
    }
}