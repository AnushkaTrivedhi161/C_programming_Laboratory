
#include <stdio.h>

int main()
{
    int i,n,f;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    { 
        f=0;
        if(n%i==0)
        {
            ++f;
            break;
        }
    }
    if(f==0)
    {
        printf("it's a prime number");
    }
    else
    {
        printf("it's not a prime number");
    }
    return 0;
}
