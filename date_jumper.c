#include<stdio.h>
int main()
{
    int M1,D1,Y1;
    int no_of_days;
    printf("enter the month,day and year in that order\n");
    scanf("%d,%d,%d",&M1,&D1,&Y1);
    printf("enter the number of days\n");
    scanf("%d",&no_of_days);
    D1=D1+no_of_days;
    while(D1>28||D1>30||D1>31)
    {
        if(M1!=2 && (D1==29||D1==30||D1==31))
        break;
        if(M1==2 && D1>28)
    {
        M1++;
        D1=D1-28;
    }
    if(M1==12 && D1>31)
    {
        Y1++;
        M1=1;
        D1=D1-31;
    }
    if((M1==1 || M1==3 || M1==5 || M1==7 || M1==8 || M1==10) && D1>31)
    {
        M1++;
        D1=D1-31;
    }
    else if(D1>30)
    {
        M1++;
        D1=D1-30;
    }
    }
    printf("%d/%d/%d\n",M1,D1,Y1);
    D1=D1-(2*no_of_days-1);
    if(M1==1&&D1<0)
    {
        Y1--;
    }
    while(D1<0)
    {
        M1--;
        if(M1==0)
        M1=12;
        if(M1==12 || M1==3 || M1==5 || M1==7 || M1==8 || M1==10)
        {
            D1+=31;
        }
        else if(M1==2)
        D1+=28;
        else
        D1+=30;
    }
    printf("%d/%d/%d",M1,D1,Y1);    
}