#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int index;
    printf("enter the sentences\n");
    gets(str1);
    gets(str2);
    int j=0;
    while(j<strlen(str1))
        {
            if(str1[j]==str2[0])
            {              
                int k=j+1,c=1;
                while(c<strlen(str2))
                {
                    if(str1[k]==str2[c])
                    {
                        c++;
                        k++;
                    }
                    else
                    break;
                }
                if(c==(strlen(str2)))
                printf("String present from index %d to %d\n",j,k-1);
            }
            
            j++;
        }
    }