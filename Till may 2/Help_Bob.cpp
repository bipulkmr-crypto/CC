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
// //     // ll t;
// //     // cin>>t;
// //     // while(t--)
// //     // {
// //         ll k,x;
// //         ll n=0;
// //         ll sum=0;
// //         // cin>>k>>x;
// //     //     ll fr=0;
// //     //     if(((k)&(k-1))==0)
// //     //     {
// //     //         // while(sum<x)
// //     //         // {
// //     //         //     if(fr&1)
// //     //         //     sum+=k;
// //     //         //     n+=k;
// //     //         //     fr++;
// //     //         // }
// //     //         // if(fr%2==0)
// //     //         // {
// //     //         //     n-=(sum-x+1);
// //     //         // }
// //     //         // else
// //     //         // {
// //     //         //     n-=(sum-x+1+k);
// //     //         // }
// //     //         n=2*(x/k)*k+(x%k);

// //     //     }
// //     //     else 
// //     //     {
// //     //         while(sum<x)
// //     //         {
// //     //             sum+=(k-1);
// //     //             n+=k;
// //     //         }
// //     //         n-=(sum-x);
// //     //     }
       
// //     //     cout<<n<<endl;
// //     // }
// //     ll i;
// //     for(i=0;i<25;i++)
// //     {
// //         ll val=i&18;
// //         cout<<min(1ll,val)<<endl;
// //     }
// // }
// // // while(sum<x)
// // // {

// // //     sum++;
// // //     n++;
    
// // // }
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long,long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int,int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s,x) (s.find(x) != s.end())
// #define cpresent(s,x) (find(all(s),x) != s.end())
// #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(),v.end()
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
//         ll k,x;
//         ll i=0;
//         cin>>k>>x;
//         ll val=0;
//         for(i=0;i<=(k*x);i++)
//         {
//             if(val==x)
//             {
//                 break;
//             }
//             val+=min(1ll,(i&k));
//         }
//         cout<<(i-1)<<endl;
//     }
// }
#include <bits/stdc++.h>
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
unsigned int getLeftmostBit(int n)
{
	int m = 0;
	while (n > 1)
	{
		n = n >> 1;
		m++;
	}
	return m;
}
ll getNextLeftmostBit(int n, int m)
{
	unsigned int temp = 1 << m;
	while (n < temp) {
		temp = temp >> 1;
		m--;
	}
	return m;
}

unsigned int _countSetBits(unsigned int n, int m);
unsigned int countSetBits(unsigned int n)
{
	// Get the position of leftmost set
	// bit in n. This will be used as an
	// upper bound for next set bit function
	int m = getLeftmostBit(n);

	// Use the position
	return _countSetBits(n, m);
}

ll _countSetBits(unsigned int n, int m)
{
	// Base Case: if n is 0, then set bit
	// count is 0
	if (n == 0)
		return 0;

	/* get position of next leftmost set bit */
	m = getNextLeftmostBit(n, m);

	// If n is of the form 2^x-1, i.e., if n
	// is like 1, 3, 7, 15, 31, .. etc,
	// then we are done.
	// Since positions are considered starting
	// from 0, 1 is added to m
	if (n == ((unsigned int)1 << (m + 1)) - 1)
		return (unsigned int)(m + 1) * (1 << m);

	// update n for next recursive call
	n = n - (1 << m);
	return (n + 1) + countSetBits(n) + m * (1 << (m - 1));
}

// Driver code
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,x;
        cin>>k>>x;
        for(ll i=(k*x);i>=0;i--)
        {
            ll val=(_countSetBits(i)-k);
            if(val==x)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
	
}
