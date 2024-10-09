#include<stdio.h>
int main()
{
  int i,sum=0,n,avg,p=1;
for(i=1;i<=n;i++)
{
   sum+=i;
   p*=i;
}
   avg=sum/n;
   printf("Sum:%d\nProduct:%d\nAverage:%d",sum,p,avg);
   return 0;
}
