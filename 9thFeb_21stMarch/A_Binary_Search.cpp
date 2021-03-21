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
// bool check(ll arr[],ll search,ll n)
// {
//     ll low=0,mid,high=n-1;
//     while(high-low>1)
//     {
//         mid=low+(high-low)/2;
//         if(arr[mid]==search)
//         {
//             return true;
//         }
//         else if(search<arr[mid])
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
//     if(arr[low]==search)
//     return true;
//     if(arr[high]=search)
//     return true;
//     return false;
// }
int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll i;
    rep(i, n)
            cin >>
        arr[i];
    while (q--)
    {
        ll search;
        cin >> search;
        bool flag=false;
        ll low = 0, mid, high = n - 1;
        while (high - low > 1)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == search)
            {
                flag=true;
                break;
            }
            else if (search < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if(arr[low]==search)
        flag=true;
        if(arr[high]==search)
        flag=true;
        if(flag)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
    }
}