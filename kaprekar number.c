#include <stdio.h>
int main()
{
  int n,sq,ls,rs,count,power;
  scanf("%d",&n);
   int check=n;
   sq=n*n;
  while(n!=0)
  {
    count++;
    n/=10;
  }
      power=pow(10,count);
      ls=sq/power;
      rs=sq%power;
   if(ls+rs==check)
      printf("Kaprekar Number" );
   else
       printf( "Not a Kaprekar Number");

   return 0;
}
