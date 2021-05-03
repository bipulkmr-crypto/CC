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
// int main()
// {
//     ll a,b,c;
//     cin>>a>>b>>c;
//     ll i=1;
//     while(true)
//     {
//         ll rem=i%7;
//         if(rem==1||rem==4||rem==0)
//         {
//             a--;
//             if(a<0)
//             break;
//         }
//         else if(rem==2||rem==6)
//         {
//             b--;
//             if(b<0)
//             break;
//         }
//         // else if(rem==3||rem==5)
//         else
//         {
//             c--;
//             if(c<0)
//             break;
//         }
//         i++;
//     }
//     cout<<(i-1)<<endl;
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
    ll arr[3];
    ll i;
    cin>>arr[0]>>arr[1]>>arr[2];
    // ll curr;
    ll id[]={0,1,2,0,2,1,0};
    ll val=min({arr[0]/3,arr[1]/2,arr[2]/2});
    arr[0]-=(3*val);
    arr[1]-=(2*val);
    arr[2]-=(2*val);
    ll ans=0;
    for(i=0;i<7;i++)
    {
        ll b[3];
        b[0]=arr[0];
        b[1]=arr[1];
        b[2]=arr[2];
        ll curr=0;
        ll day=i;
        while(b[id[day]]>0)
        {
            b[id[day]]--;
            curr++;
            day=(day+1)%7;
        }
        ans=max(ans,val*7+curr);
    }
    cout<<ans<<endl;
}