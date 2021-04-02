// // // // #include <stdio.h>
// // // // void filecopy(FILE *inp,FILE *ofp);
// // // // check(char* fileName, FILE* readFile)
// // // // {
// // // //     if((readFile = fopen(fileName,"r")) == NULL)
// // // //     {
// // // //         return FILE_ERROR;
// // // //     }
// // // //     return FILE_NO_ERROR;
// // // // }

// // // // int main(int argc,char **argv)
// // // // {
// // // //     FILE *fp;
// // // //     void filecopy(FILE *,FILE *);
// // // //     if(check(argv[1],&fp)!=FILE_NO_ERROR)
// // // //     {
// // // //         printf("\n%s:ERROR opening file. \n",__FUNCTION__);
// // // //     }
// // // //     else
// // // //     while(fp!=NULL)
// // // //     {
// // // //         if((fp=fopen(argv[1],"r"))==NULL)
// // // //         {
// // // //             printf("cat: can’t open file %s\n",&argv);return 1;
// // // //         }
// // // //         else
// // // //         {
// // // //             filecopy(fp,stdout);
// // // //             fclose(fp);
// // // //         }
// // // //         return 0;
// // // //     }
// // // // }

// // // // void filecopy(FILE *ifp, FILE *ofp)
// // // // {
// // // //     char c;
// // // //     while ((c = fgetc(ifp)) != EOF)
// // // //         fputc(c, ofp);
// // // //     while ((c = fgetc(fp2)) != EOF)
// // // //         fputc(c, ofp);
// // // // }
// // // // #include <stdio.h>
// // // // int fun(int i)
// // // // {
// // // //     static int count = 0;
// // // //     count = count + i;
// // // //     return count;
// // // // }
// // // // int main()
// // // // {
// // // //     int i, j;
// // // //     for (i = 0; i <= 4; i++)
// // // //     {
// // // //         j = fun(i);
// // // //         printf("j=%d", j);
// // // //     }
// // // //     return 0;
// // // // }
// // // #include <stdio.h>
// // // int main(){
// // // 	int r,c;
// // // 	r=3,c=3;
// // // 	int arr[r][c];
// // // 	printf("Enter the array: \n");
// // // 	for(int i=0;i<r;i++)
// // // 		for(int j=0;j<c;j++)scanf("%d",&arr[i][j]);

// // // 	int new1[3][3];
// // // 	for(int i=0;i<3;i++)new1[1][i]=arr[0][i];
// // // 	for(int i=0;i<3;i++)new1[0][i]=arr[1][i];
// // // 	for(int i=0;i<3;i++)new1[2][i]=arr[2][i];
// // //     for(int i=0;i<3;i++){
// // //     	for(int j=0;j<3;j++)printf("%d ",new1[i][j] );
// // //     		printf("\n");
// // //     }
// // // printf("\n"); 
// // // printf("\n");

// // // 	int new2[3][3];
// // // 	for(int i=0;i<3;i++)new2[i][0]=arr[i][0];
// // // 	for(int i=0;i<3;i++)new2[i][1]=arr[i][2];
// // // 	for(int i=0;i<3;i++)new2[i][2]=arr[i][1];
// // // 		for(int i=0;i<3;i++){
// // //     	for(int j=0;j<3;j++)printf("%d ",new2[i][j] );
// // //     		printf("\n");
// // //     }
// // // }
// // #include<stdio.h>
// // #include<stdlib.h>

// // struct data
// // {
// //    float e;
// //    int cgpa;
// // };
// // int comparator(const void* p, const void* q)
// // {

// //     float l=(((struct data*)p)->cgpa);
// //     float r=(((struct data*)q)->cgpa);
// //     return (l-r);

// // }
// // int main()
// // {
// //     printf("enter no of entries\n");
// //     int n;
// //     scanf("%d",&n);
// //     struct data* s;
// //     s=(struct data*)calloc(n,sizeof(struct data));
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("input element and its rank \n");
// //         scanf("%f%d",&s[0].e,&s[0].cgpa);
// //         qsort(s, n, sizeof(struct data), comparator);
// //         printf("new order\n");
// //         for(int j=0;j<n;j++)
// //         {
// //             if(s[j].cgpa!=0)
// //             {
// //                 printf("%f %d \n",s[j].e,s[j].cgpa);
// //             }
// //         }
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("element to be deleted \n");
// //         printf("%f %d \n",s[n-i-1].e,s[n-i-1].cgpa);
// //         s=(struct data*)realloc(s,n-i-1);
// //     }


// // }
// #include<stdio.h>
// #include<time.h>

// int main()
// {


