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
    int n;
    int cnt=1;
    int i;
    int lastx,preheight,curx,curhei;
    cin>>lastx;
    cin>>preheight;
    bool fell=true;
    for(i=1;i<n;i++)
    {
        cin>>curx;
        cin>>curhei;
        if(!fell&&(lastx+preheight)<curx)
        {
            cnt++;
            if((curx-curhei)>(lastx+preheight))
            {
                fell=true;
                cnt++;
            }
        }
        else if((curx-curhei)>(lastx+preheight)&&i<n-1)
        {
            cnt++;
            fell=true;
        }
        else 
        fell=false;
    }
    cout<<cnt<<endl;
    // cin>>n;
    // int a[n],b[n];
    // rep(i,n)
    // {
    //     cin>>a[i]>>b[i];
    // }
    // cnt=1;
    // int marked[n]={0};
    // for(i=1;i<n;i++)
    // {
    //     if((a[i]-a[i-1])>=b[i])
    //     {
    //         marked[i]=1;
    //         cnt+=1;
    //     }
    //     else if((a[i+1]-a[i])>=b[i])
    //     {
    //         marked[i]=1;
    //         i++;
    //         cnt++;
    //     }
    // }
    // marked[0]=1;
    // ll ans=0;
    // rep(i,n)
    // {
    //     if(marked[i])ans+=1;
    // }
    // cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        still_single();
    }
    return 0;
}