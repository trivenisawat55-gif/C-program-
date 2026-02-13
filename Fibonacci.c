#include <stdio.h>
// Fibonacci series
int main(){
  int t1=0;t2=1;
  int nextterm,n;
  printf("\nenter sequential length");
  scanf("%d",&n);
  printf("\nFibonacci series:%d %d",t1,t2);
  for(int i=3;i<=n;i++){
    printf("%d",nextterm);
    t1=t2;
    t2=nextterm;
    nextterm= t1+t2;
  }
  
  return 0;
}
