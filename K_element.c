#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int c;
    for(int i=0;i<n;i++)
    {
        c=0;
        if(a[i]==k)
        {
            c++;
            break;
        }
    }
    if(c!=0)
    {
        printf("The k element is present in the array");
    }
    else
    {
        printf("The k element is not present in the array");
    }
    return 0;
}
