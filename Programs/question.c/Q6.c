#include<stdio.h>

int main() {
  int n;
  printf("enter number");
  scanf("%d",&n);
  
  int sum =0;
  for(int i=1,j=0; i<=n,j<=6; i++,j++){
    sum = sum+i;
    printf("%d\n",j);
  }
  printf("sum is %d\n",sum);

  return 0;
}