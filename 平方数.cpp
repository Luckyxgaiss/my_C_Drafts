#include<stdio.h>
int main(){
	int a,b;
	printf("enter your number:");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
	  printf("\t%d\t%d\n",b,b*b);
	}
	
	return 0;
	
}

