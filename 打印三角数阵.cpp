#include<stdio.h>
int main(){
	  int a,h,c,d,e;
	  printf("enter your number:");
	  scanf("%d",&a);
	  if(a<=9)
	         for(h=a;h>=0;h--){
	         	for(c=1;c<=h;c++){
	         	printf("%2d",c);}
			 printf("\n");}
	  else printf("too big");
	  return 0;
	         
	     
}
