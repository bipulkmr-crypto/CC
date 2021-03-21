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
// // #include <set>
// // #include <bits/stdc++.h>
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // #define gl(n) scanf(% d, &n)
// // #define pi(n) printf(% d, n)
// // #define pl(n) printf(% lld, n)
// // bool search(vector<ll>::iterator it1, vector<ll>::iterator it2, ll x)
// // {
// //     for (; it1 != it2; it1++)
// //     {
// //         if ((*it1) == x)
// //             return true;
// //     }
// //     return false;
// // }
// // int main()
// // {
// //     ll n;
// //     cin >> n;
// //     ll sum = n * (n + 1);
// //     sum /= 4;
// //     ll i;
// //     vector<ll> v1;
// //     vector<ll> v2;
// //     ll tempsum=0;
// //     if (n % 4 == 0)
// //     {
// //         cout << "YES\n";
// //         for (i = 0; i < n/2; i++)
// //         {
// //             if (i % 2)
// //             {
// //                 v1.pb(i + 1);
// //                 v1.pb(n - i);
// //             }
// //             else
// //             {
// //                 v2.pb(i + 1);
// //                 v2.pb(n - i);
// //             }
// //         }
// //         cout << v1.size() << endl;
// //         for (ll x : v1)
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //         cout << v2.size() << endl;
// //         for (ll x : v2)
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //     }
// //     else if (n % 4 == 3)
// //     {
// //         cout << "YES\n";
// //         v1.pb(n);
// //         i = 0;
// //         while (tempsum < sum)
// //         {
// //             v2.pb(i + 1);
// //             v2.pb(n - 1 - i);
// //             tempsum+=n;
// //             if (tempsum == sum)
// //                 break;
// //             i++;
// //         }
// //         sort(v2.begin(),v2.end());
// //         for (i = 1; i <= n; i++)
// //         {
// //             if (!binary_search(v2.begin(),v2.end(),i))
// //             {
// //                 v1.pb(i);
// //             }
// //         }
// //         cout << v1.size() << endl;
// //         for (ll x : v1)
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //         cout << v2.size() << endl;
// //         for (ll x : v2)
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //     }
// //     else
// //         cout << "NO\n";
// // }
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
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// #define gl(n) scanf(%d,&n)
// #define pi(n) printf(%d,n)
// #define pl(n) printf(%lld,n)
// int main()
// {
//     ll n;
//     cin>>n;
//     ll sum=n*(n+1);
//     vector<ll> v1;
//     vector<ll> v2;
//     ll psum=0;
//     ll i,px=0;
//     if(sum%4!=0)
//     {
//         cout<<"NO\n";
//     }
//     else
//     {

//         sum/=2;
//         while(psum<sum)
//         {

//         }
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
#include <set>
#include <bits/stdc++.h>
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
bool search(vector<ll>::iterator it1, vector<ll>::iterator it2, ll x)
{
    for (; it1 != it2; it1++)
    {
        if ((*it1) == x)
            return true;
    }
    return false;
}
int main()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1);
    sum /= 4;
    ll i;
    ll tempsum=0;
    string s = "";
    vector<ll> v1;
    vector<ll> v2;
    if (n % 4 == 0)
    {
        cout << "YES\n";
        for (i = 0; i < n / 2; i++)
        {
            if (i % 2)
            {
                v1.pb(i + 1);
                v1.pb(n - i);
            }
            else
            {
                v2.pb(i + 1);
                v2.pb(n - i);
            }
        }
        cout << v1.size() << endl;
        for (ll x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (ll x : v2)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    else if (n % 4 == 3)
    {
        cout << "YES\n";
        v2.pb(n);
        tempsum+=n;
        i = 0;
        while (tempsum < sum)
        {
            v2.pb(i + 1);
            v2.pb(n - 1 - i);
            tempsum+=n;
            if (tempsum == sum)
                break;
            i++;
        }
        ll k = 0;
        sort(v2.begin(),v2.end());
        cout << v2.size() << endl;
        for(i=1;i<=n;i++)
        {
            if(v2[k]==i&&k<v2.size())
            {
                cout<<i<<" ";
                k++;
            }
            else
            {
                s+=to_string(i)+" ";
            }
        }
        cout << endl;
        cout << (n - v2.size()) << endl;
        cout << s << endl;
        cout << endl;
    }

    else
        cout << "NO\n";
}