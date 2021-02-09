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
        string s;
        cin >> s;
        ll i, c = 0;
        ll n = s.length();
        string str;
        str=s;
        fu(i,n/2,n-1)
        {
            s[i]=s[n-i-1];
        }
        if(s>str)
        cout<<s<<endl;
        else
        {
            for(i=(n-1)/2;i>=0;i--)
            {
                if(s[i]!='9')
                {
                s[i]++;break;
                }
                else{
                    s[i]='0';
                }
            }
            for(i=n/2;i<n;i++)
            {
                s[i]=s[n-i-1];
            }
            if(s[0]=='0')
            {
                s+='1';
                s[0]='1';
            }
            cout<<s<<endl;
        }
    }
}