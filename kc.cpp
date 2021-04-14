#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the gpa in subjects POM PFC ITP PHY FEE LAL"<<endl;
    float pom,pfc,itp,phy,fee,lal;
    cin>>pom>>pfc>>itp>>phy>>fee>>lal;

    float cgpa = (4*(itp+phy+fee+lal)+2*(pom+pfc))/20;
    cout<<cgpa<<endl;
}