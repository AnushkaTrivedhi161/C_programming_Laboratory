#include <stdio.h>

int main()
{
    char a[50];
    scanf("%s",a);
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
       printf("%d",i);

    return 0;
}
