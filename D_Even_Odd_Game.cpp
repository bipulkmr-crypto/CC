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
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll arr[n];
//         ll i;
//         rep(i, n) cin >> arr[i];
//         ll count1 = 0, count2 = 0;
//         // rep(i, n)
//         // {
//         //     if (arr[i] & 1)
//         //         count1++;
//         //     else
//         //         count2++;
//         // }
//         sort(arr, arr + n);
//         reverse(arr, arr + n);
//         rep(i, n)
//         {
//             if ((i % 2 == 1) )
//             {
//                 if(arr[i]%2==1)
//                 count1 -= arr[i];
//             }

//             // else if (i && 1 == 0 && arr[i] & 1 == 0)
//             else
//             {
//                 if (arr[i] % 2 == 0)
//                     count2 += arr[i];
//             }
//         }
//         // if(n==1&&arr[0]&1)
//         // {
//         //     cout<<"Tie"<<endl;
//         //     continue;
//         // }
//         // if(count1==(count2+1)||(n==2&&count2==count1))
//         // {
//         //     cout<<"Tie"<<endl;
//         // }
//         // else if(count2>=count1)
//         // {
//         //     cout<<"Alice"<<endl;
//         // }
//         // else if(count1>(count2+1))
//         // {
//         //     cout<<"Bob"<<endl;
//         // }
//         if (0 == count1)
//         {
//             cout << "Tie" << endl;
//         }
//         else if (0 < count1)
//         {
//             cout << "Alice" << endl;
//         }
//         else
//         {
//             cout << "Bob" << endl;
//         }
//     }
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll arr(n);
        ll i;
        rep(i,n)cin>>arr[i];
        sort(all(arr));
        reverse(all(arr));
        ll ans=0;
        rep(i,n)
        {
            if(i%2==0)
            {
                if(arr[i]%2==0)
                ans+=arr[i];
            }
            else
            {
                if(arr[i]%2==1)
                ans-=arr[i];
            }
        }
        if(ans==0)
        cout<<"Tie\n";
        else if(ans>0)
        {
            cout<<"Alice\n";
        }
        else
        {
            cout<<"Bob\n";
        }
    }
}