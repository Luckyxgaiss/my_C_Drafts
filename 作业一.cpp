#include<stdio.h>
#include<math.h>
int isprime(int x){
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
	int n,num[10],len,sum1,sum2,i,k,l,p,q,origin,geshu=0;
	double sum3;
    for(n=100;n<10000;n++){
    	origin=n;
       if(isprime(n)){
	      len=0,sum1=0,sum2=0,l=0,p=0,q=0;
           for(k=0;;k++){
    	    	num[k]=origin%10;
    	    	len++;
    		    origin/=10;
    		    if(origin==0) break;
			}
	        for(i=len-1;i>=0;i--){
		        if(isprime(num[i])==0)
		        l++;
	        }
	        for(i=len-1;i>=0;i--){
	            sum1+=num[i];
	        }
	        if(isprime(sum1)==0)  p++;
	        for(i=len-1;i>=0;i--){
		        sum2+=num[i]*num[i];
		       }
		    if(isprime(sum2)==0)  q++;
	if(l==0||p==0||q==0){
		sum3+=n;
		geshu++;
	   printf("%d is a superprime\n",n);	
	  }
    }
    else continue;
}
    double average;
    printf("geshu=%d\nsum=%f\naverage=%f",geshu,sum3,sum3/geshu);
	return 0;
}
