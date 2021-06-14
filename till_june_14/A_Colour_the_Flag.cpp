// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define fast                          \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);
// // // #define mod 1000000007
// // // #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// // // #define mod9 1000000009
// // // #define mod7 1000000007
// // // #define INF 1e18
// // // #define sp(y) fixed << setprecision(y)
// // // #define vi vector<int>
// // // #define setbits(x) __builtin_popcountll(x)
// // // #define zerobits(x) __builtin_ctzll(x)
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
// // // void still_single()
// // // {
// // //     int n, m;
// // //     cin >> n >> m;
// // //     char arr[n][m];
// // //     int i, j;
// // //     int x, y;
// // //     bool visited[n][m];
// // //     memset(visited, false, sizeof(visited));
// // //     rep(i, n)
// // //     {
// // //         string s;
// // //         cin>>s;
// // //         rep(j, m)
// // //         {
// // //             arr[i][j]=s[j];
// // //         }
// // //     }
// // //     bool flag = false;
// // //     rep(i, n)
// // //     {
// // //         rep(j, m)
// // //         {
// // //             if (arr[i][j] == 'R' || arr[i][j] == 'W')
// // //             {
// // //                 x = i;
// // //                 y = j;
// // //                 flag = true;
// // //                 break;
// // //             }
// // //         }
// // //         if (flag)
// // //             break;
// // //     }
// // //     auto isvalid = [&](int p, int q)
// // //     {
// // //         return (p >= 0 && p < n && q >= 0 && q < m);
// // //     };
// // //     pii dir[] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
// // //     queue<pii> q;
// // //     if (flag)
// // //     {
// // //         q.push({x, y});
// // //         visited[x][y] = true;
// // //     }
// // //     else
// // //     {
// // //         q.push({0, 0});
// // //         visited[0][0] = true;
// // //         arr[0][0]='R';
// // //     }
// // //     while (!q.empty())
// // //     {
// // //         auto l = q.front();
// // //         q.pop();
// // //         rep(i, 4)
// // //         {
// // //             int newx = l.ff + dir[i].ff;
// // //             int newy = l.ss + dir[i].ss;
// // //             if (isvalid(newx, newy)&&!visited[newx][newy])
// // //             {
// // //                 visited[newx][newy]=true;
// // //                 if (arr[newx][newy] == '.')
// // //                 {
// // //                     if (arr[l.ff][l.ss] == 'R')
// // //                     {
// // //                         arr[newx][newy] = 'W';
// // //                     }
// // //                     else
// // //                         arr[newx][newy] = 'R';
// // //                     q.push({newx, newy});
// // //                 }
// // //             }
// // //             else if (isvalid(newx, newy)&&arr[newx][newy]!='.')
// // //             {
// // //                 if (arr[newx][newy] == arr[l.ff][l.ss])
// // //                 {
// // //                     cout << "NO" << endl;
// // //                     return;
// // //                 }
// // //             }
// // //         }
// // //     }
// // //     rep(i,n)
// // //     {
// // //         rep(j,m)
// // //         {
// // //             int k;
// // //             rep(k,4)
// // //             {
// // //                 int newx=i+dir[k].ff;
// // //                 int newy=j+dir[k].ss;
// // //                 if(isvalid(newx, newy))
// // //                 {
// // //                     if(arr[i][j]==arr[newx][newy])
// // //                     {
// // //                         cout<<"NO";
// // //                         return ;
// // //                     }
// // //                 }
// // //             }
// // //         }
// // //     }
// // //     cout<<"YES\n";
// // //     rep(i, n)
// // //     {
// // //         rep(j, m)
// // //         {
// // //             cout << arr[i][j];
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // /*Don't just sit and hope that God will solve this
// // //   fucking do some	thing, try to observe or solve it a different way.
// // //   Use that pen and paper.
// // //   If nothing works take a deep breath and start again*/
// // // int main()
// // // {
// // //     fast int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         still_single();
// // //     }
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define print(x) cout << 'Case #' << j << ': ' << x << endl;
// // #define mod9 1000000009
// // #define mod7 1000000007
// // #define INF 1e18
// // #define sp(y) fixed << setprecision(y)
// // #define vi vector<int>
// // #define setbits(x) __builtin_popcountll(x)
// // #define zerobits(x) __builtin_ctzll(x)
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
// // void still_single()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     int i, j;
// //     char arr[n][m];
// //     rep(i, n)
// //     {
// //         rep(j, m) cin >> arr[i][j];
// //     }
// //     auto isvalid = [&](int p, int q)
// //     {
// //         return (p >= 0 && p < n && q >= 0 && q < m);
// //     };
// //     pii dir[] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
// //     rep(i, n)
// //     {
// //         if (i % 2 == 0)
// //             arr[i][0] = 'R';
// //         for (j = 1; j < m; j++)
// //         {
// //             if (j % 2 == 0 && arr[i][j] == '.')
// //             {
// //                 arr[i][j] = 'R';
// //             }
// //             else if (j % 2 == 1 && arr[i][j] == '.')
// //             {
// //                 arr[i][j] = 'W';
// //             }
// //         }
// //     }
// //     bool flag1 = true;
// //     rep(i, n)
// //     {
// //         rep(j, m)
// //         {
// //             int k;
// //             rep(k, 4)
// //             {
// //                 int newx = i + dir[k].ff;
// //                 int newy = j + dir[k].ss;
// //                 if (isvalid(newx, newy))
// //                 {
// //                     if (arr[i][j] == arr[newx][newy])
// //                     {
// //                         flag1 = false;
// //                         break;
// //                     }
// //                 }
// //             }
// //         }
// //     }
// //     if (flag1)
// //     {
// //         cout << "YES\n";
// //         rep(i, n)
// //         {
// //             rep(j, m)
// //             {
// //                 cout << arr[i][j];
// //             }
// //             cout << endl;
// //         }
// //         ret;
// //     }
// //     rep(i, n)
// //     {
// //         if (i % 2 == 0)
// //             arr[i][0] = 'W';
// //         else
// //         arr[i][0]='R';
// //         for (j = 1; j < m; j++)
// //         {
// //             if (j % 2 == 0 && arr[i][j] == '.')
// //             {
// //                 arr[i][j] = 'W';
// //             }
// //             else if (j % 2 == 1 && arr[i][j] == '.')
// //             {
// //                 arr[i][j] = 'R';
// //             }
// //         }
// //     }
// //     flag1 = true;
// //     rep(i, n)
// //     {
// //         rep(j, m)
// //         {
// //             int k;
// //             rep(k, 4)
// //             {
// //                 int newx = i + dir[k].ff;
// //                 int newy = j + dir[k].ss;
// //                 if (isvalid(newx, newy))
// //                 {
// //                     if (arr[i][j] == arr[newx][newy])
// //                     {
// //                         flag1 = false;
// //                         break;
// //                     }
// //                 }
// //             }
// //         }
// //     }
// //     if (flag1)
// //     {
// //         cout << "YES\n";
// //         rep(i, n)
// //         {
// //             rep(j, m)
// //             {
// //                 cout << arr[i][j];
// //             }
// //             cout << endl;
// //         }
// //         ret;
// //     }
// //     else

