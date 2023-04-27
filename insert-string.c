#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int index;
    printf("enter the sentences\n");
    gets(str1);
    gets(str2);
    printf("enter the index value\n");
    scanf("%d",&index);
    int L=strlen(str2);
    int i=strlen(str1);
        while(i>=index)
        {
            str1[i+L]=str1[i];
            i--;
        }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[index]=str2[j];
        index++;
        j++;
    }
    puts(str1);
}
