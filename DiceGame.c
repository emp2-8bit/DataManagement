#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,i,sum=0;
  char name[20];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);

  printf("Rolling dice...\n");
  for(i=0;i<2;i++){
    n=rand() % 6;
    sum=sum+n+1;
    printf("Die %d: %d\n",i+1,n+1);
  }
  printf("Total value: %d\n",sum);
  if(sum>7){
    printf("name won\n");
  }else{
    printf("name lost\n");
  }
}
