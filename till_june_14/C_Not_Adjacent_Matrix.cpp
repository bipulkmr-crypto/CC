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
// //     ll t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;
// //         ll i, j;
// //         ll arr[n][n];
// //         if (n % 2 == 0)
// //         {
// //             cout << -1 << endl;
// //             continue;
// //         }
// //         else
// //         {
// //             ll k = 1;
// //             ll p = n * n;

// //             memset(arr, 0, sizeof(arr));
// //             for (i = 0; i < n; i++)
// //             {
// //                 for (j = 0; j < n; j += 2)
// //                 {
// //                     arr[i][j] = k;
// //                     k++;
// //                 }
// //             }
// //             for (i = n - 1; i >= 0; i -= 1)
// //             {
// //                 if (i % 2 == 0)
// //                 {
// //                     for (j = 1; j < n; j += 2)
// //                     {
// //                         arr[i][j] = p;
// //                         p--;
// //                     }
// //                 }
// //                 else
// //                 {
// //                     for (j = 1; j < n; j += 2)
// //                     {
// //                         arr[i][j] = p;
// //                         p--;
// //                     }
// //                 }
// //             }
// //             swap(arr[0][0], arr[n / 2][n / 2]);
// //             swap(arr[0][0], arr[n / 2][0]);
// //             rep(i, n)
// //             {
// //                 rep(j, n)
// //                 {
// //                     cout << arr[i][j] << " ";
// //                 }
// //                 cout << endl;
// //             }
// //         }
// //     }
// // }
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
//         ll i, j;
//         ll p = n * n;
//         if (n % 2 == 0)
//         {
//             cout << -1 << endl;
//             continue;
//         }
//         ll arr[n][n];
//         memset(arr, 0, sizeof(arr));
//         for (i = 0; i < n; i += 2)
//         {
//             for (j = 0; j < n; j += 2)
//             {
//                 arr[i][j] = p;
//                 p--;
//             }
//         }
//         for (i = 1; i < n; i += 2)
//         {
//             for (j = 0; j < n; j += 2)
//             {
//                 arr[i][j] = p;
//                 p--;
//             }
//         }
//         for (j = 1; j < n; j += 2)
//         {
//             for (i = 0; i < n; i += 2)
//             {
//                 arr[j][i] = p;
//                 p--;
//             }
//         }
//         for (i = 0; i < n / 2; i++)
//         {
//             arr[n / 2][i] = p--;
//             arr[n / 2][n - i - 1] = p--;
//         }
//         arr[n / 2][n / 2] = p;
//         rep(i, n)
//         {
//             rep(j, n)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
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
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        if(n==3)
        {
            cout<<"2 9 7"<<endl;
            cout<<"4 6 3"<<endl;
            cout<<"1 8 5"<<endl;
            continue;
        }
        else 
        {
            int val=1;
            int arr[n+1][n+1];
            int i,j;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    arr[i][j]=val;
                    val++;
                }
            }
            for(i=1;i<=n;i++)
            {
                for(j=2;j<=n;j++)
                {
                    arr[i][j]=val;
                    val++;
                }
            }
            rep(i,n)
            {
                rep(j,n)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

    }
}