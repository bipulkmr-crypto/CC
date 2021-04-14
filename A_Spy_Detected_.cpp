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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        // mll m;
        // ll i;
        // rep(i, n)
        // {
        //     ll inp;
        //     cin >> inp;
        //     m[inp]++;
        // }
        // auto it = m.begin();
        // if (it->second == 1)
        // {
        //     cout << it->first << endl;
        // }
        // else
        // {
        //     it++;
        //     cout << it->first << endl;
        // }
        ll arr[n];
        ll copy[n];
        ll j;
        ll i;rep(i, n)cin>>arr[i];
        rep(i, n)
        copy[i]=arr[i];
        sort(copy,copy+n);
        if(copy[0]!=copy[n-1])
        {
            if(copy[0]==copy[1])
            {
                ll ans=0;
                rep(i,n)
                {
                    if(copy[n-1]==arr[i])
                    {
                        break;
                    }
                }
                cout<<(i+1)<<endl;
            }
            else
            {
                ll ans=0;
                rep(i,n)
                {
                    if(copy[0]==arr[i])
                    {
                        break;
                    }
                }
                cout<<(i+1)<<endl;

            }
        }
        // bool flag=true;
        // rep(i, n)
        // {
        //     rep(j,n)
        //     {
        //         if(i!=j)
        //         {
        //             if(arr[i]!=arr[j])
        //             {
        //                 flag=false;
        //                 break;
                        
        //             }
        //         }
        //     }
        //     if(flag==false)
        //     break;
        // }
        // cout<<(j+1)<<endl;
    }
}