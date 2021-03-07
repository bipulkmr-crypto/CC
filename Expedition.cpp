// // #include <iostream>
// // #include <map>
// // #include <cstdio>
// // #include <vector>
// // #include <time.h>
// // #include <utility>
// // #include <cmath>
// // #include <cstring>
// // #include <algorithm>
// // using namespace std;
// // typedef long long int ll;
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // #define gl(n) scanf(% d, &n)
// // #define pi(n) printf(% d, n)
// // #define pl(n) printf(% lld, n)
// // // bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
// // // {
// // //     // double d1=(p1.ss)/(double(p1.ff));
// // //     // double d2=(p2.ss)/(double(p2.ff));
// // //     // if((d2-d1)>0)
// // //     // return true;
// // //     // else
// // //     // return false;
// // //     return (p2.ss < p1.ss);
// // // }
// // // int main()
// // // {
// // //     ll t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         ll n;
// // //         cin >> n;
// // //         vector<pair<ll, ll>> arr(n);
// // //         ll i;
// // //         rep(i, n)
// // //         {
// // //             ll inp1, inp2;
// // //             cin >> inp1 >> inp2;
// // //             arr.pb(make_pair(inp1, inp2));
// // //         }
// // //         ll fuel, dist;
// // //         ll ans = 0;
// // //         cin >> dist >> fuel;
// // //         ll count = 0;
// // //         sort(arr.begin(), arr.end(), comp);
// // //         ll d = 0;
// // //         while (d < dist)
// // //         {

// // //             ll k = 0;
// // //             for (k = 0; k < n; k++)
// // //             {
// // //                 if (arr[k].ff <= fuel)
// // //                 {
// // //                     fuel = fuel - arr[k].ff + arr[k].ss + d;
// // //                     d += arr[k].ff;
// // //                     break;
// // //                 }
// // //             }
// // //             if (fuel >= (dist - d))
// // //             {
// // //                 cout << count << endl;
// // //                 break;
// // //             }
// // //             else
// // //             {
// // //                 d += (arr[i].ff);
// // //                 count++;
// // //             }
// // //         }
// // //     }
// // // }
// // #include<set>
// // int main()
// // {
// //     ll t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         set<pair<ll,ll> > s;
// //         ll n;
// //         cin>>n;
// //         ll i;
// //         rep(i,n)
// //         {
// //             ll inp1,inp2;
// //             cin>>inp1>>inp2;
// //             s.insert(make_pair(inp1,inp2));
// //         }
// //         ll fuel, dist;
// //         ll ans = 0;
// //         cin >> dist >> fuel;
// //         ll count = 0;
// //         ll d = 0;
// //         // while(d<dist)
// //         // {
            
// //         // }
// //         // for(auto x:s)
// //         // {
// //         //     cout<<x.ff<<" "<<x.ss<<endl;
// //         // }
// //         while(d<dist)
// //         {
// //             auto it=s.end();
// //             it--;
// //             while(it!=s.begin())
// //             {
// //                 if(*(it->)
// //             }
// //         }
// //     }
// // }
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
// #include<bits/stdc++.h>
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
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll  i;
//         ll arr[(ll)1e6+1]={0};
//         for(i=1;i<=n;i++)
//         {
//             ll x,y;
//             cin>>x>>y;
//             arr[x]=y;
//         }
//         priority_queue<ll,vector<ll>> p;
//         ll d=0,dist,fuel;
//         ll count=0;
//         cin>>dist>>fuel;
//         // while(d<dist)
//         // {
//         //     for(i=d;i<=fuel;i++)
//         //     p.push(arr[i]);
//         //     if(p.empty())
//         //     {
//         //         count=-1;
//         //         break;
//         //     }
//         //     fuel+=(p.top());
//         //     p.pop();
//         //     d+=fuel;
//         //     count++;
//         // }
//         ll start=dist;
//         ll cnt=n-1;
//         for(i=1;i<dist;i++,fuel--)
//         {
            
//             if(fuel==0)
//             {
//                 if(p.empty())
//                 {
//                     count=-1;
//                     break;
//                 }
//                 fuel+=p.top();
//                 p.pop();
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
// }

#include<bits/stdc++.h>
#define he cout<<"HERE"<<endl;
#define ones7 1111111
#define ones6 111111
#define ones5 11111
#define ge getch();
#define pi pair<int,int>
#define pii pair<pi,int>
#define mii map<int,int>
#define ff first
#define ss second
#define vi vector<int>
#define sti set<int>
#define qui queue<int>
#define l long
#define ll long long
#define qull queue<ll>
#define vill vector<ll>
#define stll set<ll>
#define mll map<ll,ll>
#define forr(i,n) for(int i=0;i<n;i++)
#define forrr(i,j,n) for(int i=j;i<n;i++)
#define forrb(i,n) for(int i=n;i>0;i--)
#define forrrb(i,n,v)  for(int i=n;i>v;i--)
#define s(n) scanf("%d",&n);
#define p(n) printf("%d",n);
#define sll(n) scanf("%lld",&n);
#define pll(n) printf("%lld=",n);
#define c(n) cin>>n;
#define pause system("pause");
#define set(a,val) memset(a,val,sizeof a);
#define pb push_back
#define co(n) cout<<n<<endl;
#define MOD 1000000007
#define INF 1000000007
#define foreach(it,container) for(typeof(container.begin()) it=container.begin() ; it!=container.end() ; it++)
#define NAME "problem"

using namespace std;
set<pi>st;
vector<pi>vec;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        vec.clear();st.clear();
        int N,dist,fuel,a,b;
        cin>>N;
        for (int i=0; i<N; i++)
        {
            cin>>a>>b;
            vec.pb(pi(a,b));
        }
        sort(vec.begin(),vec.end());
        cin>>dist>>fuel;
        set<pi> :: iterator  it;
        int start=dist;
        int cnt=N-1;
        int ans=0;
        // cout<<dist<<" initial "<<endl;
        for (int i=0; i<dist; i++,fuel--)
        {
            //cout<<vec[cnt].ff<<" "<<vec[cnt].ss<<" "<<fuel <<endl;
            if(cnt!=-1)
            {
                //cout<<vec[cnt].ff<<" "<<vec[cnt].ss<<" "<<fuel <<endl;
                if(start-vec[cnt].ff==i)
                {
                    st.insert(pi(vec[cnt].ss,vec[cnt].ff));
                    cnt--;
                }
            }
            if(fuel==0)
            {
                //  cout<<((*it).ff)<<"  here "<<((*it).ss)<<endl;
                if(st.size()==0)
                {
                    cout<<"-1"<<endl;
                    goto x;
                    break;
                }
                //cout<<" here stopping " <<endl;
                ans++;
                it=st.end();
                it--;
                fuel=fuel+((*it).ff);
                st.erase(it);
            }
        }
        cout<<ans<<endl;
        x:;

    }
    return 0;
}