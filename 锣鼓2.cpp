#include<stdio.h>
#include<string.h>
void transfer(char c,int n){
	if(c+n>122){
		printf("%c",97+(c+n)-122-1);
	}
	else printf("%c",c+n);
}
int main(){
	int i,n,len;
	char str[100];
	scanf("%d",&n);
	getchar();
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
	    transfer(str[i],n);
	}
	return 0;
}
