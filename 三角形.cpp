#include<stdio.h>
#define LINE 30
int main(){
	int i,j;
	for(i=0;i<LINE;i++){
	   for(j=0;j<(LINE-i);j++){
	   	printf(" ");
	               }
	for(j=0;j<2*i+1;j++){printf("*"); 
	               }
	printf("\n");
	   }
	   return 0;
	
	
}
