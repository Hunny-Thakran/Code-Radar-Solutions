// Your code here...
#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
           if(i%2!=0)
            {
                for(j=1;j<=i;j++)
                {
                    if(j%2!=0)
                    {
                        printf("1");
                    }
                    else
                    {
                        printf("0");
                    }
                }
                
            }
            else
            {
                for(j=1;j<=i;j++)
                {
                    if(j%2==0)
                    {
                        printf("1");
                    }
                    else
                    {
                        printf("0");
                    }
                    
                }
            }
            printf("\n");
           

        }
        printf("\n");
    }
