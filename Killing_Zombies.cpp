#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e4;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, Z[MAX_N];
        long long D[MAX_N];
        vector<pair<int, int>> c[MAX_N];

        cin >> N >> M;
        for (int i = 1; i <= N; i++)
            cin >> Z[i];
        for (int i = 0; i < M; i++)
        {
            int L, R, K;
            cin >> L >> R >> K;
            c[L].emplace_back(R, K);
        }

        set<pair<int, int>> s;
        long long dmg = 0, ans = 0;
        for (int i = 1; i <= N; i++)
        {
            dmg -= D[i];
            for (auto p : c[i])
                s.insert(p);
            Z[i] -= dmg;
            while (Z[i] > 0)
            {
                if (s.empty() || s.rbegin()->first < i)
                {
                    ans = -1;
                    break;
                }
                int R, K;
                tie(R, K) = *s.rbegin();
                s.erase(prev(s.end()));
                int d = min(Z[i], K);
                Z[i] -= d;
                K -= d;
                ans += d;
                dmg += d;
                D[R + 1] += d;
                if (K)
                    s.emplace(R, K);
            }
            if (ans == -1)
                break;
        }

        if (ans == -1)
            cout << "NO\n";
        else
            cout << "YES " << ans << "\n";

        fill_n(D + 1, N, 0);
        fill_n(c + 1, N, vector<pair<int, int>>(0));
    }
}
// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #include<set>
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// #define range (ll)1e5 + 1
// int main()
// {
//     ios::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<ll> z[range];
//         vector<ll> dr[range];
//         vector<pair<ll, ll>> c[range];
//         ll i;
//         // fu(i, 1, n)
//         // {
//         //     ll temp;
//         //     cin>>temp;
//         //     z.emplace(temp);
//         // }
//         for (int j = 1; j <= n; j++)
//             cin >> z[j];
//         rep(i, m)
//         {
//             ll l, r, k;
//             cin >> l >> r >> k;
//             c[l].emplace_back(r, k);
//         }
//         set<pair<ll, ll>> s;
//         ll ans = 0, dmg = 0;
//         for (i = 1; i <= n; i++)
//         {
//             dmg -= dr[i];
//             for (auto x : c[i])
//             {
//                 s.insert(x);
//             }
//             while (z[i] > 0)
//             {
//                 if (s.empty() || s.rbegin()->first < 1)
//                 {
//                     ans = -1;
//                     break;
//                 }
//                 ll r, k;
//                 tie(r, k) = *s.rbegin();
//                 s.erase(prev(s.end());
//                 ll d=min(z[i],k);
//                 z[i]-=d;
//                 k-=d;
//                 ans+=d;
//                 dmg+=d;
//                 dr[r+1]+=d;
//                 if(k)
//                 {
//                     s.emplace(r,k);
//                 }
//             }
//             if(ans == -1)
//             break;
//         }
//         if (ans == -1)
//             cout << "NO\n";
//         else
//         {
//             cout << "YES\n"
//                  << ans << "\n";
//         }
//     }
// }
// #include <iostream>
// #include <map>
// #include <cstdio>
// #include<set>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// int main()
// {
//     ll t;
//     ll range=1e5+5;
//     cin>>t;
//     while(t--)
//     {
//         ll n,m;
//         cin>>n>>m;
//         ll d[range]={0};
//         vector<pair<ll,ll> > c[range];
//         ll z[range]={0};
//         ll i;
//         rep(i,n)
//         {
//             cin>>z[i+1];
//         }
//         rep(i,m)
//         {
//             ll l,r,k;
//             cin>>l>>r>>k;
//             c[l].emplace_back(r,k);
//         }
//         set<pair<ll,ll> > s;
        

//     }
// }