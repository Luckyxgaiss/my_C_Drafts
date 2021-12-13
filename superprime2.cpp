#include<stdio.h>
int prime(int x){
	int i,l=0;
	if(x<=1) return 0;
	if(x==2) return 1;
	for(i=2;i<x;i++){
		if(x%i==0) l++;
		else continue;
	}
	if(l==0) return 1;
	else return 0;
} 
int main(){
	int n;
	scanf("%d",&n);
	if(prime(n)) printf("yes\n");
	else printf("no\n");
	int num[10],len=0,sum1=0,sum2=0,i,k;
    		for(k=0;;k++){
    			num[k]=n%10;
    			len++;
    			n/=10;
    			if(n==0) break;
			}
	for(i=0;i<len;i++){
		printf("%d\n",num[i]);
	}
	return 0;
}
