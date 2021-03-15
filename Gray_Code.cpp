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
// #define pl(n)                     \
//     printf(% lld, n) int g(int n) \
//     {
// return n ^ (n >> 1);
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     ll i, j;
//     for (i = 0; i < (1 << n); i++)
//     {
//         // for(j=0;j<n;j++)
//         // {
//         //     if(i&(1<<j))
//         //     {
//         //         cout<<1;
//         //     }
//         //     else
//         //     {
//         //         cout<<0;
//         //     }
//         // }
//         cout << cout << endl;
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
#include<bitset>
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
   ll m;
ll gray(ll n)
{
    return (n ^ (n >> 1));
}
// ll out(ll n)
// {
//     string s="";
//     if(n==0)
//     {
//         ll i;
//         rep(i,log2(m)+1)    s+="0";
//         cout<<s<<endl;return 0;
//     }
//     else if(n==1)
//     {
//         ll i;
//         rep(i,log2(m))    s+="0";
//         // cout<<endl;return 0;
//     }
//     while (n > 0)
//     {
//         if (n & n-1)
//            s+="1";
//         else
//             s+="0";
//         n>>=1;
//     }
//     cout << s<<endl;
//     return 0;
// }
// void out(ll n,ll bits)
// {
//     ll i=1<<bits;
//     for(;i>0;i/=2)
//     {
//         if(n&i)
//         cout<<1;
//         else
//         cout<<0;
//     }
//     cout<<endl;
// }
string decimalToBinary(ll n) 
{ 
    //finding the binary form of the number and  
    //coneverting it to string.  
    string s = bitset<64> (n).to_string(); 
      
    //Finding the first occurance of "1" 
    //to strip off the leading zeroes. 
    const auto loc1 = s.find('1'); 
      
    // if(loc1 != string::npos) 
    //     return s.substr(loc1); 
     string ans="";
     ll pos=log2(m)+1;
     for(ll i=64-m;i<64;i++)
     {
         ans+=s[i];
     }
     return ans;
    return "0"; 
} 
int main()
{
 
    cin >> m;
    ll i;
    for (i = 0; i < (1 << m); i++)
    {
        ll res = gray(i);
        string s=decimalToBinary(res);
        cout<<s<<endl;
    }
}