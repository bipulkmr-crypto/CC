// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define fast                          \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int, int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long, long long>
// // // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int, int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s, x) (s.find(x) != s.end())
// // // #define cpresent(s, x) (find(all(s), x) != s.end())
// // // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(), v.end()
// // // #define ss second
// // // #define rep(i, n) for (i = 0; i < n; i++)
// // // #define fu(i, a, n) for (i = a; i <= n; i++)
// // // #define fd(i, n, a) for (i = n; i >= a; i--)
// // // #define gi(n) scanf(% d, &n)
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     vector<int> even, odd;
// // //     int i;

// // //     rep(i, n)
// // //     {
// // //         int x;
// // //         cin >> x;
// // //         if (x % 2)
// // //         {
// // //             even.pb(x);
// // //         }
// // //         else
// // //             odd.pb(x);
// // //     }
// // //     sort(all(even));
// // //     sort(all(odd));
// // //     int ans = 0;
// // //     auto it = even.begin();
// // //     int mx = even[n - 1];
// // //     int mini = even[0];
// // //     int k = mx - mini;
// // //     k = k / 200 + 1;
// // //     for (; it != even.end();)
// // //     {
// // //         int val = *it;
// // //         it++;
// // //         for (int j = 0; j <= k; j++)
// // //             if (binary_search(it, even.end(), val + 200 * j))
// // //             {
// // //                 ans++;
// // //             }
// // //     }
// // //     cout << ans << endl;
// // // }
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
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     map<int, int> even;
// //     map<int, int> odd;
// //     int i;
// //     rep(i, n)
// //     {
// //         int x;
// //         cin >> x;
// //         if (x & 1)
// //             odd[x]++;
// //         else
// //             even[x]++;
// //     }
// //     vector<int> p, q;
// //     int ans = 0;
// //     for (auto it : even)
// //     {
// //         if (it.ss > 1)
// //             ans += it.ss;
// //         p.pb(it.ff);
// //     }
// //     for (auto it : odd)
// //     {
// //         if (it.ss > 1)
// //             ans += it.ss;
// //         q.pb(it.ff);
// //     }
// //     auto it = p.begin();
// //     int mx = p[p.size() - 1];
// //     int mini = *it;
// //     int k = mx - mini;
// //     k = k / 200 + 1;
// //     for (; it != p.end();)
// //     {
// //         int val = *it;
// //         it++;
// //         for (int j = 1; j <= k; j++)
// //             if (binary_search(it, p.end(), val + 200 * j))
// //             {
// //                 ans += even[val];
// //             }
// //     }
// //     it = q.begin();
// //     mx = q[q.size() - 1];
// //     mini = *it;
// //     k = mx - mini;
// //     k = k / 200 + 1;
// //     for (; it != q.end();)
// //     {
// //         int val = *it;
// //         it++;
// //         for (int j = 1; j <= k; j++)
// //             if (binary_search(it, q.end(), val + 200 * j))
// //             {
// //                 ans += odd[val];
// //             }
// //     }
// //     cout << ans << endl;
// // }
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
//     int n;
//     int arr[200005];
//     int i;
//     int m[200]={0};
//     rep(i,n)
//     {
//         int x;
//         cin>>x;
//         m[x%200]++;
//     }
//     int ans=0;
//     rep(i,200)
//     {
//         ans+=(m[i]*(m[i]-1))/2;
//     }
//     cout<<ans<<endl;
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
    int n, a[200005];
    long long b[200] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i] % 200]++;
    }
    long long res = 0;
    for (int k = 0; k < 200; k++)
    {
        res += (b[k] * (b[k] - 1)) / 2;
    }
    printf("%lld\n", res);
    return 0;
}
