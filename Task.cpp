// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// ll binpowmod(ll a,ll b)
// {
//     a%=mod;
//     ll res=1;
//     while(b>0)
//     {
//         if(b&1)
//         res=res*a%mod;
//         a=a*a%mod;
//         b>>=1;
//     }
//     return res;
// }
// int main()
// {
//     ll k,q;
//     cin>>k>>q;
//     // ll pre[100001]={0};
//     // ll i;
//     // rep(i,100001)
//     // {
//     //     if(i-n>=0)
//     //     pre[i]=binpowmod(2,i-n);
//     //     else
//     //     pre[i]=1;
//     // }
//     while(q--)
//     {
//         ll n;
//         cin>>n;
//         ll x=n/k;
//         ll ans=n*x-(k*(x)*(x+1))/2+x+1;
//         cout<<ans<<endl;
//     }
// }
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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        vector<pair<char,ll> > arr1;
        vector<pair<char,ll> > arr2;
        ll count=0;
        ll len1=s1.length();
        ll len2=s2.length();
        ll i;
        rep(i,len1-1)
        {
            if(s1[i]==s1[i+1])
            {
                arr1.pb(make_pair(s1[i],i));
                i++;
            }
        }
        rep(i,len2-1)
        {
            if(s2[i]==s2[i+1])
            {
                arr2.pb(make_pair(s2[i],i));
                i++;
            }
        }
        bool flag=true;
        for(auto x:arr1)
        {
            for(auto y:arr2)
            {
                if((x).ff==(y).ff)
                {
                    cout<<"NO\n";
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        cout<<"YES\n";
    }
}