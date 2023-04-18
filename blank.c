#include<stdio.h>
#include<string.h>
void main() 
{
   int j;
   char str1[1000];
   printf("enter the sentence\n");
   gets(str1);
   int len=strlen(str1);
   j=0;
   while(j<len)
   {
   if(str1[j]!=' ')
   {
   printf("%c",str1[j]);
   }
   j++;
   }
}