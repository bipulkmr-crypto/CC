// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <bool.h>
// // struct specialisation
// // {
// //     char subname[100];
// // };
// // struct student
// // {
// //     char name[100];
// //     double cgpa;
// //     int pref[10];
// // };
// // int comp(const void *a, const void *b)
// // {
// //     //    student *cgpa1=(student *)a;
// //     //    student *cgpa2=(student *)b;
// //     double c1 = ((struct student *)a)->cgpa;
// //     double c2 = ((struct student *)b)->cgpa;
// //     char n1[] = ((struct student *)a)->name;
// //     char n2[] = ((struct student *)b)->name;
// //     if ((c1 - c2) == 0)
// //     {
// //         if ((strcmp(n1, n2) > 0))
// //             return 1;
// //         if (strcmp(n1, n2) < 0)
// //             return -1;
// //         else
// //             return 0;
// //         else
// //         {
// //             if ((c1 - c2) > 0)
// //                 return 1;
// //         }
// //     }
// //     int main()
// //     {
// //         int n;
// //         scanf("%d", &n);
// //         struct student bacha[n];
// //         struct specialisation s[10];
// //         int i;
// //         for (i = 0; i < n; i++)
// //         {
// //             scanf("%s", bacha[i].name);
// //             scanf("%f", &bacha[i].cgpa);
// //             for (int j = 0; j < 10; j++)
// //             {
// //                 scanf("%d", &bacha[i].pref[j]);
// //             }
// //         }
// //         qsort((void *)bacha, n, sizeof(bacha[0]), comp);
// //     }
// #include<stdio.h>
// #include<stdlib.h>
// struct subject
// {
//     int count=0;
//     struct data stud[10];
// };
// struct data 
// {  
//     char name[50];
//     float cgpa;
//     int pref[10];
// };
// int comparator(const void* p, const void* q) 
// { 
    
//     float l=((struct data*)p)->cgpa;
//     float r=((struct data*)q)->cgpa;
//     if(l!=r)
//     return (r-l);
//     else
//     strcmp(((struct data*)p)->name, 
//                   ((struct data*)q)->name);
  
// } 
// int main()
// {
//     int n;
//     printf("enter no. of students\n");
//     scanf("%d",&n);
//     struct data student[n];
//     struct subject p[10];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name,cgpa\n",);
//         scanf("%s%f",student[i].name,&student[i].cgpa);
//         printf("enter ten preferences\n",n);
//         for(int j=0;j<10;j++)
//         {
//             scanf("%d",&student[i].pref[j]);
//         }
//     }
//     qsort(student, n, sizeof(struct data), comparator);
//     int i;
//     int k=0;
//     for(i=0;i<n;i++)
//     {
//         if(p[student[i].pref[0]].count<10)
//         p[student[i].pref[0]].stud[p[student[i].pref[0]].count++]=student[i];
//     }
// }
#include<stdio.h>
struct data
{
    char name[50];
    float cgpa;
    int pref[10];
    int ans;
};
int comparator(const void* p, const void* q)
{

    float l=(((struct data*)p)->cgpa);
    float r=(((struct data*)q)->cgpa);
    if(l!=r)
    return (r-l);
    else
    strcmp(((struct data*)p)->name,
                  ((struct data*)q)->name);

}
int main()
{
    int n;
    printf("enter no. of students\n");
    scanf("%d",&n);
    struct data student[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name,cgpa\n");
        scanf("%s%f",student[i].name,&student[i].cgpa);
        printf("enter ten preferences\n",n);
        for(int j=0;j<10;j++)
        {
            scanf("%d",&student[i].pref[j]);
        }
    }
    qsort(student, n, sizeof(struct data), comparator);
    int prefo[11];
    for(int i=1;i<=10;i++)
    {
        prefo[i]=10;
    }
    for(int i=0;i<n;i++)
    {
        int k=0;
        while(k<=10){
        if(prefo[student[i].pref[k]]>0)
        {
            student[i].ans=student[i].pref[k];
            prefo[student[i].pref[k]]--;
            break;

        }
        else
        {
            k++;
        }}
    }
    for(int i=0;i<n;i++)
    {
        printf("%s  %d\n",student[i].name,student[i].ans);
    }

}