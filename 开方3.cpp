#include<stdio.h>
int main(){
	float result,left,right,mid,target;
	printf("enter your number:");
	scanf("%f",&target);
	left=0;right=target;
	while(right-left>=0.01){
		mid=(left+right)/2;
		if(mid*mid>target)    right=mid;
		else  left=mid;
	}
	printf("the result is :%f",mid);
	return 0;
} 
