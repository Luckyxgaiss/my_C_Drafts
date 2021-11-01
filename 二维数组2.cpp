#include<stdio.h>
#define N 10
int main(){
	int a,b,c,i;
	for(a=0;a<=N;a++){
		for(b=0;b<=N;b++){
			i=0;
			if(a==b) printf(" 1");
			else printf(" 0");
			i++;
		}
		printf("\n");
	}
	return 0;
}
