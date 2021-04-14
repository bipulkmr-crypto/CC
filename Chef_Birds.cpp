// // #include <bits/stdc++.h>
// // using namespace std;
// // #define fast_io                       \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(0);                       \
// //     cout.tie(0);
// // #define ll long long int
// // #define f(i, x, n) for (long long int i = x; i < n; i++)
// // #define fr(i, x, n) for (long long int i = n - 1; i >= x; i--)
// // #define pb push_back
// // #define mp make_pair
// // #define mod 1000000007

// // int main()
// // {
// //     fast_io

// //         int t;
// //     cin >> t;
// //     while (t--)
// //     {

// //         ll n, k, y, cnt = 0;
// //         cin >> n >> k >> y;
// //         ll arr[n];
// //         f(i, 0, n) cin >> arr[i];
// //         ll ans = n;

// //         fr(x, k + 1, n + 1)
// //         {

// //             for (ll b = 0; b < (1 << n); b++)
// //             {

// //                 if (__builtin_popcount(b) != x)
// //                     continue;
// //                 vector<ll> subset;
// //                 for (ll i = 0; i < n; i++)
// //                     if (b & (1 << i))
// //                         subset.push_back(arr[i]);

// //                 ll lcm = 1;
// //                 f(i, 0, subset.size())
// //                 {
// //                     lcm = (lcm * subset[i]) / (__gcd(lcm, subset[i]));

// //                     if (lcm <= y)
// //                     {
// //                         ans = n - x;
// //                         break;
// //                     }
// //                 }
// //             }

// //             if (ans < n)
// //                 break;
// //         }

// //         cout << ans << endl;
// //     }

// //     return 0;
// // }
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
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll,vector<ll> > arr(n);
        ll i,j;
        rep(i,n)
        {
            ll inp;
            cin>>inp;
            arr[i].resize((x/inp+2));
            ll p=0;
            for(j=inp;j<=x;j+=inp)
            {
                arr[i][p++]=j;
            }
        }
        sort(all(arr));
        for(i=1;i<=x;i++)
        {
            ll count=0;
            sll s;
            for(j=0;j<n;j++)
            {
                if(binary_search(arr[j].begin(),arr[j].end(),i))
                {
                    s.insert(j);
                }
            }
            if(s.size()>=k)
            {
                for(auto z:s)
                {
                   arr.erase(z);
                }
            }
        }
        cout<<arr.size()<<endl;
    }
}
// #include <bits/stdc++.h> 
// using namespace std;
// #define ll long long
// #define int long long
// long long gcd(int a, int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
 
// // Function to return LCM of two numbers 
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// signed main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     // #ifndef ONLINE_JUDGE
//     //     freopen("input.txt","r",stdin);
//     //     freopen("output.txt","w",stdout);
//     // # endif
//      int tt;
//      cin >> tt;
//      while(tt--){
//          int n, k, x;
//          cin >> n >> k >> x;

//          vector<int>arr(n, 0);

//          for(auto &i: arr)cin >> i;
//          int total = n;
//          if(x == 0){
//              cout << n << "\n";
//              continue;
//          }
//          map<int, set<int> > m;
//          for(int i = 0;i<n-1;i++){
//              for(int j = i+1;j<n;j++){
//                  if(i == j)continue;
//                  int temp = lcm(arr[i], arr[j]);
//                  m[temp].insert(arr[i]);
//                  m[temp].insert(arr[j]);
//              }
//          }
//         set<int>birds;

//          for(auto i:m){

//              if(i.first > x)break;
//              if(i.second.size() > k){
//                 for(auto j: i.second){

//                 }
//                  total -= i.second.size();
//              }
//          }
//          if(total < 0)cout << 0 << "\n";
//          else cout << total << "\n";
//      }
//     return 0;
// }