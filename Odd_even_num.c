#include<stdio.h>
int main()
{
    int n,c=0,rem,sum1=0,sum2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        
        rem=n%10;
        if(rem%2==0)
        {
            sum1+=rem;
            n=n/10;
        }
        else
        {
           sum2+=rem;
           n=n/10;
        }
    }
           printf("odd sum:%d\n",sum2);
           printf("even sum:%d\n",sum1);
    
      return 0;
}
