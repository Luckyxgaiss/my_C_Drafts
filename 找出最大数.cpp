#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);
if (a>b)	
   if   (a>c) max=a;
   else  max=c;
else if (c<b) max=b;
     else max=c;
printf("max=%d",max);	
	
	return 0;
}
  

