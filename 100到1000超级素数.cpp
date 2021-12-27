#include<stdio.h>
#define N 100
int main(){
	int a1,A1,a2,A2,a3,A3,i,I,R,l,k,S[N],T[N],L[N],n=0,m=0,sum,SUM;
	for(k=100;k<=1000;k++){
		for(i=2;i<k;i++){
			if(k%i==0)  break;
			else if(i==k-1){S[n]=k;    n++;}
		   }
	}
	for(n=0;n>=0;n++){
		while(S[n]==0)  break;
		while(S[n]!=0) {a1=S[n]/100;  a2=S[n]%100/10;  a3=S[n]%100%10;
		     sum=a1+a2+a3;
			 for(I=2;I<sum;I++){
			 	if(sum%I==0) break;
			 	else if(I==sum-1) {T[m]=S[n];}
			 }
		}
	}
	for(m=0;m>=0;m++){
		while(T[m]==0)  break;
		while(T[m]!=0){
			A1=T[m]/100;A2=T[m]%100/10;A3=T[m]%100%10;
			SUM=A1*A1+A2*A2+A3*A3;
			for(R=2;R<SUM;R++){
				if(SUM%R==0) break;
				else if(R==SUM-1) {L[l]=T[m];}
			}
		}
	}
	for(l=0;l>=0;l++){
		if(L[l]==0) continue;
		else printf("%d\t",L[l]);
	}
	return 0;
}

