#include<stdio.h>
#define N 10
int main(){
	int a,b,i=0;
	for(a=0;a<=N;a++){
		for(b=0;b<=N;b++){
			printf("%3d",i++);
		}
	printf("\n"); 
	}
	return 0;
}
