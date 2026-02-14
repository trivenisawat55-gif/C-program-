#include <stdio.h>
//table of number
  int main(){ 
    int num;
    printf("enter number to print table");
    scanf("%d",&num);
    if(num>0){
  for(int i=1;i<=10;i++){
    printf("%d*%d=%d",num,i,num*i);
      }
    }
    else
      printf("enter positive number");
  return 0;
}
