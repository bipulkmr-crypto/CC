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
const int MAX_N =200009;
int parent[MAX_N];
int sizee[MAX_N] = {0};
void make_set(int v)
{
    parent[v] = v;
}
int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizee[a] < sizee[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        sizee[a] += sizee[b];
    }
}
// int ind=0;

// void still_single()
// {
//     int n;
//     cin >> n;
//     int i;
//     fu(i, 1, n)
//     {
//         make_set(i);
//     }
//     int cnt=0;
//     int arr[n+1];
//     int ans[n+1];
//     int i;
//     fu(i,1,n)
//     {
//         if(arr[i]==i)
//         {
//             ind=i;
//         }
//         else
//         {

//         }
//     }
// }
int ind;
void still_single()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }
    int ans[n + 5];
    int ind2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans[i] = a[i];
        if (a[i] == i)
        {
            ind = i;
        }
        else
        {
            if (find_set(i) == find_set(a[i]))
            {
                ind2 = i;
                continue;
            }
            union_sets(a[i], i);
        }
    }
    int count = 0;
    if (ind == 0)
    {
        count = 1;
        ind = ind2;
    }
    ans[ind] = ind;
    for (int i = 1; i <= n; i++)
    {
        if (i == ind)
            continue;
        int x = find_set(i);
        if (x == i)
        {
            count++;
            ans[i] = ind;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        ind = 0;
        still_single();
    }
    return 0;
}