// //     {cout<<"NO"<<endl;}
// // }
// // /*Don't just sit and hope that God will solve this
// // fucking do some	thing, try to observe or solve it a different way.
// // Use that pen and paper.
// // If nothing works take a deep breath and start again*/
// // int main()
// // {
// //     fast int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         still_single();
// //     }
// //     return 0;
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
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     char arr[n][m];
//     int i, j;
//     rep(i, n) rep(j, m) cin >> arr[i][j];

//     rep(i, n)
//     {
//         rep(j, m)
//         {
//             if (i % 2 == 0)
//             {
//                 if (j % 2 == 0)
//                 {
//                     if (arr[i][j] == '.')
//                         arr[i][j] = 'W';
//                     else
//                     {
//                         if (arr[i][j] == 'R')
//                         {
//                             cout << "NO\n";
//                             return;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     if (arr[i][j] == '.')
//                         arr[i][j] = 'R';
//                     else
//                     {
//                         if (arr[i][j] == 'W')
//                         {
//                             cout << "NO\n";
//                             return;
//                         }
//                     }
//                 }
//             }
//             else
//             {
//                 if (j % 2 == 1)
//                 {
//                     if (arr[i][j] == '.')
//                         arr[i][j] = 'W';
//                     else
//                     {
//                         if (arr[i][j] == 'R')
//                         {
//                             cout << "NO\n";
//                             return;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     if (arr[i][j] == '.')
//                         arr[i][j] = 'R';
//                     else
//                     {
//                         if (arr[i][j] == 'W')
//                         {
//                             cout << "NO\n";
//                             return;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     cout << "YES\n";
//     rep(i, n)
//     {
//         rep(j, m) cout << arr[i][j];
//         cout << endl;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
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
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
void still_single()
{
    int n, m;
    cin >> n >> m;
    int i, j;
    vector<string> s1(n), s2(n);
    rep(i, n)
    {
        rep(j, m)
        {
            // s1[i]="";
            // s2[i]="";
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    s1[i] += "W";
                else
                    s1[i] += "R";
                if (j % 2 == 0)
                {
                    s2[i] += "R";
                }
                else
                    s2[i] += "W";
            }
            else
            {
                if (j % 2 == 0)
                    s2[i] += "W";
                else
                    s2[i] += "R";
                if (j % 2 == 0)
                {
                    s1[i] += "R";
                }
                else
                    s1[i] += "W";
            }
        }
    }
    // rep(i, n)
    // {
    //     cout << s1[i] << endl;
    // }
    bool flag1 = true, flag2 = true;
    rep(i, n)
    {
        rep(j, m)
        {
            char ch;
            cin >> ch;
            if (ch != '.' && ch != s1[i][j])
            {
                flag1 = false;
            }
            if (ch != '.' && ch != s2[i][j])
            {
                flag2 = false;
            }
        }
    }
    if (flag1)
    {
        cout << "YES\n";
        rep(i, n)
        {
            cout << s1[i] << endl;
        }
        ret;
    }
    else if (flag2)
    {
        cout << "YES\n";
        rep(i, n)
        {
            cout << s2[i] << endl;
        }
        ret;
    }
    else
    {
        cout << "NO\n";
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}
