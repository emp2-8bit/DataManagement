#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,i,sum=0;

  printf("Rolling dice...\n");
  for(i=0;i<2;i++){
    n=rand() % 6;
    sum=sum+n+1;
    printf("Die %d: %d\n",i+1,n+1);
  }
  printf("Total value: %d\n",sum);
}
