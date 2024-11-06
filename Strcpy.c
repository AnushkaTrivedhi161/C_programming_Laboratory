#include <stdio.h>

int main()
{
    char a[50],b[50];
    scanf("%s",a);
    int i=0;
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
       b[i]='\0';
       printf("%s",b);

    return 0;
}
