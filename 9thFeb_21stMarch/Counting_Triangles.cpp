#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    map<tuple<ll,ll,ll>,ll>m;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[0]>>a[1]>>a[2];
            sort(a,a+3);
            tuple<ll,ll,ll>k;
            k=make_tuple(a[0],a[1],a[2]);
            m[make_tuple(a[0],a[1],a[2])]++;
        }
    }
    map<tuple<ll,ll,ll>,ll>::iterator it;
    ll count=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if((it->second)==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
}