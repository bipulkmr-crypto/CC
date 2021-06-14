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
// // // char arr[1001][1001];
// // // int i;
// // // bool visited[1001][1001];
// // // int dist[1001][1001];
// // // int pre[1001][1001];
// // // void still_single()
// // // {
// // //     int n, m;
// // //     cin >> n >> m;
// // //     int i, j;
// // //     rep(i, n) rep(j, m) cin >> arr[i][j];
// // //     int x, y;
// // //     int desx, desy;
// // //     rep(i, 1001)
// // //     {
// // //         rep(j, 1001)
// // //         {
// // //             visited[i][j] = false;
// // //             dist[i][j] = INT_MAX;
// // //             pre[i][j] = -1;
// // //         }
// // //     }
// // //     auto isvalid = [&](int x, int y)
// // //     {
// // //         return (x >= 0 && x < n && y >= 0 && y < m);
// // //     };
// // //     rep(i, n)
// // //     {
// // //         rep(j, m)
// // //         {
// // //             if (arr[i][j] == 'A')
// // //             {
// // //                 x = i;
// // //                 y = j;
// // //             }
// // //             if (arr[i][j] == 'B')
// // //             {
// // //                 desx = i;
// // //                 desy = j;
// // //             }
// // //         }
// // //     }
// // //     queue<pair<int, int>> q;
// // //     q.push({x, y});
// // //     visited[x][y] = true;
// // //     dist[x][y] = 0;
// // //     bool flag = false;
// // //     vector<pii> direction = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
// // //     while (!q.empty())
// // //     {
// // //         auto p = q.front();
// // //         q.pop();
// // //         for (i = 0; i < 4; i++)
// // //         {
// // //             int newx = p.ff + direction[i].ff;
// // //             int newy = p.ss + direction[i].ss;
// // //             if (isvalid(newx, newy) && arr[newx][newy] == '.' && !visited[newx][newy])
// // //             {
// // //                 visited[newx][newy] = true;
// // //                 dist[newx][newy] = dist[p.ff][p.ss] + 1;
// // //                 if (newx == p.ff)
// // //                 {
// // //                     pre[newx][newy] = p.ss;
// // //                 }
// // //                 else
// // //                     pre[newx][newy] = p.ff;
// // //                 if (newx == desx && newy == desy)
// // //                 {
// // //                     flag = true;
// // //                     break;
// // //                 }
// // //                 q.push({newx,newy});
// // //             }
// // //         }
// // //         if (flag)
// // //         {
// // //             break;
// // //         }
// // //     }
// // //     if (flag)
// // //     {
// // //         cout<<"YES"<<endl;
// // //         cout << dist[desx][desy] << endl;

// // //     }
// // //     else
// // //     {
// // //         cout<<"No"<<endl;
// // //     }
// // // }
// // // /*Don't just sit and hope that God will solve this
// // //   fucking do some	thing, try to observe or solve it a different way.
// // //   Use that pen and paper.
// // //   If nothing works take a deep breath and start again*/
// // // int main()
// // // {
// // //     fast int t=1;
// // //     // cin >> t;
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
// // struct point
// // {
// //     int x;
// //     int y;
// //     string path;
// // };
// // int n, m;
// // u char arr[1001][1001];
// // int i, j;
// // bool visited[1001][1001];
// // pair<int,int> path[]
// // void printPath(pair<int, int> node)
// // {
// //     pair<int, int> p = parent[node.first][node.second];
// //     if (p.first <= -1)
// //     {
// //         return;
// //     }

// //     printPath(p);

// //     if (node.first > p.first)
// //         cout << 'D';
// //     else if (node.first < p.first)
// //         cout << 'U';
// //     else if (node.second < p.second)
// //         cout << 'L';
// //     else if (node.second > p.second)
// //         cout << 'R';
// // }

// // void still_single()
// // {