//     struct item *head;//global variable
//     struct item *reverse(struct item *x)
//     {
//         if(x==NULL)
//         {
//             return NULL;
//         }
//         if(x->next==NULL)
//         {
//             head=x;
//             return x;
//         }
//         struct item *y=reverse(x->next);
//         y->next =x;
//         x->next =NULL;
//         return head;
//     }
//     time_t t = time(NULL);
//     struct tm tm = *localtime(&t);
//     int day,month,year;
//     printf("Enter date of birth (DD/MM/YYYY): ");
//     scanf("%d/%d/%d",&day,&month,&year);
//     int cyear = tm.tm_year + 1900;
//     int cmonth = tm.tm_mon + 1;
//     int cday = tm.tm_mday;
//     int diffyear = cyear - year;
//     int diffmonth = cmonth - month;
//     if(diffmonth<0)
//     {
//         diffyear--;
//         diffmonth = 12 + diffmonth;
//     }
//     int diffday = cday - day;
//     if(diffday<0)
//     {
//         diffmonth--;
//         int m = cmonth-1;
//         if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
//         {
//             diffday = 31 + diffday;
//         }
//         else if(m==4||m==6||m==9||m==11)
//         {
//            diffday = 30 + diffday;
//         }
//         else
//         {
//             diffday = 28 + diffday;
//         }
//     }
//     printf("Current date: %d/%d/%d\n",cday,cmonth,cyear);
//     printf("Age: %d years %d months %d day",diffyear,diffmonth,diffday);
// }
// #include <stdio.h>
// #include <stdbool.h>
// #define C 3
// #define min(a, b) a>b?b:a
// #define max(a, b) a>b?a:b
// int main(){
//    int k = 3, l = 3;
//    int mat[][3] = {
//       { 10, 20, 30 },
//       { 40, 50, 60 },
//       { 70, 80, 90 }
//    };
//    int row = 0, col = 0;
//    bool flag = false;
//    int i, j, len, diag;
//    int MAX;
//    int mn = min(k, l); //to check the minimum number and return that minimum number
//    for ( len = 1; len <= mn; ++len) {
//       for ( i = 0; i < len; ++i) {
//          printf("%d ", mat[row][col]); //Printing the matrix in zigzag format
//          if (i + 1 == len)
//             break;
//          if (flag)
//             ++row, --col;
//          else
//             --row, ++col;
//       }
//       if (len == mn)
//          break;
//       if (flag)
//          ++row, flag = false;
//       else
//           ++col, flag = true;
//    }
//    if (row == 0) {
//       if (col == k - 1)
//          ++row;
//       else
//          ++col;
//          flag = 1;
//    } else {
//       if (row == l - 1)
//          ++col;
//       else
//          ++row;
//       flag = 0;
//    }
//    MAX = max(k, l) - 1; //To check the maximum element
//    for ( len, diag = MAX; diag > 0; --diag) { //Loop to go diagonally.
//       if (diag > mn)
//          len = mn;
//       else
//          len = diag;
//       for ( i = 0; i < len; ++i) {
//          printf("%d ", mat[row][col]);
//          if (i + 1 == len)
//             break;
//          if (flag)
//             ++row, --col;
//          else
//             ++col, --row;
//       }
//       if (row == 0 || col == k - 1) {
//          if (col == k - 1)
//             ++row;
//          else
//             ++col;
//          flag = true;
//       }
//       else if (col == 0 || row == l - 1) {
//          if (row == l - 1)
//             ++col;
//          else
//             ++row;
//          flag = false;
//       }
//    }
//    return 0;
// }'
4
4
1 2
2 3
2 4
2 5
6
2 6
1 5
3 4
7 9
5 8
4 10
1
100 200
4
1 2
2 3
3 4
4 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Point {
  float x, y;
  int checked;
};

float distance(struct Point A, struct Point B) {
  float dx = B.x - A.x, dy = B.y - A.y;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  int N;
  struct Point *userPoints, testPoint;

  printf("Enter the number of points : ");
  scanf("%d", &N);

  userPoints = (struct Point *) malloc(N * sizeof(struct Point));

  if (!userPoints) {
    printf("Error : not enough memory!\n");
    return 1;
  }

  printf("Enter %d points ->\n", N);

  for (int i = 0; i < N; i ++) {
    printf("Point %d : ", i+1);
    scanf("%f %f", &userPoints[i].x, &userPoints[i].y);
    userPoints[i].checked = 0;
  }

  printf("Enter the test point : ");
  scanf("%f %f", &testPoint.x, &testPoint.y);

  int Z;

  printf("Enter Z : ");
  scanf("%d", &Z);
  for (int i = 0; i < Z; i++) {
    float min = -1;
    int pos = -1;

    for (int j = 0; j < N; j++) {
      if (!userPoints[i].checked) {
        float dist = distance(userPoints[i], testPoint);

        if (min < 0 || dist < min) {
          min = dist;
          pos = j;
        }
      }
    }

    printf("%f, %f\n", userPoints[i].x, userPoints[i].y);
    userPoints[i].checked = 1;
  }

  free(userPoints);

  return 0;
}