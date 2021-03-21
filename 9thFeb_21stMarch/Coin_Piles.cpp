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
// ll extgcd(ll a, ll b, ll &x, ll &y)
// {
//     if (b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     ll x1, y1;
//     ll d = extgcd(b, b % a, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         ll x, y;
//         // double x1, y1;
//         // x = (2 * b - a) / 3;
//         // y = (2 * a - b) / 3;
//         // x1 = (2 * b - a) / 3.0;
//         // y1= (2 * a - b) / 3.0;
//         // if((x-x1)==0&&(y-y1)==0)
//         // // if (x >= 0 && y >= 0)
//         //     cout << "YES\n";
//         // else
//         //     cout << "NO\n";
//         // ll g=extgcd(2,1,x,y);
//         // x*=2/g;
//         // y*=1/g;
//         // if((x+2*y)==b)
//         // {
//         //     cout<<"YES\n";
//         // }
//         // else
//         // {
//         //     cout<<"NO\n";
//         // }
//         bool flag = true;
//         while (a != 0 && b != 0)
//         {

//            if(true)
//             {
//                 if(a>b)
//                 {
//                     a-=2;
//                     b-=1;
//                 }
//                 else 
//                 {
//                     a-=1;
//                     b-=2;
//                 }
                
//             else if ((a == 1 == b) || (b == 1 && a == 0) || (a == 1 && b == 0))
//             {
//                 flag = false;
//                 cout << "NO\n";
//                 break;
//             }
//         }
//         if(flag == true)
//         cout<<"YES\n";
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
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        // while(!((a==1&&1==b)||(a==0&&b==1)||(a==1&&b==0)||(a==0&&b==0)||(a<0)||(b<0)))
        // {
        //     if(a>b)
        //     {
        //         a%=2;
        //         b=0;
        //     }
        //     else
        //     {
        //         a=0;
        //         b%=2;
        //     }
        // }
        // if(((a==1&&1==b)||(a==0&&b==1)||(a==1&&b==0)||(a<0)||(b<0)))
        // cout<<"NO\n";
        // else
        // {
        //     cout<<"YES\n";
        // }
        if(a<b)
        {
            swap(a,b);
        }
        if(a>2*b)
        cout<<"NO\n";
        else if((a+b)%3==0)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}