#include<stdio.h>
int main(){
	int sum,num=0,k,a[5],b[6];
	long i,origin;
	scanf("%d",&sum);
	//5
	for(i=10000;i<=99999;i++){
		origin=i;
		for(k=0;k<5;k++){
			a[k]=origin%10;
			origin/=10;
		}
		if(a[0]==a[4]&&a[1]==a[3]){
			if(a[0]+a[1]+a[2]+a[3]+a[4]==sum){
			printf("%ld\n",i);
		    num++;
			}
		}
	}
	//6
	for(i=100000;i<=999999;i++){
		origin=i;
		for(k=0;k<6;k++){
			b[k]=origin%10;
			origin/=10;
		}
		if(b[0]==b[5]&&b[1]==b[4]&&b[2]==b[3]){
		   if(b[0]+b[1]+b[2]+b[3]+b[4]+b[5]==sum){
			   printf("%ld\n",i);
		       num++;
		}
	  }
	}
	if(num==0) printf("-1");
	return 0;
}
