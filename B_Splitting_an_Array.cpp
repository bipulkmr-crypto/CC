#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,k;
vector<ll>v;
bool good(ll m)
{
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>m)
        {
            cnt++;
            sum=v[i];
        }
        if(sum==m&&i!=n-1)
        {
            cnt++;
            sum=0;
        }

    }
    cnt++;
        if(cnt<=k)
            return true;
        return false;
}
int main()
{
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=1e14,m;
    while(r>l+1)
    {
        m=(l+r)/2;
        if(good(m))
        {
            r=m;
        }
        else
        {
            l=m;
        }
    }
    if(good(l))
    cout<<l<<endl;
    else
    cout<<r;


}