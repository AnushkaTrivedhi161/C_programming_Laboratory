#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
      int even,odd;
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }
        if(num[i]%2==1)
        {
            odd++;
        }
    }
        printf("even=%d\n",even);
        printf("odd=%d\n",odd);
        int f=0,pm=0;
    for(i=0;i<n;i++)
    {
        
       for(int j=2;j<num[i]/2;j++)
       {
           if(num[i]%j==0)
           {
               f++;
               break;
           }
       }
       if(f==0)
       {
           pm++;
       }
    }
       printf("pm=%d",pm);
    return 0;
}
