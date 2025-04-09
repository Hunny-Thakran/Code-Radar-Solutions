// Your code here...
#include<stdio.h>
int main()
{
  int n,k,i;
  scanf("%d",&n);
  int ar[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  scanf("%d",&k);
  int pos=n-k;
  for(i=pos;i<n;i++)
  {
    printf("%d\n",ar[i]);
  }
  for(i=0;i<pos;i++)
  {
    printf("%d\n",ar[i]);
  }
  return 0;
    
}