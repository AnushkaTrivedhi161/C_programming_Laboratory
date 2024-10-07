#include<stdio.h>
int main()
{ 
   int km,meters,centimeters;
   scanf("%d",&km); 
   meters=km*1000; 
   centimeters=km*100000;
   printf("meters = %d m\n",meters);
   printf("centimeters = %d cm",centimeters);
   return 0; 
}
