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
//     int n;
//     string s;
//     cin >> s;
//     int i, j;
//     // for(i=0;i<n-4;i+=4)
//     // {
//     //     for(j=0;j<4;j++)
//     //     {
//     //         // if(j==0)
//     //         // {
//     //         //     cout<<1<<" "<<1<<endl;
//     //         // }
//     //         // else if(j==1)
//     //         // {
//     //         //     cout<<1<<' '<<2<<endl;
//     //         // }
//     //         // else if(j==2)
//     //         // {
//     //         //     cout<<1<<' '<<(3+(s[i+j]-'0'))<<endl;
//     //         // }
//     //         // else
//     //         // {
//     //         //     if(s[i+j-1]=='1')
//     //         //     cout<<2<<' '<<3<<endl;
//     //         //     else
//     //         //     cout<<1<<' '
//     //         // }

//     //     }
//     // }
//     n = s.length();
//     int r = 1, c = 1;
//     rep(i, n)
//     {
//         if (i == 0)
//         {
//             cout << 1 << " " << 1 << endl;
//             c++;
//         }
//         else
//         {
//             cout << r << ' ' << c << endl;
//             if (s[i] == '1')
//             {
//                 c += 2;
//                 // if(c>4)
//                 // {
//                 //
//                 // }
//                 if (c >= 3)
//                 {
//                     if(c>3)
//                     c = c % 4 + 1;
//                     r += 1;

//                     r = r % 4 + 1;
//                 }
//             }
//             else
//             {
//                 c += 1;
//                 if (c > 4)
//                 {
//                     r += 2;
//                 }
//             }
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
    string s;
    cin >> s;
    int i;
    bool flag1 = false;
    bool flag2 = false;
    for (auto c : s)
    {
        if (c == '0')
        {
            if (flag1)
                cout << 3 << " " << 4 << endl;
            else
                cout << 1 << " " << 4 << endl;
            flag1 = !flag1;
        }
        else
        {
            if (flag2)
            {
                cout << 4 << " " << 3 << endl;
            }
            else
            {
                cout << 4 << " " << 1 << endl;
            }
            flag2 = !flag2;
        }
    }
}