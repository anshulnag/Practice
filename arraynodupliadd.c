#include<stdio.h>
int main()
{
    int data1[100],N1;
    int data2[100],N2;
    printf("enter the limit of data1\n");
    scanf("%d",&N1);
    printf("enter the elements of data1\n");
    int i=0;
    while(i<N1)
    {
        scanf("%d",&data1[i]);
        i++;
    }
    printf("enter the limit of data2\n");
    scanf("%d",&N2);
    printf("enter the elements of data2\n");
    int i1=0;
    while(i1<N2)
    {
        scanf("%d",&data2[i1]);
        int x=0,c=0;
        while(x<N1)
        {
            if(data2[i1]==data1[x])
            c++;
            x++;
        }
        if(c==0)
        {
            data1[N1]=data2[i1];
            N1++;
        }
        i1++;
    }
    int a=0;
    while(a<N1)
    {
        printf("%d\t",data1[a]);
        a++;
    }

}