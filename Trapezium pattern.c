#include <stdio.h>
int main()
{
  int n,num=1;
  scanf("%d",&n);
  int val=n*n+1;
  for(int i=n;i>=1;i--)
  {
    for(int h=0;h<n-i;h++)
        printf("--");
    for(int j=0;j<i;j++)
       printf("%d*",num++);
    for(int k=0;k<i-1;k++)
      printf("%d*",val++);
    printf("%d",val);
    val=val-2*(i-1);
     printf("\n");
  }


   return 0;
}
