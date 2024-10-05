#include<stdio.h>
int main() 
{ 
   int a,b; 
   scanf("%d%d",&a,&b);
   if(a>b) 
   {
      printf("%d is the largest number than %d",a,b);
   } 
   else if(b>a) 
   {     
      printf("%d is the largest number than %d",b,a); 
   } 
   else 
   { 
      printf("They are equal");
   } 
   return 0;
}
