#include <stdio.h>
    
int main()
{
    int n,m,i,c=0,sum=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            ++c;
            sum+=i;
        }
    }
        printf("\nsum=%d\n",sum);
        printf("no.of.digits=%d\n",c);
       
    return 0;
}
