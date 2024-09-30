#include<stdio.h>
#include<math.h>
int main()
{
   double p,r,t,amt,CI;
   scanf("%lf%lf%lf",&p,&r,&t);
   amt=p*((pow((1+r/100),t)));
   CI=amt-p;
   printf("The compound interest is %lf",CI);
   return 0;
}
