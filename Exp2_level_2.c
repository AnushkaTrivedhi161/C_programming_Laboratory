#include <stdio.h>
int main()
{ 
  char ch;
  scanf("%c",&ch); 
  if(ch>=65 && ch<=91) 
  { 
    printf("%c is a Upper Case Alphabet",ch); 
  }
  else if(ch>=97 && ch<=123) 
  {
    printf("%c is a Lower Case Alphabet",ch); 
  } 
  else if(ch>=48 && ch<=57)
  { 
    printf("%c is a digit",ch);
  } 
  else 
  { 
    printf("%c is a special character",ch);
  }
  return 0;
}
