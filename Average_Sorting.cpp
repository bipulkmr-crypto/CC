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
        ll n;
        cin >> n;
        ll arr[n];
        ll i;
        rep(i, n) cin >> arr[i];
        // bool flag=true;
        // rep(i,n-1)
        // {
        //     double mini=min(arr[i],arr[i+1]);
        //     double d=(arr[i]+arr[i+1])/2.000;
        //     if((d-mini)>0)
        //     {
        //         flag=false;
        //         break;
        //     }
        //     else if((arr[i]-arr[i+1])>0)
        //     {
        //         arr[i]=d;
        //     }
        //     else if()
        // }
        bool flag = true;
        // if()
        if (n == 2)
        {
            if (arr[1] > arr[0])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            for (i = n - 1; i > 1; i--)
            {
                if (arr[i] > arr[i - 2])
                {
                    arr[i - 1] = arr[i];
                }
                else
                {
                    flag = false;
                }
            }
            if (flag)
                cout << "Yes\n";
            else
            {
                cout << "No\n";
            }
        }
    }
}