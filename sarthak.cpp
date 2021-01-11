#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"          0"<<endl;
    for(i=1;i<=10;i++)
    {
        for(j=9-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(j=9;j>=(10-i);j--)
        {
            cout<<j;
        }
        cout<<"0";
        for(j=9;j>=(10-i);j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}