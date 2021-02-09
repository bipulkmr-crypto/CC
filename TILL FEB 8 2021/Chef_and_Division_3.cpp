#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll t,i;
    cin>>t;
    while (t--)
    {
            /* code */
        ll n,k,d;
        cin>>n>>k>>d;
        ll s=0,x;
        rep(i,n)
        {
            cin>>x;
            s+=x;

        }
        ll a;
        a=(int)(floor(s/k));
        cout<<min(a,d)<<endl;
    }
    
}