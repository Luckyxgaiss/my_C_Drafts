#include<stdio.h>
int main(){
	int a,A,b,B,n,c,d;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	A=a;B=b;
	for(;;){  while (a>b){a-=b;}
	          while (a<b){b-=a;}
			  while (a==b){printf("���Լ��%d\n",a);  n=a;  goto END;}
		}
	END:
		c=A/n;   d=B/n;
		printf("��С������%d",c*d*n);
		return 0;
} 
