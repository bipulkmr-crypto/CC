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
    string s;
    ll n;
    ll i;
    
    ll min=9999,minpos=9991;
    cin >> s;
    cin >> n;
    string a[n];
    ll diff[n] = {0};
    bool flag = false;
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        if (a[i].length() >= s.length())
        {
            
            if (a[i].substr(0,s.length()) == s)
            {
                flag=true;
                diff[i] = a[i].compare(s);
            }
        }
    }
    rep(i,n)
    {
        if(diff[i]==0)
        {
            diff[i]=9999;
        }
    }
    
    rep(i,n)
    {
        if(min>diff[i])
        {
            min=diff[i];
            minpos=i; 
        }
    }
    if(flag)
    cout<<a[minpos]<<endl;
    else
    {
        cout<<s<<endl;
    }
}