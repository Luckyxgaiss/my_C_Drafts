#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_atoi(char ch){
    int num;
    num=ch-'0';
    return num;
}
char my_itoa(int num){
	char ch;
	ch=num+'0';
	return ch;
}
int main(){
	int i,k=0,len,mult,gewei=0,carry=0,single,single_1;
	char num[100],result[100];
	scanf("%s %d",&num,&mult);
	len=strlen(num);
	printf("%d\n",len);
	for(i=len-1;i>=0;i--){
		single=my_atoi(num[i])*mult;
		single_1=single+carry;
		gewei=single_1%10;
		carry=single_1/10;
		result[k++]=my_itoa(gewei);
	}
	result[k]=my_itoa(carry);
	for(i=k;i>=0;i--){
		printf("%c",result[i]);
	}
	printf("\n%ld",atol(num)*mult);
	return 0;
}
