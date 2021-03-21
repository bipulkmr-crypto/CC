// #include <bits/stdc++.h>

// #define index(i, n) for (int i = 0; i < n; i++)
// #define counts(i, n) for (int i = 1; i <= n; i++)
// #define range(i, a, b) for (int i = a; i < b; i++)
// #define indexD(i, n) for (int i = n - 1; i >= 0; i--)
// #define countsD(i, n) for (int i = n; i > 1; i--)
// #define rangeD(i, a, b) for (int i = a - 1; i >= b; i--)
// #define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define print(x) cout << (x) << '\n'
// #define trace(x) cout << '>' << #x << ':' << x << endl;
// #define trace2(x, y) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << endl;
// #define trace3(x, y, z) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << endl;
// #define trace4(x, y, z, w) cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | " << #z << ':' << z << " | " << #w << ':' << w << endl;
// #define all(v) (v).begin(), (v).end()
// #define pb push_back
// #define mp make_pair
// #define MOD 1000000007

// typedef unsigned long long ull;
// typedef long long int ll;

// using namespace std;

// int main()
// {
//         fast_io;

//         ll t, n, m, k, x, y, r, ans, c;
//         cin >> n >> k;
//         ll arr[n + 10];
//         ll visited[n + 10];
//         counts(i, n) cin >> arr[i];
//         memset(visited, -1, sizeof(visited));

//         ll move = 0, current = 1;
//         while (move < k) {
//                 if (visited[current] == -1) {
//                         visited[current] = move;
//                         current = arr[current];
//                         move++;
//                 } else {
//                         ll cycleSize = move - visited[current];
//                         move += cycleSize * ((k - move) / cycleSize);
//                         while (move < k) {
//                                 current = arr[current];
//                                 move++;
//                         }
//                 }
//         }
//         print(current);

//         return 0;
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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
        ll n,k;
        cin>>n>>k;
        ll arr[n+1];
        ll i;
        rep(i,n)
        {
                cin>>arr[i];
        }
        vector>
}