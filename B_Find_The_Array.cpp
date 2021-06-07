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
    cin>>n;
    vll arr(n);
    int i;
    rep(i,n)cin>>arr[i];
    ll sum=0,s=0;
    rep(i,n)s+=arr[i];
    // s=s/n;
    string s1="",s3="";
    rep(i,n)
    {
        if(i%2==0){
            sum+=abs(arr[i]-1);
            s1+="1 ";
        }
        else s1+=to_string(arr[i])+' ';
    }
    if(2*sum<s)
    cout<<s1<<endl;
    else 
    {
        rep(i,n)
        {
            if(i%2==1)
            cout<<1<<' ';
            else 
            cout<<arr[i]<<' ';
        }
    }

    // cout<<endl;
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
