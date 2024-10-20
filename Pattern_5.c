#include <stdio.h>

int main()
{
    int n,row;
    char col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col='A';col<'A'+row;col++)
        {
            printf("%c ",col);
        }
     
        printf("\n");
    }

    return 0;
}
