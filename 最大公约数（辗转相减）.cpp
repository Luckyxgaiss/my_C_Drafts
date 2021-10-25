#include<stdio.h>
int main(){
	int a,b,n;
	for(;;){
	printf("two numbers:");
	scanf("%d %d",&a,&b);
		if(a==0&&b==0) break; 
	while(a!=b){
		while(a>b) {a-=b;}
		while(a<b) {b-=a;}
	}
	printf("GCD=%d\n",a);}
	return 0;
}
