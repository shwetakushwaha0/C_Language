#include<stdio.h>

int main()  {
  char ch;
  printf("enter character\n");
  scanf("%c",&ch); 

  if(ch>='A' && ch<='Z') {
    printf("upper case\n");
  }
  
  else if(ch>='a' && ch<='z') {
    printf("lower case\n");
  }

  else{
    printf("no english language\n");
  }
  return 0;
}
  

