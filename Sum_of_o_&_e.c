
#include <stdio.h>

int main()
{
    int n,i,odd=0,even=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even+=i;
        }
        if(i%2==1)
        {
            odd+=i;
        }
    }
       printf("e=%d\n",even);
       printf("o=%d",odd);

    return 0;
}
