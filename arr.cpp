#include<bits/stdc++.h>
using namespace std;

void transpose(int* a[3][3], int* b[3][3]) 
{ 
    int i, j; 
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
           {
               b[i][j] = a[j][i]; 
           }
    }
}

  
int main() 
{ 
    int a[3][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} }; 
  
    int b[3][3], i, j; 
    transpose(a, b); 
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        cout<<b[i][j]; 
        cout<<"\n";
    } 
}
