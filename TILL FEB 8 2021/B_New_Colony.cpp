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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n + 1] = {0};
        ll i;
        rep(i, n)
                cin >> arr[i + 1];
                bool flag=false;
                while(k>0&&i<n)
                {
                    i=0;
                    if(arr[i]<arr[i+1]&&i<n)
                    {
                        arr[i]+=min(arr[i+1]-arr[i],k);
                        k-=min(arr[i+1]-arr[i],k);
                        i++;
                        flag=true;
                    }
                    else
                    {
                        i++;
                    }
                }
        // for (i = n; i >= 1; i--)
        // {
        //     if (arr[i] > arr[i - 1])
        //     {
        //         if (arr[i] - arr[i - 1] >= k)
        //         {
        //             arr[i - 1] += k;
        //             k -= arr[i] - arr[i - 1];
        //         }
        //         else
        //         {
        //             arr[i - 1] += arr[i] - arr[i - 1];
        //             k -= arr[i] - arr[i - 1];
        //         }
        //     }
        //     if (k == 0)
        //         break;
        // }
        // cout << (n - i + 1) << endl;
        if(flag)
         cout<<(i+1)<<endl;
         else
         cout<<-1<<endl;
    }
}