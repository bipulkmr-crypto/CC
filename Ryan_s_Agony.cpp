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
// #define all(v) v.begin(),v.end()
// #define ss second
// #define rep(i,n) for(i=0;i<n;i++)
// #define fu(i,a,n) for(i=a;i<=n;i++)
// #define fd(i,n,a) for(i=n;i>=a;i--)
// #define gi(n) scanf(%d,&n)
// bool good(ll x)
// {
//     double d=sqrt(x);
//     ll p=sqrt(x);
//     return ((d-p)==0);
// }
// int main()
// {
//     fast
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll arr[n];
//         ll i;
//         rep(i,n)
//         cin>>arr[i];
//         ll lcm;
//         ll g;
//         lcm=(arr[0]*arr[1]%mod)/__gcd(arr[0],arr[1]);
//         for(i=2;i<n;i++)
//         {
//             lcm%=mod;
//             lcm=(lcm*arr[i]%mod)/(__gcd(arr[i],lcm));
//         }
//         i=1;
//         while(!good(lcm*i))
//         {
//             i++;
//         }
//         lcm*=i;
//         // lcm%=mod;
//         cout<<lcm<<endl;
//     }
// }
    //with help of Shubham Kumar Jha IIIT Allahabad my senior
    #include<bits/stdc++.h>
     
    #define ff first
    #define ss second
    #define pb push_back
    #define pf push_front
    #define ins insert
    #define mp make_pair
    #define sz(s) (int)s.size()
    #define forp(i,a,b) for( i=a;i<=b;i++)
    #define rep(i,n)    for( i=0;i<n;i++)
    #define ren(i,n)    for( i=n-1;i>=0;i--)
    #define forn(i,a,b) for( i=a;i>=b;i--)
    #define w(t) while(t)
    #define on cout<<"\n"
    #define o2(a,b) cout<<a<<" "<<b
    #define os cout<<" "
    #define bitcount __builtin_popcount
    #define gcd __gcd
    #define all(v) v.begin(),v.end()
    #define mem(n,m) memset(n,m,sizeof(n))
    #define pii pair<int,int>
    #define pll pair<long long,long long>
    #define sii set<int>
    #define sll set<long long>
    #define vii vector<int> 
    #define vll vector<long long>
    #define mii map<int,int>
    #define mll map<long long, long long>
    #define lob lower_bound
    #define upb upper_bound
    #define ret return 0
    #define present(s,x) (s.find(x) != s.end()) 
    #define cpresent(s,x) (find(all(s),x) != s.end()) 
    #define ford(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
    #define fors(container, it, a, b) for(__typeof(container.begin()) it = a; it != b; it++) 
     
    #define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define MOD 1000000007
    #define EPSILON 1e-9
    #define PI 3.1415926535897932384626433832795028841971693993751
    #define inf 999999999999999999
    #define siz 100000
    #define SIZ 1000000
    #define SIZE 200000
     
    typedef long long  ll;
    typedef long double  ldo;
    typedef double  db ;
    using namespace std;
    int lp[siz+5];
    void seive()
    {
    	int i,j;
    	forp(i,2,sqrt(siz))
    	{
    		if(!lp[i])
    		{
    			for(j=i*i;j<=siz;j+=i)
    			{
    				if(lp[j]==0)
    					lp[j]=i;
    			}
    		}
    	}
    }
    ll pow_(ll a,ll b)
    {
    	ll res=1;
    	w(b)
    	{
    		if(b&1)res=(res*a)%MOD;
    		a=(a*a)%MOD;
    		b>>=1;
    	}
    	return res;
    }
    ll gcd_(ll a,ll b)
    {
    	if(a==0)return b;
    	return gcd_(b%a,a);
    }
    int main()
    {
    	boost
    	#ifndef ONLINE_JUDGE
    	freopen("input.txt.txt","r",stdin);
    	freopen("output.txt.txt","w",stdout);
    	#endif
    	seive();
    	int t;
    	cin>>t;
    	w(t--)
    	{
    		int n,i;
    		cin>>n;
    		int arr[n];
    		rep(i,n)cin>>arr[i];
    		mii mpp;
    		rep(i,n)
    		{
    			w(arr[i]!=1)
    			{
    				int p=(lp[arr[i]]==0)?arr[i]:lp[arr[i]],c=0;
    				w(arr[i]%p==0)
    				{
    					c++;
    					arr[i]/=p;
    				}
    				if(!present(mpp,p))
    					mpp[p]=c;
    				else
    					mpp[p]=max(mpp[p],c);
    	    	}
    		}
    		ll ans=1;
    		ford(mpp,it)
    		{
    			if(it->ss&1)
    				it->ss+=1;
    			ans=(ans*pow_(it->ff,it->ss))%MOD;
    		}
    		cout<<ans<<"\n";
    	}
    }