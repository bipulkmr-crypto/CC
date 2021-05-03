#include <iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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
// #define siz ((ll)1e8+1);
// vector<bool> isprime(siz,true);
// void seive()
// {
//     ll i,j;
//     isprime[1]=isprime[0]=false;
//     for(i=2;i*i<=siz;i++)
//     {
//         if(isprime[i])
//         for(j=i*i;j<=siz;j+=i)
//         {
//             isprime[j]=false;
//         }
//     }
// }
int main()
{
    // seive();
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll> m;
        ll n;
        cin>>n;
        // ll i=2;
        // while (n>0)
        // {
        //     if(n%i==0)
        //     {
        //         m[i]++;
        //         n/=i;
        //     }
        //     else
        //     i++;
        // }
        // ll proe=1,pro=1;
        // for(auto it:m)
        // {
        //     if(it->ff!=2)
        //     {
        //         pro
        //     }
        // }
        if(n%2ll==0ll&&n%4ll!=0ll)
        {
            cout<<"Same\n";
        }
        else if(n%2ll==1ll)
        {
            cout<<"Odd\n";
        
        }
        else 
        cout<<"Even\n";
    }
}