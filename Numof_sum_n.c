#include<stdio.h>
int main()
{
    int sum=0,n,rem,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        ++c;
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
      printf("No. of digits:%d\n",c);
      printf("Sum of digits:%d",sum);
      return 0;
}
