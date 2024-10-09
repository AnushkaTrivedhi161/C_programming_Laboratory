#include <stdio.h>

int main()
{
    int n,mn,mul=1;
    scanf("%d%d",&n,&mn);
    for(int i=1;i<=n;i++)
    {
       mul=mn*i;
        printf("%d*%d=%d\n",mn,i,mul);
    }
    return 0;
}
