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
    ll n;
    cin>>n;
    ll arr[n];
    ll q;
    ll i;
    ll sum[n];
    rep(i, n)
    {
        cin >> arr[i];
        if(i==0)
        sum[0]=arr[0];
        else
        sum[i]=sum[i-1]+arr[i];
    }
    cin>>q;
    while(q--)
    {
        ll search;
        cin>>search;
        // ll* ans=upper_bound(sum,sum+n,search);
        // cout<<(abs(arr-ans))<<endl;
        ll pos=0;
        ll s=0,k=0;
        bool flag=false;
        while(k<n)
        {
            s+=arr[k];
            if(s>=search)
            {
                flag=true;
                pos=k+1;
                break;
            }
            k++;
        }
        if(flag)
        cout<<pos<<endl;
        else
        {
            cout<<-1<<endl;
        }
    }
}