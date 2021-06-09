#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
void still_single()
{
    int mask,a,b;
    cin>>mask>>a>>b;
    ll ans=0;
    if(a<b)
    {
        swap(a,b);
    }
    ll cnt1=__builtin_popcount(a);
    ll cnt2=__builtin_popcount(b);
    if(cnt1<cnt2)
    {
        swap(cnt1,cnt2);
    }
    ll pos_excluded=abs(cnt1-cnt2);
    int mas[mask]={0};
    int i;
    for(i=mask-1;i>=0;i--)
    {
        if(cnt1>0)
        {
            mas[i]=1;
            cnt1--;
        }
        else break;
    }
    for(i=0;i<mask;i++)
    {
        if(cnt2>0)
        {
            if(mas[i])
            mas[i]=0;
            else
            mas[i]=1;
            cnt2--;
        }
        else break;
    }
    int pos=-1;
    for(i=mask-1;i>=0;i--)
    {
        if(mas[i]==0)
        {
            pos=i;
            break;
        }
    }
    int p=0;
    for(i=pos-1;i>=0;i--)
    {
        if(mas[i]==1)
        {
            mas[i]=0;
            p++;
        }
    }
    for(i=pos;i>=0;i--)
    {
        if(p>0)
        {
            mas[i]=1;
            p--;
        }
        else break;
    }

    for(i=0;i<mask;i++)
    {
        ans+=(1<<i)*mas[i];
    }
    
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        still_single();
    }
    return 0;
}