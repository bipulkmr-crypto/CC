// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define fast                          \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int, int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long, long long>
// // // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int, int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s, x) (s.find(x) != s.end())
// // // #define cpresent(s, x) (find(all(s), x) != s.end())
// // // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(), v.end()
// // // #define ss second
// // // #define rep(i, n) for (i = 0; i < n; i++)
// // // #define fu(i, a, n) for (i = a; i <= n; i++)
// // // #define fd(i, n, a) for (i = n; i >= a; i--)
// // // #define gi(n) scanf(% d, &n)
// // // int main()
// // // {
// // //     // ll t;
// // //     // cin >> t;
// // //     // while (t--)
// // //     {
// // //         ll curr = 0;
// // //         ll n;
// // //         cin >> curr;
// // //         cin >> n;
// // //         vll x1;
// // //         vll x2;
// // //         vll y1;
// // //         vll y2;
// // //         ll i;
// // //         x1.resize(n);
// // //         y1.resize(n);
// // // //         x2.resize(n);
// // // //         y2.resize(n);
// // // //         rep(i, n)
// // // //         {
// // // //             cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
// // // //         }
// // // //         // if(curr!=x2[n-1]||curr!=x1[0])
// // // //         // {
// // // //         //     cout<<
// // // //         // }
// // // //         ll ans;
// // // //         ll pos = -1;
// // // //         bool flag = false;
// // // //         rep(i, n)
// // // //         {
// // // //             if (x1[i] <= curr && x2[i] >= curr)
// // // //             {
// // // //                 pos = i;
// // // //                 flag = true;
// // // //                 break;
// // // //             }
// // // //         }
// // // //         if (!flag)
// // // //         {
// // // //             cout << curr << endl;

// // // //         }
// // // //         else
// // // //         {
// // // //             ans = curr;
// // // //             for (i = pos; i >= 0; i--)
// // // //             {
// // // //                 if (ans == x2[i] && y1[i + 1] >= y2[i])
// // // //                 {
// // // //                     ans = x1[i];
// // // //                 }
// // // //                 else
// // // //                 {
// // // //                     ans = x1[i + 1];
// // // //                     break;
// // // //                 }
// // // //             }
// // // //             cout << ans << endl;
// // // //         }

// // // //         // else if (ans)
// // // //         // {
// // // //         // }
// // // //     }
// // // // }
// // // //Not considering the cases where the slides are zigzag position
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
// #define epsilon 1e-9
// #define x1 dasagd

// #define y1 adsfdhs
// ll n, X, y;
// long long int x1[10001], y1[10001], x2[10001], y2[10001];
// pair<ll, ll> getlower(ll id)
// {
//     if (y1[id] < y2[id])
//     {
//         return (make_pair(x1[id], y1[id]));
//     }
//     return (make_pair(x2[id], y2[id]));
// }
// ll visited[2000];
// ll find()
// {
//     ll res = -1;
//     double line = -1;
//     ll i;
//     for (i = 1; i <= n; i++)
//     {
//         if (visited[i] || x1[i] > X || x2[i] < X)
//             continue;
//         double x=y1[i]+(y2[i]-y1[i])/(1.0*(X-x1[i])/(x2[i]-x1[i]));
//         if (x > y + epsilon)
//             continue;
//         if (x > line)
//         {
//             line = x;
//             res = i;
//         }
//     }
//     if (res > 0)
//         visited[res] = 1;
//     return res;
// }
// int main()
// {
//     cin >> X >> n;
//     y = 1e9;
//     ll i;
//     for (i = 1; i <= n; i++)
//     {
//         cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
//     }
//     while (true)
//     {
//         ll id = find();
//         if (id == -1)
//             break;
//         pair<ll, ll> at = getlower(id);
//         X = at.ff;
//         y = at.ss;
//     }
//     cout << X << endl;
// }
#include<bits/stdc++.h>

#define eps 1e-9

#define x1 dasagd

#define y1 adsfdhs

using namespace std;

int n,X,y;

int x1[1<<20],y1[1<<20],x2[1<<20],y2[1<<20];

pair<int, int> get_lower(int id)

{

	if (y1[id]<y2[id])

		return make_pair(x1[id],y1[id]);

	return make_pair(x2[id],y2[id]);

}

int was[2000];

int find()

{

	int res=-1;

	double bst=-1;

	for (int i=1;i<=n;i++)

	{

		if (was[i]||x1[i]>X||x2[i]<X)

			continue;

		double AT=y1[i]+(y2[i]-y1[i])*1.0*(X-x1[i])/(x2[i]-x1[i]);

		if (AT>y+eps)

			continue;

		if (AT>bst)

			bst=AT,

			res=i;

	}

	if (res>0)

		was[res]=1;

	return res;

}

int main(){

cin>>X>>n;

y=1e9;

for (int i=1;i<=n;i++)

{

	cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];

}

while (true)

{

	int id=find();

	if (id==-1)

		break;

	pair<int, int> at=get_lower(id);

	X=at.first;

	y=at.second;

}

cout<<X<<endl;

return 0;}
