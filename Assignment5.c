#include<stdio.h>
struct Bowling_Lineup
{
    char Playername[100];
    double avg;
    double eco;
    int wick;
    int runs;
    int balls;
};
int main()
{
    struct Bowling_Lineup p[2];
    struct Bowling_Lineup temp;
    int i;
    printf("PLAYER NAME\tWickets \t runs \t balls");
    for(i=0;i<2;i++)
    {
        scanf("%s",p[i].Playername);
        scanf("%d",&p[i].wick);
        scanf("%d",&p[i].runs);
        scanf("%d",&p[i].balls);
        p[i].avg=(double)(p[i].wick/p[i].runs);
        p[i].eco=(p[i].runs/(double)p[i].balls);
    }
    int j=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(p[j].avg>p[j+1].avg)
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("PLAYER NAME \t RUNS \t BALLS \t ECONOMY \t AVERAGE\n");
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t",p[i].Playername);
        printf("%d\t",p[i].runs);
        printf("%d\t",p[i].balls);
        printf("%f\t",p[i].eco);
        printf("%f\t",p[i].avg);
        printf("\n");
    }
}


    
    

