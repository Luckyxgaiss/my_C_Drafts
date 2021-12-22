#include<stdio.h>
int max(int a,int b){
	if(a>=b) return a;
	if(a<=b) return b;
}
int main(){
	int n,i,k,num[100][100],sum[100][100],result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<i+1;k++){
			scanf("%d",&num[i][k]);
		}
	}
	sum[0][0]=num[0][0];
	for(i=1;i<n;i++){
		sum[i][0]=sum[i-1][0]+num[i][0];
	}
	for(i=1;i<n;i++){
		sum[i][i]=sum[i-1][i-1]+num[i][i];
	}
	for(i=2;i<n;i++){
		for(k=1;k<i;k++){
			sum[i][k]=max(sum[i-1][k-1],sum[i-1][k])+num[i][k];
		}
	}
	for(i=0;i<n-1;i++){
		if(sum[n-1][i+1]>=sum[n-1][i]) result=sum[n-1][i+1];
	}
	printf("%d",result);
	return 0;
} 
