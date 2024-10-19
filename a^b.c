
#include <stdio.h>

int main()
{
    int a,b,i,pow=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        pow*=a;
    }
    printf("%d",pow);

    return 0;
}
