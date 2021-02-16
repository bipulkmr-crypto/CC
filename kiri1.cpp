#include<bits/stdc++.h>
using namespace std;
int hsh(int a,int n)
{
    return a+n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int freq[2*n+1];
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[hsh(a[i],n)]++;
        }
        while(q--)
        {
            int type,k;
            cin>>type>>k;
            if(type==1)
            freq[k+n]++;
            else
            {
                if(freq[k+n]>0)
                {
                    cout<<freq[k+n]<<endl;
                    freq[k+n]--;
                }
                else
                cout<<"-1"<<endl;
            }
        }

    }
}