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
    int n;
    cin >> n;
    int arr[n];
    int i;
    auto isvalid=[&](int x,int y)
    {
        return(x>=0&&x<n&&y>=0&&y<n);
    };
    rep(i, n) cin >> arr[i];
    int ans[n][n];
    memset(ans, -1, sizeof(ans));
    int j;
    for(i=n-1;i>=0;i--)
    {
        int cnt = arr[i]-1;
        ans[i][i]=arr[i];
        int lx=i,ly=i;
        while(cnt>0)
        {
            if(isvalid(lx+1,ly)&&ans[lx+1][ly]==-1)
            {
                ans[lx+1][ly]=arr[i];
                lx++;
                cnt--;
            }
            else if(isvalid(lx,ly-1)&&ans[lx][ly-1]==-1)
            {
                ans[lx][ly-1]=arr[i];
                ly--;
                cnt--;
            }
        }
        // for (j = i; j >= 0 && cnt > 0; j--)
        // {
        //     if (ans[i][j] == -1)
        //     {
        //         ans[i][j] = arr[i];
        //         cnt--;
        //     }
        //     // else
        //     // {
        //     //     cout << -1 << endl;
        //     //     return 0;
        //     // }
        // }

        // if (cnt > 0)
        // {
        //     for (j = i + 1; j < n&&cnt>0; j++)
        //     {
        //         if (ans[j][i] == -1)
        //         {

        //             ans[j][i] = arr[i];
        //             cnt--;
        //         }
        //         // else
        //         // {
        //         //     cout << -1 << endl;
        //         //     return 0;
        //         // }
        //     }
        // }
        // if(cnt>0)
        // {
        //     for(j=0;j<i&&cnt>0;j++)
        //     {
        //         if(ans[n-1][j]==-1)
        //         ans[n-1][j]=arr[i];
        //         cnt--;
        //     }
        // }
    }
    rep(i,n)
    {
        rep(j,n)
        {
            if(ans[i][j]!=-1)
            {
                cout<<ans[i][j]<<' ';
            }
        }
        cout<<endl;
    }
}