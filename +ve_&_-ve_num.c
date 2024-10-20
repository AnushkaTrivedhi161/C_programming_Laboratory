
#include <stdio.h>

int main()
{
    int i=0,n,f=0,p=0;
    scanf("%d",&n);
    int a[n];
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
        i=0;
    while(i<n)
    {
        if(a[i]>0)
        {
            ++f;
        }
        if(a[i]<0)
        {
            ++p;
        }
        ++i;
    }
            printf("n=%d\n",p);
            printf("p=%d\n",f);
    return 0;
}
