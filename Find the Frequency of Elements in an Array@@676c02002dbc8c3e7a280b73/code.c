// Your code here...
#include<stdio.h>
int main() 
{
    int n,i,j,c;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<a;j++)
        {
            if(ar[i]==ar[j])
            {
                c++;
                ar[j]=-1;
            }
        }
        printf("%d %d",ar[i],c);
        printf("\n");
    }
}