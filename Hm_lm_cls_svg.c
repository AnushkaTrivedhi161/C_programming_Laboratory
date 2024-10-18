#include <stdio.h>

int main()
{
    int i,n,tot=0;
    scanf("%d",&n);
    int mrk[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&mrk[i]);
    }
    int hm=mrk[0],lw=mrk[0];
    for(i=0;i<n;i++)
    {
        tot+=mrk[i];
        if(mrk[i]>hm)
        {
            hm=mrk[i];
        }
        if(mrk[i]<lw)
        {
            lw=mrk[i];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(mrk[j]==hm)
        {
            printf("hr=%d\n",1+(j++));
        }
        if(mrk[j]==lw)
        {
            printf("lr=%d\n",1+(j++));
        }
        
    }
      printf("hm=%d\n",hm);
      printf("lw=%d\n",lw);

      float avg=(float)tot/n;
      printf("%.2f",avg);
    
    return 0;
}
