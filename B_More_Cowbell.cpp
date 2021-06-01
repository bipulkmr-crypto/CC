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
ll n, k;
vll arr(100005);
// bool good(ll x)
// {
//     ll i = 0;
//     ll cnt = 0;
//     ll cur = 0;
//     while (i < n)
//     {
//         cur = 0;
//         cur += arr[i++];
//         while (cur <= x && i < n)
//         {
//             cur += arr[i++];
//         }
//         cnt++;
//     }
//     return (cnt <= k);
// }
#define f(i,x,n) for(long long int i=x;i<n;i++)
bool check(int ss){
    vector <int> v(k,ss);
    
    f(i,0,k){
        v[i] -= arr[n-i-1];
    }
    int j = 0;
    
    f(i,2*k-n,k){
        if(v[i] < arr[j]){
            return false;
        }
        j++;
    }
    return true;
}
 
bool good(ll x)
{
    ll i;
    ll temp = x;
    ll cnt = 1;
    for (i = 0; i < n;)
    {
        if ((temp - arr[i]) < 0)
        {
            cnt++;
            if(temp==arr[i])
            temp=x;
            else
            temp = x-arr[i++];
        }
        else
        {
            temp -= arr[i];
            i++;
        }
        if(cnt>k)
        return false;
    }
    return true;
}
int main()
{
    cin >> n;
    cin >> k;
    ll i;
    rep(i, n) cin >> arr[i];
    ll low = *max_element(all(arr)), high =arr[n-1]+arr[n-2], mid;
    while (high - low > 1)
    {
        mid = (low) + (high - low) / 2;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    if (good(low))
        cout << low << endl;
    else
        cout << high << endl;
}