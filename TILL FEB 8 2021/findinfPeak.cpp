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
ll solve(vector<ll> nums)
{
    ll low=0,high=nums.size()-1,n=nums.size();
    ll ans,mid;
    while(high-low>1)
    {
        mid=low+(high-low)/2;
        ll first=nums[0];
        ll last=nums[n-1];
        ll value=nums[mid];
        bool check=(nums[mid]>nums[(mid+1)%n])&&(nums[mid]>nums[(mid+n-1)%n]);
        if(check)
        {
            return mid;
        }
        else if()
        {
            low=mid+1;
        }
    }   
    return((nums[low]>nums[high])?low:high); 
}
int main()
{
    ll i,inp;
    vector<ll> v;
    ll n;
    cin>>n;
    rep(i,n)
    {
        cin>>inp;
        v.pb(inp);
    }
    // v.push_back(-9999999);
    ll ans=solve(v);
    cout<<ans<<endl;
}