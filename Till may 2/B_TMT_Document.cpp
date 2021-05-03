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
//         string s;
//         cin >> n >> s;
//         ll i;
//         if (s[0] != 'T' || s[n - 1] != 'T')
//         {
//             cout << "NO\n";
//         }
//         else
//         {
//             // ll first_pos_M=-1;
//             // bool flag=false;
//             // ll last_pos_T=-1;
//         //      ll last_pos_T = s.find_last_of('T');
//         //    ll last_pos_M = s.find_last_of('M');
//             // // for(i=1;i<n;i++)
//             // // {
//             // //     if(s[i]=='M'&&(flag==false))
//             // //     {
//             // //         first_pos_M=i;
//             // //         flag=true;
//             // //     }
//             // //     else if(s[i]=='T')
//             // //     {
//             // //         last_pos_T=i;
//             // //     }
//             // // }
//             // if(first_pos_M<last_pos_T)
//             // {
//             //     cout<<"YES\n";
//             // }
//             // else
//             // cout<<"NO\n";
//             ll count_T = 1;
//             bool flag1 = true;
//             ll count_M = 0;
//             for (i = 1; i < n; i++)
//             {
//                 if (s[i] == 'M')
//                 {
//                     count_M++;
//                     if (count_T < count_M)
//                     {
//                         flag1 = true;
//                         break;
//                     }
//                 }
//                 else
//                     count_T++;
//             }
//             count_T=1;
//             count_M=0;
//             bool flag2 = true;
//             for(i=n-2;i>=0;i--)
//             {
//                 if(s[i]=='M')
//                 {
//                     count_M++;
//                     if(count_T<count_M)
//                     {   
//                         flag2=true;
//                         break;
//                     }
//                 }
//                 else 
//                 count_T++;
//             }

//             if (count_T == (2 * count_M) && flag1 == true&&flag2 == true)
//             {
//                 cout << "YES\n";
//             }
//             else
//                 cout << "NO\n";

//             // else cout << "NO\n";
//         }
//     }
// }
// // // using namespace std;
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
// // // void solve()
// // // {
// // //     ll n;
// // //     cin >> n;
// // //     string s;
// // //     cin >> s;

// // //     ll suf[n + 1] = {0};

// // //     for (ll i = n - 1; i >= 0; i--)
// // //     {
// // //         if (s[i] == 'T')
// // //             suf[i] += 1;
// // //         suf[i] += suf[i + 1];
// // //     }
// // //     ll toT = suf[0], used = 0;

// // //     if (toT != 2 * n / 3)
// // //     {
// // //         cout << "NO" << endl;
// // //         return;
// // //     }

// // //     for (ll i = 0; i < n; i++)
// // //     {
// // //         if (s[i] == 'M')
// // //         {
// // //             ll pre = toT - suf[i];
// // //             if (pre <= used || suf[i] <= used)
// // //             {
// // //                 cout << "NO" << endl;
// // //                 return;
// // //             }
// // //             used++;
// // //         }
// // //     }
// // //     cout << "YES" << endl;
// // // }

// // // signed main()
// // // {

// // //     int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         solve();
// // //     }
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // typedef long long ll;
// // #define endl '\n'
// // #define FAST_IO                       \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);                    \
// //     cout.tie(NULL);
// // using namespace std;

// // void solve()
// // {
// //     ll n;
// //     cin >> n;
// //     string s;
// //     cin >> s;

// //     ll suf[n + 1] = {0};

// //     for (ll i = n - 1; i >= 0; i--)
// //     {
// //         if (s[i] == 'T')
// //             suf[i] += 1;
// //         suf[i] += suf[i + 1];
// //     }
// //     ll toT = suf[0], used = 0;

// //     if (toT != 2 * n / 3)
// //     {
// //         cout << "NO" << endl;
// //         return;
// //     }

// //     for (ll i = 0; i < n; i++)
// //     {
// //         if (s[i] == 'M')
// //         {
// //             used++;
// //             ll pre = toT - suf[i];
// //             if (pre < used || suf[i] < n / 3 - used)
// //             {
// //                 cout << "NO" << endl;
// //                 return;
// //             }
// //         }
// //     }
// //     cout << "YES" << endl;
// // }

// // signed main()
// // {
// //     FAST_IO

// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         solve();
// //     }
// //     return 0;
// // }
#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll suf[n + 1] = {0};

    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'T')
            suf[i] += 1;
        suf[i] += suf[i + 1];
    }
    ll toT = suf[0], Ms = 0;

    if (toT != 2 * n / 3)
    {
        cout << "NO" << endl;
        return;
    }

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'M')
        {
            Ms++;
            ll pre = toT - suf[i];
            if (pre < Ms || suf[i] <= n / 3 - Ms)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    FAST_IO

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}