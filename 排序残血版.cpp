#include<stdio.h>
int main(){
	int n,a,b,i,x,y,k;
	printf("how many numbers:");
	scanf("%d",&n);
	int A[n];
	printf("enter %d numbers:",n);
	for(a=0;a<=n-1;a++){
		scanf("%d",&A[a]);
	}
	for(i=1;i<=(n-1);i++){
	      for(b=0;b<=(n-2);b++){
		         if(A[b]>=A[b+1]){
			            x=A[b];
			            y=A[b+1];
			            A[b]=y;
			            A[b+1]=x;
		                         }
	            }
	}
	for(k=0;k<n;k++){
		printf("%d\t",A[k]);
	}
	return 0;
}
