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
    
    ll t[101] = {0};
    ll i, j = 0;
    cin >> n;
    ll arr[n]={0};
    rep(i, n)
    {
        cin >> arr[i];
    }
    ll diff=0;
    /*bool flag=
    rep(i, n-1)
    {
        if(abs(arr[i]-arr[i+1])<=1)
        {

            diff
            flag
        }
    }*/
    fu(i, 1, 100)
    {
        diff=0;
        rep(j, n)
        {   
            t[i]+=(min(abs(arr[j]-(i+1)),abs(arr[j]-(i-1))));  
        }
    }
    ll minpos=999;
    ll min=t[1];
    fu(i,1,100)
    {
        if(min>t[i])
        {
            min=t[i];
            minpos=i;
        }
    }
    cout << minpos<<" "<<min<<endl;
}