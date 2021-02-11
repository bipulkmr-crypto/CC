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
void print( ll n)  
{  
     ll space = n - 1;   
    for ( ll i = 0; i < n; i++)  
    {  
 
        for ( ll j = 0;j < space; j++)  
            cout << " ";  
  
       
        for ( ll j = 0; j <= i; j++)  
            cout << "* ";  
  
        cout << endl;  
        space--;  
    }  
  
     
    space = 0;  
  
     
    for ( ll i = n-1; i > 0; i--)  
    {  
        
        for ( ll j = 0; j < space; j++)  
            cout << " ";  
  
         
        for ( ll j = 0;j < i;j++)  
            cout << "* "; 
  
        cout << endl; 
        space++;  
    }  
}  
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        print(n);
    }
}
