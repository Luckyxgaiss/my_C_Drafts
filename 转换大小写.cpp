#include<stdio.h>
char transfer(char ch){
	char c;
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	if(ch>='A'&&ch<='Z'){
		c=ch+32;
	}
	return c;
}
int main(){
	char ch='B';
   printf("%c",transfer(ch));
   return 0;	 
} 
