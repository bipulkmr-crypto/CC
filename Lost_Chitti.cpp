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
struct point
{
    ll x, y;
};
ll shortestPath(point p1, point p2)
{
    ll dx = abs(p1.x - p2.x);
    ll dy = abs(p1.y - p2.y);
    return max(dx, dy);
}
ll coverPoints(point sequence[], ll size)
{
    ll stepCount = 0;
    for (ll i = 0; i < size - 1; i++)
    {
        stepCount += shortestPath(sequence[i],
                                  sequence[i + 1]);
    }
    return stepCount;
}
int main()
{
    ll x1,y1,x2,y2,k;
    cin>>x1>>y1>>x2>>y2>>k;
    ll ans=
}