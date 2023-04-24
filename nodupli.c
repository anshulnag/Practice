#include<stdio.h>
int main()
{
  int data[100],N;
  printf("Enter number of elements\n");
  scanf("%d",&N);
  printf("enter the elements\n");
  int i=0;
  while(i<N)
  {
    scanf("%d",&data[i]);
    i++;
  }
  i=0;
  while(i<N-1)
  {
  int high=data[i],temp,pos=0;
  int j=i+1;
  while(j<N)
  {
    if(data[j]>high)
    {
      high=data[j];
      pos=j;
    }
    j++;
  }
  temp=data[pos];
  data[pos]=data[i];
  data[i]=temp;
  i++;
  }
  i=0;
  while(i<N)
  {
    if(i==(N-1))
    printf("%d",data[i]);
    else if(data[i+1]!=data[i])
    printf("%d",data[i]);
    i++;
  }
  return 0;
}

