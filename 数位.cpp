#include<stdio.h>
int main(){
	int a,b;
	printf("enter your number:");
    scanf("%d",&a);
    while(a>=1){
    	a/=10;
    	b++;}
    	printf("the digit is:%d",b);
	
     
        
	return 0;
}
