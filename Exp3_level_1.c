#include <stdio.h>
int main() 
{ 
   int num,n,p=0,l=0;
   scanf("%d",&n);
   int a=0; 
   while(a<n)
   { 
      scanf("%d",&num);
      if(num>0)
      {
         p++; 
      } 
      if(num<0)
      { 
         l++; 
      } 
       a++; 
   }
      printf("positive:%d\n",p);
      printf("negative:%d",l); 
  return 0; 
}
