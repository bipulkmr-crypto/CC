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
const int N=805;
void still_single()
{
    int n,k;
    cin>>n>>k;
    int arr[N][N];
    int i,j;
    int sum[N][N]={{0}};
    rep(i,n)
    {
        rep(j,n)cin>>arr[i][j];
    }
    rep(i,n)
    {
        sum[i][0]=0;
        sum[0][i]=0;
    }
    int lim=(k*k)/2+1;
    int low=-1,high=1e9,mid;
    while (high-low>1)
    {
        mid=low+(high-low)/2;
        rep(i,n)
        {
            rep(j,n)
            {
                sum[i+1][j+1]=sum[i+1][j]+sum[i][j+1]-sum[i][j];
                if(arr[i][j]>mid)sum[i+1][j+1]++;
            }
        }
        bool flag=false;
        rep(i,n-k+1)
        {
            rep(j,n-k+1)
            {
                if((sum[i+k][j+k]+sum[i][j]-sum[i][j+k]-sum[i+k][j])<lim)flag=true;
            }
        }
        if(flag)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    cout<<high<<endl;
    
}
/*Don't just sit and hope that God will solve this
  fucking do some	thing, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again*/
int main()
{
    fast
    int t=1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}