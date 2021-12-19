#include<stdio.h>
int translate(char ch){
	switch(ch){
		case 'a':printf(".-");       break;
		case 'b':printf("-...");     break;
		case 'c':printf("-.-.");     break;
		case 'd':printf("-..");      break;
		case 'e':printf(".");        break;
		case 'f':printf("..-.");     break;
		case 'g':printf("--.");      break;
		case 'h':printf("....");     break;
		case 'i':printf("..");       break;
		case 'j':printf(".---");     break;
		case 'k':printf("-.-");      break;
		case 'l':printf(".-..");     break;
		case 'm':printf("--");       break;
		case 'n':printf("-.");       break;
		case 'o':printf("---");      break;
		case 'p':printf(".--.");     break;
		case 'q':printf("--.-");     break;
		case 'r':printf(".-.");      break;
		case 's':printf("...");      break;
		case 't':printf("-");        break;
		case 'u':printf("..-");      break;
		case 'v':printf("...-");     break;
		case 'w':printf(".--");      break;
		case 'x':printf("-..-");     break;
		case 'y':printf("-.--");     break;
		case 'z':printf("--..");     break;
	}
}
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
	char str[1000],i;
	fgets(str,1000,stdin);
	for(i=0;;i++){
		if(str[i]=='\0'){
			printf(" ");
			continue; 
		}
		if(str[i]=='\n'){
	    	break;
		}
		translate(transfer(str[i]));
	}
	return 0;
} 
