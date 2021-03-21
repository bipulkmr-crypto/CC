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
// bool checkSorted(ll n, ll arr[]) 
// { 
//     // Find counts and positions of  
//     // elements that are out of order. 
//     ll first = 0, second = 0; 
//     ll count = 0; 
//     for (int i = 1; i < n; i++) { 
//         if (arr[i] < arr[i - 1]) { 
//             count++; 
//             if (first == 0) 
//                 first = i; 
//             else
//                 second = i; 
//         } 
//     } 
  
//     // If there are more than two elements 
//     // are out of order. 
//     if (count > 2) 
//         return false; 
  
//     // If all elements are sorted already 
//     if (count == 0) 
//         return false; 
  
//     // Cases like {1, 5, 3, 4, 2} 
//     // We swap 5 and 2. 
//     if (count == 2) 
//         swap(arr[first - 1], arr[second]); 
  
//     // Cases like {1, 2, 4, 3, 5} 
//     else if (count == 1) 
//         swap(arr[first - 1], arr[first]); 
  
//     // Now check if array becomes sorted 
//     // for cases like {4, 1, 2, 3} 
//     for (int i = 1; i < n; i++) 
//         if (arr[i] < arr[i - 1]) 
//             return false; 
  
//     return true; 
// } 
// int main()
// {
// //     #ifndef ONLINE_JUDGE
// // freopen(fi, "r", stdin);
// // freopen(fo, "w", stdout);
// // #else
// // // online submission
// // #endif
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll count=0;
//         ll i;
//         ll arr[n];
//         ll sorted[n];
//         rep(i,n)
//         {
//             cin>>arr[i];
//             sorted[i]=arr[i];
//         }
//         sort(sorted,sorted+n);
//         rep(i,n)
//         {
//             if((arr[i]!=sorted[i]))
//             {
//                 count++;
//             }
//         }
//         if(count==2)
//         cout<<"YES\n";
//         else
//         cout<<"NO\n";
//         if(checkSorted(n,arr))
//         {
//             cout<<"YES\n";
//         }
//         else
//         {
//             cout<<"NO\n";
//         }
//     }
// }
#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int>help(n);
    int count = 0;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        help[i] = arr[i];
    }
    sort(help.begin(), help.end());
    vector<int>ans;
    for(int i = 0;i<n;i++){
        if(arr[i] != help[i]){
            count++;
            ans.push_back(i);
        }
    }
    if(count != 2){
        cout << "NO\n";
    }
    else{
        bool flag = false;
        swap(arr[ans[0]], arr[ans[1]]);
        for(int i = 0;i<n;i++){
            if(arr[i]!=help[i]){
                flag = true;
                break;

            }
        }
        if(flag){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }


}
signed main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();

    }
    return 0;
}