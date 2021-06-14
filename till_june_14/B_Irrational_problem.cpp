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
    int arr[4], a, b;

    int i;
    rep(i, 4) cin >> arr[i];
    cin >> a >> b;
    sort(arr, arr + 4);
    int cnt=0;
    int mini=*min_element(arr,arr+4);

    {
        for(i=a;i<=min(b,mini-1);i++)
        {
            bool flag=true;
            int k;
            int p=i;
            rep(k,4)
            {
                p%=arr[k];
            }
            if(p==i)
            cnt++;
        }
        cout<<cnt<<endl;
    }
    // int p1,p2,p4,p3,a,b;
    // cin>>p1>>p2>>p3>>p4>>a>>b;
    // int mini=*min_element({p1,p2,p3,p4});
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}