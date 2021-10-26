#include<stdio.h>
int main(){
	int a,A,b,B,n,c,d;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	A=a;B=b;
	for(;;){  while (a>b){a-=b;}
	          while (a<b){b-=a;}
			  while (a==b){printf("最大公约数%d\n",a);  n=a;  goto END;}
		}
	END:
		c=A/n;   d=B/n;
		printf("最小公倍数%d",c*d*n);
		return 0;
} 
