#include<stdio.h>
int main(){
  int a,b,n;
  printf("number:");
  scanf("%d",&a);
  b=a;
  for(n=a-1;n>=1;n--){
  	b*=n;
  }
  printf("a!=%d",b);
  return 0;


}
