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
#define ret return(s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container
#define present(s, x) , it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
vector<pair<double, double>> arr;
ll n;
double sum;
bool good(double x)
{
    double s = 0;
    for (ll i = 0; i < n; i++)
    {
        s += ((arr[i].ff) / (arr[i].ss + x));
    }
    if ((s - sum) > 0)
        return false;
    else
        return true;
}
int main()
{
    ll i;

    cin >> n >> i;
    arr.resize(n);
    for (i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;
        arr[i].ff = a;
        arr[i].ss = b;
    }
    cin >> sum;
    double low = -1e8, high = 1e8, mid;
    ll t = 1000000;
    for (int i = 0; i < n; i++)
    {
    
        low= max(low, -1 * arr[i].ss);
    }
    low+=1e-8;
    while((high-low)>(1e-7))
    {
        mid = low + (high - low) / 2.0;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    if (good(high))
    {
        cout << setprecision(10) << fixed << low << endl;
    }
    else
    {
        cout << setprecision(10) << fixed << low << endl;
    }
}