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
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,q;
//         cin>>n>>q;
//         vector<ll> v;
//         ll i;
//         rep(i,n)
//         {
//             ll inp;
//             cin>>inp;
//             v.push_back(inp);
//         }
//         sort(v.begin(),v.end());
//         vector<pair<ll,ll> > freq(n,0);
//         for(i=0;i<n;i++)
//         {
//             freq[i].first=v[i];
//             freq[i].second++;
//         }
//         while(q--)
//         {
//             ll ty,num;
//             cin>>ty>>num;
//             if(ty==1)
//             {
//                 ll inp;
//                 cin>>inp;
//                 v.pb(inp);
//             }
//             else
//             {

//                 if(binary_search(v.begin(), v.end(),num));
//                 {
//                     ll ans=fr
//                 }
//             }
//         }
//     }
//     return 0;
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
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        map<ll, ll> m;
        ll i;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            m[inp]++;
        }
        while (q--)
        {
            ll type, num;
            cin >> type >> num;
            if (type == 1)
            {
                m[num]++;
            }
            else if (type == 2)
            {
                if (m[num] == 0)
                    cout << -1 << endl;
                else
                {
                    cout << m[num] << endl;
                    m[num]--;
                }
            }
        }
    }
}