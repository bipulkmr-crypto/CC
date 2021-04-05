// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int,int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long,long long>
// // #define sii set<int>
// // #define sll set<long long>
// // #define vii vector<int>
// // #define vll vector<long long>
// // #define vll vector<long long>
// // #define mii map<int,int>
// // #define mll map<long long, long long>
// // #define lob lower_bound
// // #define upb upper_bound
// // #define ret return
// // #define present(s,x) (s.find(x) != s.end())
// // #define cpresent(s,x) (find(all(s),x) != s.end())
// // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // #define ff first
// // #define all(v) v.begin(),v.end()
// // #define ss second
// // #define rep(i,n) for(i=0;i<n;i++)
// // #define fu(i,a,n) for(i=a;i<=n;i++)
// // #define fd(i,n,a) for(i=n;i>=a;i--)
// // #define gi(n) scanf(%d,&n)
// // int main()
// // {
// //     ll n;
// //     cin>>n;
// //     ll siz=2*n;
// //     ll arr[siz]];
// //     ll i;
// //     rep(i,siz)
// //     {

// //     }
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long
// // void op1(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i += 2)
// //     {
// //         swap(arr[i], arr[i + 1]);
// //     }
// // }
// // void op2(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         swap(arr[i], arr[n + i]);
// //     }
// // }
// // bool is_sorted(int arr[], int n)
// // {
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         if (arr[i] > arr[i + 1])
// //             return false;
// //     }
// //     return true;
// // }
// // void print(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// //     cout << "\n";
// // }
// // int count = 0;
// // void solve(int arr[], int n)
// // {
// // }
// // signed main()
// // {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif
// //     int n;
// //     cin >> n;
// //     int sz = 2 * n;
// //     int arr[sz];
// //     for (int i = 0; i < sz; i++)
// //         cin >> arr[i];
// //     int cnt = 0;
// //     bool flag = false;
// //     while (!is_sorted(arr, sz))
// //     {
// //         if (flag)
// //             break;
// //         if (arr[0] > arr[1])
// //         {
// //             op1(arr, sz);
// //             cnt++;
// //         }
// //         else if (arr[0] > arr[n])
// //         {
// //             op2(arr, n);
// //             cnt++;
// //         }
// //         else
// //         {
// //             flag = true;
// //         }
// //     }
// //     if (flag)
// //     {
// //         cout << -1 << "\n";
// //     }
// //     else
// //     {
// //         cout << cnt << "\n";
// //     }
// //     return 0;
// // }
#include <algorithm>
#include <bits/stdc++.h>
#include <utility>

#define endl "\n"
#define F first
#define S second
#define mod 1000000007
#define ll long long int
#define ull unsigned long long int
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 0; i <= n; i++)
#define fr2(i, n) for (ll i = 1; i <= n; i++)
#define fin(v, n) find(v.begin(), v.end(), n)
#define pb(n) push_back(n);
#define aut std::vector<ll>::iterator
#define vsort(v) sort(v.begin(), v.end())
#define asort(a, n) sort(a, a + n)
#define ssort(s) sort(s.begin(), s.end())
#define rssort(s) sort(s.begin(), s.end(), greater<char>())
#define lg(m, n) log(m) / log(n)
#define si(s) stoi(s)
#define is(n) to_string(n)
#define ve(v, n) v.erase(v.begin() + n)
#define pv(v)                                      \
    for (auto it = v.begin(); it != v.end(); it++) \
    {                                              \
        cout << *it << endl;                       \
    }
#define shit                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ks(n) cout << "Case #" << n + 1 << ": "
#define low(v, n) lower_bound(v.begin(), v.end(), n);
#define upp(v, n) upper_bound(v.begin(), v.end(), n);
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define maxn 101

