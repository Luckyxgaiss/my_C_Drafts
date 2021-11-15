#include<stdio.h>
int digui(int n){
	if(n<=1) return 1;
	else  return n*digui(n-1);
} 
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	printf("jiechengshi:%d",digui(a));
	return 0;
}
