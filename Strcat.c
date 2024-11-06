
#include <stdio.h>

int main()
{
    char a[50],b[50];
    scanf("%s%s",a,b);
    int i=0,j=0,k=0,l=0,p=0;
    while(a[l]!='\0')
    {
        l++;
    }
    while(b[p]!='\0')
    {
        p++;
    }
      char c[l+p];
    while(a[i]!='\0')
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(b[j]!='\0')
    {
        c[k]=b[j];
        j++;
        k++;
    }
       c[k]='\0';
       printf("%s",c);

    return 0;
}