using namespace std;
int main()
{
    shit;

    int n;
    cin >> n;
    int a[2 * n];
    int m = 0;
    fr(i, 2 * n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            m = i;
        }
    }
    if (n % 2 == 0)
    {
        if (m == 0 || m == 1 || m == n || m == n + 1)
        {
            int k = 0;
            if (m == 1)
            {
                for (int i = 0; i < 2 * n; i += 2)
                {
                    swap(a[i], a[i + 1]);
                }
                k = 1;
            }
            if (m == n)
            {
                for (int i = 0; i < n; i++)
                {
                    swap(a[i], a[i + n]);
                }
                k = 1;
            }
            if (m == n + 1)
            {
                for (int i = 0; i < 2 * n; i += 2)
                {
                    swap(a[i], a[i + 1]);
                }
                for (int i = 0; i < n; i++)
                {
                    swap(a[i], a[i + n]);
                }
                k = 2;
            }
            for (int i = 0; i < 2 * n; i++)
            {
                if (a[i] != i + 1)
                {
                    cout << -1;
                    return 0;
                }
            }
            cout << k;
        }
        else
        {
            cout << -1;
        }
    }
    if(n&1)
    {
        if(m==0)
        {
            if(is_sorted(a,a+2*n))
            {
                cout<<0<<endl;
                
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else if(m==2*n-1)
        {
            cout<<3<<endl;
        }
        else if(m==n-1)
        {
            cout<<3<<endl;
        }
        else if(m==(2*n-2))
        {
            cout<<3<<endl;
        }
        else 
        cout<<-1<<endl;
        
    }
}
/
#include<algorithm>
#include <bits/stdc++.h>
#include<utility>

#define endl "\n"
#define F first
#define S second
#define mod 1000000007
#define ll long long int
#define ull unsigned long long int
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=0;i<=n;i++)
#define fr2(i,n) for(ll i=1;i<=n;i++)
#define fin(v,n) find(v.begin(),v.end(),n)
#define pb(n) push_back(n);
#define aut std::vector<ll>::iterator
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a,a+n)
#define ssort(s)  sort(s.begin(),s.end())
#define rssort(s) sort(s.begin(),s.end(),greater<char>())
#define lg(m,n) log(m)/log(n)
#define si(s) stoi(s)
#define is(n) to_string(n)
#define ve(v,n) v.erase(v.begin()+n)
#define pv(v)   for(auto it=v.begin();it!= v.end();it++){cout << *it  << endl;}
#define shit ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ks(n) cout << "Case #" << n+1 <<": "
#define low(v,n) lower_bound(v.begin(),v.end(), n);
#define upp(v,n) upper_bound(v.begin(),v.end(), n);
#define test ll t; cin >> t; while(t--)
#define maxn 101

using namespace std;
int main(){
      shit;

      int n; cin >> n;
      int a[2*n];
      int m=0;
      fr(i,2*n){
       cin >> a[i];
       if(a[i] == 1){
        m = i;
       }
      }
    /*  if(n%2 == 0){
        if( m== 0 || m== 1 || m ==n || m == n+1){
            int k=0;
            if( m == 1){
                for(int i=0;i<2*n;i+=2){
                    swap(a[i],a[i+1]);
                }
                k=1;
            }
            if(m == n){
                for(int i=0;i<n;i++){
                        swap(a[i], a[i+n]);
                }
                k =1;
            }
            if(m == n+1){
                for(int i=0;i<2*n;i+=2){
                    swap(a[i],a[i+1]);
                }
                for(int i=0;i<n;i++){
                        swap(a[i], a[i+n]);
                }
                k = 2;
            }
            for(int i=0;i<2*n; i++){
                if(a[i]!= i+1){
                    cout << -1;
                    return 0;
                }
            }
            cout << k;
        }
        else{
            cout << -1;
        }
      }
      else{
        */
        int k=0;
         while(m != 0){
            if(m%2 == 1){
              for(int i=0;i<2*n;i+=2){
                swap(a[i],a[i+1]);
                }
                k++;
                fr(i,2*n){
                if(a[i] == 1){
                    m = i;
                    break;
                }
                }
            }
            else{
                for(int i=0;i<n;i++){
                    swap(a[i], a[i+n]);
                }
                k++;
                fr(i,2*n){
                if(a[i] == 1){
                    m = i;
                    break;
                }
                }
         }
         }
         fr(i,2*n){
         if(a[i] != i+1){
            cout << -1;
            return 0;
         }
         }
         cout << k;
}
//}