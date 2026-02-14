#include <stdio.h>
//square & cube 
int main(){
  int n,i;
  printf("enter no of terms to find a table of square&cube");
  scanf("%d",&n);
  while(n>0){
    for(i=0;i<=n;i++){
      printf("%d %d %d\n",i,i*i,i*i*i);
    }
  }
  return 0;
}
