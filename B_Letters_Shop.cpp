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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
map<char,ll> m;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll i;
    ll arr[200009[26]={0};
    rep(i,n)
    {
        arr[i][s[i-'a']]=arr
    }
    ll q;
    cin>>q;
    while(q--)
    {
        string temp;
        cin>>temp;
        map<char,ll> m2;
        ll low=0,mid,high=n-1;
        rep(i,temp.size())
        {
            m2[temp[i]]++;
        }
        while(high>=low)
        {
            mid=low+(high-low)/2;
            if(good(mid))
        }
    }
}