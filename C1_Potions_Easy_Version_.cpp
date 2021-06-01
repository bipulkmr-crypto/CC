// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int, int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long, long long>
// // #define sii set<int>
// // #define sll set<long long>
// // #define vii vector<int>
// // #define vll vector<long long>
// // #define vll vector<long long>
// // #define mii map<int, int>
// // #define mll map<long long, long long>
// // #define lob lower_bound
// // #define upb upper_bound
// // #define ret return
// // #define present(s, x) (s.find(x) != s.end())
// // #define cpresent(s, x) (find(all(s), x) != s.end())
// // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // #define ff first
// // #define all(v) v.begin(), v.end()
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // ll n;
// // vll arr;
// // int pos=-1;
// // ll sum=0;
// // bool good(ll mid)
// // {
// //     ll cnt = n-pos-1, i, temp=sum;
// //     for(i=pos-1;i>=0;i--)
// //     {
// //         temp-=arr[i];
// //         if(temp>=0)
// //         cnt++;
// //         else
// //         break;

// //     }
// //     if (cnt >= mid)
// //         return true;
// //     else
// //         return false;
// // }
// // int main()
// // {
// //     cin >> n;
// //     arr.resize(n);
// //     ll i;
// //     rep(i, n) cin >> arr[i];
// //     // sort(all(arr));
// //     // rep(i,n)
// //     // {
// //     //     if(arr[i]>0)
// //     //     {
// //     //         pos=i;
// //     //         break;
// //     //     }
// //     // }
// //     fu(i,pos,n-1)sum+=arr[i];
// //     ll low = 0, high = 1e10, mid;
// //     while (high - low > 1)
// //     {
// //         mid = (low) + (high - low) / 2;
// //         if (good(mid))
// //         {
// //             low = mid;
// //         }
// //         else
// //         {
// //             high = mid;
// //         }
// //     }
// //     if (good(high))
// //         cout << high << endl;
// //     else
// //         cout << low << endl;
// // }
// // // #include <iostream>
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int,int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long,long long>
// // // #define sii set<int>
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
// // // ll n;
// // // vll arr;
// // // int main()
// // // {
// // //     cin>>n;
// // //     ll i;
// // //     arr.resize(n);
// // //     rep(i,n)cin>>arr[i];
// // //     ll ans;
// // //     int pos=-1;
// // //     rep(i,n)
// // //     {
// // //         if(arr[i]>0)
// // //         {
// // //             pos=i;
// // //             break;
// // //         }
// // //     }
// // //     if(pos==-1)
// // //     cout<<0<<endl;
// // //     ans=solve(arr[pos],1);
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
// ll n;
// vll arr;
// bool good(ll mid)
// {
//     ll cnt = 0, i, sum = 0;
//     rep(i, n)
//     {
//         if (i == 0)
//         {
//             if (arr[0] >= 0)
//                 sum += arr[i];
//             cnt++;
//         }
//         else if ((arr[i] + sum) > 0)
//         {
//             cnt++;
//             sum+=arr[i];
//         }
//     }
//     if (cnt >= mid)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     cin >> n;
//     arr.resize(n);
//     ll i;
//     rep(i, n) cin >> arr[i];
//     ll low = 0, high = 1e10, mid;
//     while (high - low > 1)
//     {
//         mid = (low) + (high - low) / 2;
//         if (good(mid))
//         {
//             low = mid;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     if (good(high))
//         cout << high << endl;
//     else
//         cout << low << endl;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    int n;
    cin >> n;
    vll arr(n);
    int i;
    rep(i, n) cin >> arr[i];
    multiset<int> s;
    int cnt = 0;
    ll sum = 0;
    rep(i, n)
    {
        if (arr[i] >= 0)
        {
            sum += arr[i];
            s.insert(arr[i]);
            cnt++;
        }
        else
        {
            if ((sum + arr[i]) >= 0)
            {
                cnt++;
                sum += arr[i];
                s.insert(arr[i]);
            }
            else
            {
                if (s.size() != 0 && (*s.begin() < arr[i]))
                {
                    int x = *s.begin();
                    s.erase(s.begin());
                    sum += (-x + arr[i]);
                    s.insert(arr[i]);
                }
            }
        }
    }
    cout << cnt << endl;
}