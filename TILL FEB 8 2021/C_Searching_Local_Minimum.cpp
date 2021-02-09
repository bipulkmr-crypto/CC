#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include<climits>
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
ll solve(ll nums[],ll n)
{
    ll low=0,high=n-1;
    ll ans,mid;
    while(high-low>1)
    {
        mid=low+(high-low)/2;
        ll first=nums[0];
        ll last=nums[n-1];
        ll value=nums[mid];
        bool check=(nums[mid]<nums[(mid+1)%n])&&(nums[mid]<nums[(mid+n-1)%n]);
        if(check)
        {
            return mid;
        }
        else
        {
            low=mid+1;
        }
    }   
    return((nums[low]<nums[high])?low:high); 
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n+2]={0};
    arr[0]=arr[n-1]=INT_MAX;
    ll i;
    ll k_min=-1;
    rep(i,n)
    {
        printf("? %lld",(i+1));
        cin>>arr[i+1];
        cout<<endl;
        cout.flush();
    }
    cout<<endl;
        cout.flush();
    ll ans=solve(arr,n+2);
    cout<<"! "<<ans<<endl;

}
