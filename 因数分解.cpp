#include<stdio.h>
int isprime(int x){
	int n=0,i;
	for(i=2;i<x;i++){
		if(x%i==0) n++;
	}
	if(n==0) return 1;
	else return 0;
}
int main(){
  int n,i,m,a[100],yinshu[100][100],prime[1000],k=0,l,num[100];
	scanf("%d",&n);
	for(i=0;i<100;i++){
		num[i]=0;
	}
	for(i=2;i<1000;i++){
		if(isprime(i)){
			prime[k]=i;
			k++;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		
		if(isprime(a[i])) {
			printf("%d\n",a[i]);
			continue;
		}
		m=0;
	    ///////////
	    for(;;){
	    	for(k=0;;k++){
	    		if(a[i]%prime[k]==0){
	    			yinshu[i][m]=prime[k];
	    			num[i]++;
	    			m++;
	    			a[i]/=prime[k];
	    			break;
			          }
		        }
		    if(isprime(a[i])) {
					yinshu[i][m]=a[i];
					break;
			   }
	       }
		for(l=0;l<num[i];l++){
			printf("%d*",yinshu[i][l]);
		}
			printf("%d\n",yinshu[i][num[i]]);
	}
	return 0;
}
