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
void still_single()
{
    ll n;
    cin >> n;
    int i;
    vll arr;
    arr.resize(n);
    rep(i, n) cin >> arr[i];
    ll sum = 0;
    rep(i, n) sum += arr[i];
    mll fac;
    ll temp = sum;
    i = 2;
    bool flag=true;
    rep(i,n)
    {
        if(arr[i]!=arr[0])
        {
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<0<<endl;
        return ;
    }
    i=2;
    while (temp > 1)
    {
        if (temp % i == 0)
        {
            while (temp % i == 0)
            {
                fac[i]++;
                temp /= i;
            }
        }
        else
            i++;
    }
    ll op = 1;
    ll ans=INT_MAX;
    ford(fac, it)
    {
        op *= (it->second + 1);
    }
    for (i = min(op, n); i >= 1; i--)
    {
        if (sum % i == 0)
        {
            ll s = sum / i;
            bool flag = true;
            ll cursum = 0;
            int j;
            int p = 0;
            rep(j, n)
            {
                cursum += arr[j];
                if (cursum > s)
                {
                    flag = false;
                    break;
                }
                else if (cursum == s)
                {
                    p++;
                    cursum = 0;
                }
            }
            if (flag)
            {
                ans=min(n-i,ans);
            }
        }
    }
    cout<<ans<<endl;
    // cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}