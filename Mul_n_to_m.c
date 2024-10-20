#include <stdio.h>

int main()
{
    int n,i,m,mul=1;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }

    return 0;
}
