#include<stdio.h>
#include<string.h>
#include<ctype.h>
char transfer(char c){
	if(c<=90&&c>=65){
		return 155-c;
	}
	else {
		return c;
	}
	
}
int main(){
	int len,i;
	 char trans[100],final[100];
	 fgets(trans,100,stdin);
	 len=strlen(trans);
	 for(i=0;i<len;i++){
	 	putchar(transfer(trans[i]));
	 }
	return 0;
}
