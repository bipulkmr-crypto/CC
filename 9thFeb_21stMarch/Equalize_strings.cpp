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
//     // ll t;
//     // cin>>t;
//     // while(t--)
//     // {
//     ll n;
//     cin >> n;
//     ll c1 = 0, c2 = 0;
//     string s1, s2;
//     cin >> s1 >> s2;
//     ll i;
//     rep(i, n)
//     {
//         if (s1[i] != s2[i])
//             c1++;
//     }
//     if (c1 == n)
//         cout << n << endl;
//     else
//     {
//         c1 = min(c1, n - c1);
//         cout << c1 << endl;
//     }

//     // }
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
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll i,j;
    ll count=0;
    for(i=0;i<n;i++)
    {
        
        if(s1[i]!=s2[i])
        {
            if(i==0||(i>0&&s1[i-1]==s2[i-1]))
            count++;
        }
        // else if(s1[i]==s2[0])
        // {
        //     count++;
        // }
    }
    // if(count==0)
    // count=1;
    cout<<count<<endl;
}