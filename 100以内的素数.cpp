#include<stdio.h>
int main(){
	int a,n;
	for(n=2;n<=100;n++){
		for (a=2;a<n;a++){if(n%a==0) break;
		                  else if(a==n-1)  printf("%d\t",n);
		                  else continue;
		}
	}
	return 0;
}
