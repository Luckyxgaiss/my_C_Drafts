#include<stdio.h>
#include<string.h>
int my_atoi(char ch){
    int num;
    num=int(ch-'0');
    return num;
}
int main(){
	int i;
    char transfer[10];
	gets(transfer);
	int len;
	len=strlen(transfer);
	for(i=0;i<len;i++){
		printf("%d ",my_atoi(transfer[i]));
	}	
	return 0;
}
