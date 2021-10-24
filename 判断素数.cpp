#include<stdio.h>
 int main(){
 	int a,b,c=0;
 	printf("enter a number");
 	scanf("%d",&a);
 	for(b=2;b<a;b++){
 		if(a%b==0)  c++;
 		else continue;
	 }
 	   if(c==0) printf("%d is a sushu");
 	   else printf("%d is not a sushu",a);
 	   return 0;
 } 
