#include<stdio.h>
int main(){
	int a,b,n,x,y;
	for(;;){
	printf("enter the fenshu :");
	scanf("%d/%d",&a,&b);
	x=a;y=b;
		if(a==0&&b==0) break; 
	while(a!=b){
		while(a>b) {a-=b;}
		while(a<b) {b-=a;}
	}
		n=a;
	printf("GCD=%d\n",a);
	printf("%d/%d\n",x/n,y/n);
	}
	return 0;
}
