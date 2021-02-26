// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll currposf = -1, currposb = -1;
//         ll arr[n][m];
//         ll i, j;
//         rep(i, n)
//         {
//             string s;
//             cin>>s;
//             rep(j, m)
//             {
//                 arr[i][j]=(s[j]-48);
//             }
//         }
//         bool flag = true;
//         rep(i, n)
//         {
//             rep(j, m)
//             {
//                 if (arr[i][j] == 1)
//                 {
//                     if (currposf == -1)
//                         currposf = j;
//                     else
//                     {
//                         if (j != currposf)
//                         {
//                             flag = false;
//                         }
//                     }
//                     break;
//                 }
//             }
//             // if (flag == false)
//             //     break;
//         }
//         rep(i, n)
//         {
//             for (j = n - 1; j >= 0; j--)
//             {
//                 if (arr[i][j] == 1)
//                 {
//                     if (currposb == -1)
//                         currposb = j;
//                     else
//                     {
//                         if (j != currposb)
//                         {
//                             flag = false;
//                         }
//                     }
//                     break;
//                 }
//             }
//             // if(flag == false)
//             // break;
//         }
//         if(flag)
//         cout<<"YES\n";
//         else
//         {
//             cout<<"NO\n";
//         }
//     }
// }
#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll arr[n][m];
//         ll minrow = n + 1, maxrow = -1, mincol = m + 1, maxcol = -1;
//         ll i, j;
//         rep(i, n)
//         {
//             string s;
//             cin>>s;
//             rep(j, m)
//             {
//                 arr[i][j]=(s[j]-48);
//             }
//         }
//         ll count=0;
//         rep(i, n)
//         {
//             rep(j, m)
//             {
//                 if (arr[i][j] == 1)
//                 {
//                     count++;
//                     maxrow = max(i, maxrow);
//                     maxcol = max(j, maxcol);
//                     minrow = min(i, minrow);
//                     mincol = min(mincol, j);
//                 }
//             }
//         }
//         bool flag=true;
//         // ll count = (maxrow + 1 - minrow) * (maxcol - mincol + 1);
//         for (i = minrow; i <=maxrow ; i++)
//         {
//             for (j = mincol; j <=maxcol ; j++)
//             {
//                if(arr[i][j]!=1)
//                {
//                   flag=false;
//                   break;
//                }
//                else
//                {
//                   count--;
//                }
//             }
//         }
//         if (count == 0&&flag==true)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        ll minrow = n + 1, maxrow = -1, mincol = m + 1, maxcol = -1;
        ll i, j;
        rep(i, n)
        {
            string s;
            cin >> s;
            rep(j, m)
            {
                arr[i][j] = (s[j] - 48);
            }
        }
        ll prefix[n][m];
        rep(i, n)
        {
            rep(j, m)
            {
                if (j == 0)
                {
                    prefix[i][j] = arr[i][j];
                }
                else
                {
                    prefix[i][j] = prefix[i][j - 1] + arr[i][j];
                }
            }
        }
        ll pos[n];
        rep(i,n) pos[i]=n;
        rep(i, n - 1)
        {
            rep(j, m - 1)
            {
                if (prefix[i][j] == 1)
                {
                    pos[i] = j;
                    break;
                }
            }
        }
        bool flag = true;
        rep(i, n)
        {
            for (j = pos[i]; j < m - 1; j++)
            {
                if (pos[i] != n )

                {
                    if (prefix[i][j + 1] - prefix[i][j] > 0)
                    {
                        flag = true;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
}
