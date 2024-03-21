#include <stdio.h>
int main()
{
  int n,row ,col;
  scanf("%d",&n);
  n=n-1;
  row=n/3;
  col=n%3;
  printf("%d %d",row,col);
  
  
   return 0;
}
