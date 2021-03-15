// // #include <iostream>
// // #include <map>
// // #include <cstdio>
// // #include<set>
// // #include <vector>
// // #include <time.h>
// // #include <utility>
// // #include <cmath>
// // #include <cstring>
// // #include <algorithm>
// // using namespace std;
// // typedef long long int ll;
// // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define all(v) v.begin(),v.end()
// // #define ss second
// // #define rep(i,n) for(i=0;i<n;i++)
// // #define fu(i,a,n) for(i=a;i<=n;i++)
// // #define fd(i,n,a) for(i=n;i>=a;i--)
// // #define gi(n) scanf(%d,&n)
// // int main()
// // {
// //     ll t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         ll n;
// //         cin>>n;
// //         ll arr[n];
// //         ll i;
// //         rep(i,n)
// //         cin>>arr[i];
// //         ll j;
// //         bool mark[n]={false};
// //         for(i=n-1;i>=0;i--)
// //         {
// //             ll k=i;
// //             bool check=false;
// //             ll val=arr[i];
// //             for(j=arr[i];j>=0;j--)
// //             {
// //                 mark[k]=true;
// //                 if(arr[k]>val)
// //                 {
// //                     check=true;
// //                 }
// //                 k--;
// //             }
// //             if(!check)
// //             {
// //                 i-=val;
// //             }
// //         }
// //         rep(i,n)
// //         {
// //             if(mark[i])
// //             cout<<1<<" ";
// //             else
// //             cout<<0<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }
// #include <iostream>
// #include <map>
// #include <cstdio>
// #include<set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;        ll i,j;
//         cin>>n;
//         ll arr[n];
//         rep(i,n)cin>>arr[i];
//         bool mark[n]={false};

//         for(i=0;i<n;i++)
//         {
//             ll k=arr[i]+i-2;
//             if(arr[i]!=0)
//             for(j=arr[i];j>=0;j--)
//             {
//                 if(!mark[k])
//                 mark[k]=true;
//                 k--;
//             }
//         }
//         rep(i,n)
//         {
//             if(mark[i])
//             cout<<1<<" ";
//             else
//             cout<<0<<" ";
//         }
//         cout<<endl;
    
//     }
// }
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
using namespace __gnu_pbds; 
using namespace std;
#define int long long
#define endl "\n"
#define deb(x) cout<<#x<<" "<<x<<endl;
#define sc(ar,n) for(int pen=0;pen<n;pen++){ cin>>ar[pen];}
#define pr(ar,n) for(int pen=0;pen<n;pen++){ cout<<ar[pen]<<" ";} cout<<endl;
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frt(it,vb) for(auto it=vb.begin();it!=vb.end();it++)
#define mem(ar,x) memset(ar,x,sizeof(ar));
#define pb push_back
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define rt return 0;
#define ct continue;
#define MAX 1000000000000000000
#define MAX1 1000000000
#define CLK clock_t clk = clock();//Start of main
#define OCLK cerr << "Time (in ms): " << (double)(clock() - clk) * 1000.0 / CLOCKS_PER_SEC << '\n';//End of main
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    sc(ar,n);
    int sum[n];
    mem(sum,0);
    fr(i,0,n){
        int x = ar[i];
        int p = max(0ll,i+1 - x);
        sum[p]++;
        if(i!=n-1) sum[i+1]--;
    }
    int res = 0;
    int ans[n];
    fr(i,0,n){
        res+=sum[i];
        if(res) ans[i] = 1;
        else ans[i] = 0;
    }
    pr(ans,n);
}
signed main()
{
    // fastio;
    int t;
    int test_cases=0;
    if(test_cases==0)
    cin>>t;
    else
    t=1;
    while(t--){
        solve();
    }
}