
#include <stdio.h>

int main() {
    char day; // 1-mon, 2- tues ,3-wed
    printf("enter day(1-7) :");
    scanf("%s",&day);

    switch (day) {
       case 'a' : printf("monday\n");
              break;
       case 'b' : printf("tuesday\n");
              break;
       case 'c' : printf("wednesday\n");
              break;
       case 'd' : printf("thursday\n");
              break;
       case 'e' : printf("friday\n");
              break;
       case 'f' : printf("saturday\n");
              break;
       case 'g' : printf("sunday\n");
              break;
       default : printf("not a valid day!");

    }
}