// //     cin >> n >> m;
// //     rep(i, n) rep(j, m) cin >> arr[i][j];
// //     int x, y, desx, desy;
// //     // rep(i, 1000)
// //     // {
// //     //     rep(j, 1000)
// //     //     {
// //     //         visited[i][j] = false;
// //     //         // dist[i][j] = INT_MAX;
// //     //         // pre[i][j] = -1;
// //     //     }
// //     // }
// //     memset(visited, 0, sizeof(visited));
// //     auto isvalid = [&](int x, int y)
// //     {
// //         return (x >= 0 && x < n && y >= 0 && y < m);
// //     };
// //     rep(i, n)
// //     {
// //         rep(j, m)
// //         {
// //             if (arr[i][j] == 'A')
// //             {
// //                 x = i;
// //                 y = j;
// //             }
// //             if (arr[i][j] == 'B')
// //             {
// //                 desx = i;
// //                 desy = j;
// //             }
// //         }
// //     }
// //     char dir[] = {'L', 'R', 'U', 'D'};
// //     vector<pii> d;
// //     d.pb({0, -1});
// //     d.pb({0, 1});
// //     d.pb({-1, 0});
// //     d.pb({1, 0});

// //     queue<point> q;
// //     q.push({x, y, ""});
// //     visited[x][y] = true;
// //     while (!q.empty())
// //     {
// //         auto p = q.front();
// //         q.pop();
// //         int cx = p.x;
// //         int cy = p.y;
// //         string path = p.path;
// //         if (cx == desx && cy == desy)
// //         {
// //             cout << "YES" << endl;
// //             cout << path.size() << endl;
// //             cout << path << endl;
// //             return;
// //         }
// //         rep(i, 4)
// //         {
// //             int newx = cx + d[i].ff;
// //             int newy = cy + d[i].ss;
// //             if (isvalid(newx, newy) && (arr[newx][newy] == '.' || arr[newx][newy] == 'B') && !visited[newx][newy])
// //             {
// //                 visited[newx][newy] = true;

// //                 q.push({newx, newy, path + dir[i]});
// //             }
// //         }
// //     }
// //     cout << "NO" << endl;
// // }
// // /*Don't just sit and hope that God will solve this
// //   fucking do some	thing, try to observe or solve it a different way.
// //   Use that pen and paper.
// //   If nothing works take a deep breath and start again*/
// // int main()
// // {
// //     fast int t = 1;
// //     // cin >> t;
// //     while (t--)
// //     {
// //         still_single();
// //     }
// //     return 0;
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
// int building[1005][1005];
// pair<int, int> parent[1005][1005];
// void printPath(pair<int, int> node)
// {
//         pair<int, int> p = parent[node.first][node.second];
//         if (p.first <= -1) {
//                 return;
//         }

//         printPath(p);

//         if (node.first > p.first)
//                 cout << 'D';
//         else if (node.first < p.first)
//                 cout << 'U';
//         else if (node.second < p.second)
//                 cout << 'L';
//         else if (node.second > p.second)
//                 cout << 'R';
// }

// int main()
// {
//         fast

//         ll m, n, destx, desty;
//         cin >> n >> m;
//         int i,j;
//         queue<pair<int, int>> curr, next;
//         memset(building, -1, sizeof building);
//         memset(parent, -1, sizeof parent);
//         rep(i, n) rep(j, m)
//         {
//                 char c;
//                 cin >> c;
//                 if (c == '.')
//                         building[i][j] = 0;
//                 else if (c == 'A') {
//                         next.push({ i, j });
//                         building[i][j] = 0;
//                         parent[i][j] = { -2, -2 };
//                 } else if (c == 'B') {
//                         destx = i;
//                         desty = j;
//                         building[i][j] = 1;
//                 }
//         }

//         bool flag = 0;
//         ll length = 0, x, y;
//         vector<int> neighbours { 1, -1 };
//         while (!next.empty() && !flag) {
//                 next.swap(curr);
//                 length++;

