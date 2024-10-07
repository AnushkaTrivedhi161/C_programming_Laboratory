#include<stdio.h>
int main()
{ 
   int days,hours,mins,sec,tot_sec; 
   scanf("%d%d%d%d",&days,&hours,&mins,&sec);
   tot_sec=(days*86400+hours*3600+mins*60+sec);
   printf("%d seconds",tot_sec); 
   return 0; 
}
