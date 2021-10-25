#include<stdio.h>
int main(){
	int a,b,t;
	printf("two numbers:");
	scanf("%d %d",&a,&b);
	if(a==0||b==0) printf("invalid number");
	
	else if(b>a){
		for(t=a;t>0;t--)
		   if(b%t==0&&a%t==0)  break;
	    }
	else if(a>b){
		for(t=b;t>0;t--)
		   if(b%t==0&&a%t==0)  break;
	    }
	else if(a=b){
		printf("GCD=%d",a);
	}
	printf("GCD=%d",t);
	return 0;    
	
}
