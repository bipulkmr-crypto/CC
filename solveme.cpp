// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int countInRange(int arr[], int n, int x, int y)
// {
//     int count = 0;
//     count = upper_bound(arr, n, y) - lower_bound(arr, n, x) + 1;
//     return count;
// }
// int main()
// {

//     ll n, k;
//     cin >> n >> k;
//     int arr[n] = {0};

//     ll i;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     ll c = 0;
//     ll pos1=upper_bound(arr,arr+n,k)-arr

//     cout << (n - c) << " students need to worry!" << endl;
//     cout << c << " students should relax!" << endl;
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
    ll n;
    ll k;
    cin>>n>>k;
    vector<ll> v;
    ll i;
    ll ans=0;
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        v.pb(inp);
    }
    sort(v.begin(),v.end());
    rep(i,n)
    {
        ll r1=v[i]-k;
        ll r2=v[i]+k;
        ll pos1=lower_bound(v.begin(),v.end(),r1)-v.begin();
        ll pos2=upper_bound(v.begin(),v.end(),r2)-v.begin();
        if(pos2-pos1>1)
        ans++;
    }
    cout<<ans<<" students need to worry!"<<endl;
    cout<<(n-ans)<<" students should relax!"<<endl;
}