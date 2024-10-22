#include <stdio.h>
int main()
{ 
   int num,m,mul=1,i; 
   scanf("%d%d",&num,&m); 
   for(i=1;i<=m;i++) 
   { 
       mul=num*i; 
       printf("%d * %d = %d\n",num,i,mul); 
   }
    return 0;
}
