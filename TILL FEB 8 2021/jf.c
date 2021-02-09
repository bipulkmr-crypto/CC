#include<stdio.h>
// void func(int n,char A,char B,char C){
//     if(n==1){
//         printf("\n move disk 1 from %c to %c",A,C);
//         return;

//     }else{
//         func(n-1,A,C,B);
//         printf("\n move disk %d from %c to %c ",n,A,C);
//         func(n-1,B,C,A);
//     }
// }

void func(int,char,char,char);
int main(){
    int n;
    printf("Enter no of disc");
   
    scanf("%d",&n);
    func(n,'A','B','C');
    return 0;
}
 func(int n,char A,char B,char C){
    if(n==1){
        printf("\n move disk 1 from %c to %c",A,C);
        return ;

    }else{
        (func(n-1,A,C,B));
        printf("\n move disk %d from %c to %c ",n,A,C);
      func(n-1,B,C,A);
    }
}