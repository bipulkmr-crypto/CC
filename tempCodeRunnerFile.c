int fun(int i)
{
    int c=0;
    c+=i;
    return c;
}
int main()
{   
    // int *p,*q,str[10];
    // p=q;
    // q=p+10;
    // q=str+20;
    // str=q+30;
    int i,j=0;
    for(i=0;i<=4;i++)
    {
        j+=fun(i);
    }
    printf("j=%d",j);
    return 0;
    
}