//                 while (!curr.empty() && !flag) {
//                         tie(x, y) = curr.front();
//                         curr.pop();

//                         for (auto i : neighbours) {
//                                 if (parent[x + i][y].first == -1 && building[x + i][y] != -1) {
//                                         next.push({ x + i, y });
//                                         parent[x + i][y] = { x, y };
//                                 }
//                                 if (parent[x][y + i].first == -1 && building[x][y + i] != -1) {
//                                         next.push({ x, y + i });
//                                         parent[x][y + i] = { x, y };
//                                 }
//                                 if (building[x + i][y] == 1 || building[x][y + i] == 1) {
//                                         flag = 1;
//                                         break;
//                                 }
//                         }
//                 }
//         }

//         if (flag) {
//                 cout<<"YES\n";
//                 cout<<length<<endl;
//                 printPath({ destx, desty });
//                 cout << endl;
//         } else
//                 printf("NO");

//         return 0;
// }
#include <bits/stdc++.h>

#define index(i, n) for (long long i = 0; i < n; i++)
#define index1(i, n) for (long long i = 1; i <= n; i++)
#define range(i, a, b) for (long long i = a; i < b; i++)
#define indexD(i, n) for (long long i = n - 1; i >= 0; i--)
#define index1D(i, n) for (long long i = n; i >= 1; i--)
#define rangeD(i, a, b) for (long long i = a - 1; i >= b; i--)
#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << (x) << '\n'
#define trace(x) cout << '>' << #x << ':' << x << endl;
#define trace2(x, y) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << endl;
#define trace3(x, y, z) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << endl;
#define trace4(x, y, z, w) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << " | " << #w << ':' << w << endl;
#define all(v) (v).begin(), (v).end()
#define First first
#define Second second
#define MOD 1000000007
#define INF (1122512111200000000ll)

typedef long long int ll;

using namespace std;

int building[1005][1005];
pair<int, int> parent[1005][1005];

void printPath(pair<int, int> node)
{
    pair<int, int> p = parent[node.first][node.second];
    if (p.first <= -1)
    {
        return;
    }

    printPath(p);

    if (node.first > p.first)
        cout << 'D';
    else if (node.first < p.first)
        cout << 'U';
    else if (node.second < p.second)
        cout << 'L';
    else if (node.second > p.second)
        cout << 'R';
}

int main()
{
    fast_io;

    ll m, n, destx, desty;
    cin >> n >> m;
    queue<pair<int, int>> curr, next;
    memset(building, -1, sizeof building);
    memset(parent, -1, sizeof parent);
    index1(i, n) index1(j, m)
    {
        char c;
        cin >> c;
        if (c == '.')
            building[i][j] = 0;
        else if (c == 'A')
        {
            next.push({i, j});
            building[i][j] = 0;
            parent[i][j] = {-2, -2};
        }
        else if (c == 'B')
        {
            destx = i;
            desty = j;
            building[i][j] = 1;
        }
    }

    bool flag = 0;
    ll length = 0, x, y;
    vector<int> neighbours{1, -1};
    while (!next.empty() && !flag)
    {
        next.swap(curr);
        length++;

        while (!curr.empty() && !flag)
        {
            tie(x, y) = curr.front();
            curr.pop();

            for (auto i : neighbours)
            {
                if (parent[x + i][y].first == -1 && building[x + i][y] != -1)
                {
                    next.push({x + i, y});
                    parent[x + i][y] = {x, y};
                }
                if (parent[x][y + i].first == -1 && building[x][y + i] != -1)
                {
                    next.push({x, y + i});
                    parent[x][y + i] = {x, y};
                }
                if (building[x + i][y] == 1 || building[x][y + i] == 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag)
    {
        print("YES");
        print(length);

        printPath({destx, desty});
        cout << endl;
    }
    else
        print("NO");

    return 0;
}