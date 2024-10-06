#include<stdio.h>
int main()
{ 
   int tam,eng,mat,sci,soc,tot,avg;
   scanf("%d%d%d%d%d",&tam,&eng,&mat,&sci,&soc); 
   tot=tam+eng+mat+sci+soc;
   printf("Total = %d\n",tot); 
   avg=tot/5; 
   printf("Average = %d\n",avg);
//To find grade// 
   if(tot<=500 && tot>450)
   { 
      printf("O grade"); 
   } 
   else if(tot<=450 && tot>400) 
   { 
      printf("A grade");
   }
   else if(tot<=400 && tot>350) 
   {
      printf("B grade"); 
   } 
   else if(tot<=350 && tot>300)
   { 
      printf("C grade"); 
   } 
   else if(tot<=300 && tot>=250)
   {
      printf("D grade"); 
   } 
   else if(tot<250 && tot>=0) 
   { 
      printf("F grade");
   } 
   else 
   { 
      printf("Invalid mark"); 
   } 
// To clear the exam// 
   if(tam>=50 && eng>=50 && mat>=50 && sci>=50 && soc>=50 ) 
   { 
      printf("\nYou cleared all the exam");
   }
   else 
   { 
      printf("\nYou are Failed ");
   } 
   return 0; 
}
