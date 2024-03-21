#include <stdio.h>
int main()
{
    int a,remainder,rev=0;
    scanf("%d",&a);
    while(a!=0) {
      remainder= a % 10;
      rev= rev*10+remainder;
      a=a/10;
  }
    printf("%d",rev);
   return 0;
}
