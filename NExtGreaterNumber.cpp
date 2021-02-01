#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    vector<long long> v;
    stack<long long> s;
    ll i;
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.pb(-1);
        }
        else if(s.size()>0&&s.top()arr[i])
        {
            v.pb(s.top);
        }
        else if(s.size()>0 && s.top<=arr[i])
        {
            while(s.size()>0&&s.top<arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.pb(-1);
            }
            else
            {
                v.pb(s.top());
            }
        }
        else 
        s.pb(arr[i]);
    }
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends