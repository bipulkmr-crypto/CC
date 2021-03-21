// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int,int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long,long long>
// // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int,int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s,x) (s.find(x) != s.end())
// // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(),v.end()
// // // #define ss second
// // // #define rep(i,n) for(i=0;i<n;i++)
// // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // #define gi(n) scanf(%d,&n)
// // // int main()
// // // {
// // //     ll t;
// // //     cin>>t;
// // //     while(t--)
// // //     {
// // //         ll n;
// // //         cin>>n;
// // //         ll arr[n];
// // //         stack<ll> s;
// // //         ll i;
// // //         rep(i,n)
// // //         {
// // //             cin>>arr[i];
// // //         }
// // //         s.push(arr[0]);
// // //         ll prev=0;
// // //         cout<<1<<" ";
// // //         for(i=1;i<n;i++)
// // //         {

// // //         }
// // //         cout<< endl;
// // //     }
// // // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll arr[n];
//         ll i;
//         rep(i, n)
//         {
//             cin >> arr[i];
//         }
//         ll pos = 0;
//         ll prevmax = arr[0];
//         stack<ll> s;
//         // rep(i, n)
//         // {
//         //     s.push(arr[i]);
//         // }
//         s.push(arr[0]);
//         cout<<1<<" ";
//        for(i=1;i<n;i++)
//         {
//             ll c = 1;
//             if (!s.empty())
//             {
//                 ll x = s.top();
//                 while (!s.empty() && arr[i] >= s.top())
//                 {
//                     c++;
//                     s.pop();
//                 }
//                 if (s.empty())
//                 {
//                     cout << (i + 1) << " ";
//                 }
//                 else
//                 {
//                     cout << (s.size() - i+1) << " ";
//                 }
//             }
//             s.push(arr[i]);
//         }
//         cout << endl;
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
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        rep(i,n)
        cin>>arr[i];
        ll res[n];
        res[0]=1;
        stack<ll> s;
        s.push(0);
        for(i=1;i<n;i++)
        {
            while(!s.empty()&&arr[s.top()]<=arr[i])
            {
                s.pop();
            }
            res[i]=(s.empty())?(i+1):(i-s.top());
            s.push(i);
        }
        rep(i,n)
        {
            cout<<res[i]<<" ";
        }
        printf("\n");
    }

}