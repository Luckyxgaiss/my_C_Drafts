#include<stdio.h>
int main(){
	int n,a[n],i,k;
	printf("how many numbers:");
	scanf("%d",&n);
	printf("enter %d numbers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("reverse:\t");
	for(k=n-1;k>=0;k--){
		printf("%d\t",a[k]);
	}
	return 0;
	
}
