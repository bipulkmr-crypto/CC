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
//         ll arr[n];
//         ll i;
//         rep(i,n)
//         cin>>arr[i];
//         ll mex=-1;
//         ll sum=0;
//         sort(arr,arr+n);
//         if(arr[i]!=0)
//         mex=0;
//         else 
//         mex=arr[i]+1;
//         sum+=mex;
//         ll count=0;
//         for(i=1;i<n;i++)
//         {
//             if(arr[i]==mex)
//             {
//                 mex+=1;
//             }
//             else
//             {
//                 mex=arr[i]+1;
//             }
//             sum+=mex;
//         }
//         cout<<sum<<endl;

//     }
// }
#include <bits/stdc++.h>

#define index(i, n) for (long long i = 0; i < n; i++)
#define index1(i, n) for (long long i = 1; i <= n; i++)
#define range(i, a, b) for (long long i = a; i < b; i++)
#define indexD(i, n) for (long long i = n - 1; i >= 0; i--)
#define index1D(i, n) for (long long i = n; i >= 1; i--)
#define rangeD(i, a, b) for (long long i = a - 1; i >= b; i--)
#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << (x) << '\n'
#define trace(x) cout << '>' << #x << ':' << x << endl;
#define trace2(x, y) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << endl;
#define trace3(x, y, z) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << endl;
#define trace4(x, y, z, w) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << " | " << #w << ':' << w << endl;
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define First first
#define Second second
#define MOD 1000000007
#define INF (9223372034707292159ll)

typedef unsigned long long ull;
typedef long long int ll;

using namespace std;

ll factorial(ll n)
{
        ll res = 1, i;
        for (i = 2; i <= n; i++)
                res = (res * i) % MOD;
        return res;
}

int main()
{
        fast_io;

        ll t, n, m, k, x, y, r, ans, c;
        cin >> t;
        while (t--) {
                cin >> n;
                map<ll, ll> arr;
                index(i, n)
                {
                        cin >> x;
                        arr[x]++;
                }

                ll mex = 0;
                ll ans = 1;
                for (auto it : arr) {
                        if (it.first == mex)
                                mex++;
                        if (it.first > mex)
                                break;
                }
                ll i = 0;
                for (auto it : arr) {
                        if (it.first < mex) {
                                ans = (ans * factorial(it.second)) % MOD;
                                i += it.second;
                        } else
                                break;
                }
                print((ans * factorial(n - i)) % MOD);
        }
        return 0;
}