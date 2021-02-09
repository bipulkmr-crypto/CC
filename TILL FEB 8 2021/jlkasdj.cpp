#include<bits/stdc++.h>
using namespace std;
int one(int k,int ans,int n);
int two(int k,int ans,int n);
vector<int>v;
int main()
{
    int n;
    cin>>n;
    v.assign(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(v[0]==2)
    {
        cout<<2*(two(0,0,n));
    }
    else
    {
        cout<<2*(one(0,0,n));
    }
}
int two(int k,int ans,int n)
{
    int a,x,count=0,counter=0;
    for(int i=k;i<n;i++ )
    {

        if(v[i]==1)
        break;
        count++;
        a=i;
    }
    for(int i=a+1;i<n;i++)
    {
        x=i;
        if(v[i]==2)
        break;
        counter++;
    }
    ans=max(ans,min(count,counter));
    if(x==n-1)
    {
        return ans;
    }
    else
    return one(a+1,ans,n);
}
int one(int k,int ans,int n)
{
    int a,x,count=0,counter=0;
    for(int i=k;i<n;i++ )
    {

        if(v[i]==2)
        break;
        a=i;
        counter++;
    }
    for(int i=a+1;i<n;i++)
    {
        x=i;
        if(v[i]==1)
        break;
        count++;

    }
    ans=max(ans,min(count,counter));
    if(x==n-1)
    {
        return ans;
    }
    else
    return two(a+1,ans,n);
}