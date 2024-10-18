#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
      int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            even+=num[i];
        }
        if(num[i]%2==1)
        {
            odd+=num[i];
        }
    }
 
        int diff=even-odd;
        printf("%d",diff);
    return 0;
}
