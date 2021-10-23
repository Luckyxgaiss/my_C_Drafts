#include<stdio.h>
int main(){
	int a,b,c;
	printf("\t找出最大数");
	printf("enter three numbers:a=  ");
	scanf("%d",&a);
	printf("\t\t\t\t\tb=  ");
	scanf("%d",&b);
	printf("\t\t\t\t\tc=  ");
	scanf("%d",&c);
	if(a>b){
		if(a<c) printf("c>a>b");  
		else  if(b>c)  printf("a>b>c");
		      else  printf("a>c>b");
}
	else if(a<b){
		         if(c>b)  printf("c>b>a");
		         else if(c<a)  printf("b>a>c");
		              else       printf("b>c>a");
	     } 
	
	   
	return 0;
}
