#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
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
int main()
{
    cpp_int t;
    cin>>t;
    cpp_int fact[101]={1};
    cpp_int i;
    fu(i,1,100)
    {
        fact[i]=fact[i-1]*i;
    }
    while(t--)
    {
        cpp_int n;
        cin>>n;
        cout<<(fact[n])<<endl;
        
    }
}