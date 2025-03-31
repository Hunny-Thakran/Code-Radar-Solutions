// Your code here...
#include<stdio.h>
int main()
{
    int a,i,j,one=1,zero=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
           if(i%2!=0)
            {
                for(j=1;j<=i;j++)
                {
                    if(j%2!=0)
                    {
                        printf("%d ",one);
                    }
                    else
                    {
                        printf("%d ",zero);
                    }
                }
                
            }
            else
            {
                for(j=1;j<=i;j++)
                {
                    if(j%2==0)
                    {
                        printf("%d ",one);
                    }
                    else
                    {
                        printf("%d ",zero);
                    }
                    
                }
            }
            
           

        }
        printf("\n");
    }
