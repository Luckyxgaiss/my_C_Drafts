#include<stdio.h>
int main(){
	int a,h,c,e;
	printf("enter your number:");
	scanf("%d",&a);
	e=1;
	if(a<=10)
	  for(h=a;h>=0;h--){
	  	for(c=1;c<=h;c++){
	  		printf("%2d",e);
	  		e++;
		  }
	  	printf("\n");
	  }
	return 0;
	  
}
