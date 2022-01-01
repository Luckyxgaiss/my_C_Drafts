#include<stdio.h>
#include<string.h>
void transfer(char c){
	if(c>=97&&c<=122){
		printf("%c",c-32);
	}
	if(c<97||c>122) printf("%c",c);
}
int main(){
	int i;
	char str[100];
	gets(str);
	int len=strlen(str);
	for(i=0;i<len;i++){
		transfer(str[i]);
	}
	return 0;
} 
