#include<stdio.h>
int main()
{
    int am,ca,n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("mark:");
        scanf("%d",&am);
        sum+=am;
    }
       ca=sum/n;
       printf("Class Average:%d",ca);
      return 0;
}
