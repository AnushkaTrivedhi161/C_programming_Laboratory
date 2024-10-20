#include <stdio.h>

int main()
{
    int n,i,a=0,b=1,nxt;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d\n",a);
        }
        if(i==2)
        {
            printf("%d\n",b);
        }
        nxt=a+b;
        a=b;
        b=nxt;
        printf("%d",nxt);
        if(i<n)
        {
            printf("\n");
        }
    }

    return 0;
}
