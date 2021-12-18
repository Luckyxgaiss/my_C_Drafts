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
	int n;
	scanf("%d",&n);
	if(isprime(n)) printf("yes\n");
	else printf("no\n");
	int num[10],len=0,sum1=0,sum2=0,i,k,l=0,p=0,q=0;
    for(k=0;;k++){
    		num[k]=n%10;
    		len++;
    		n/=10;
    		if(n==0) break;
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
		if(isprime(num[i]*num[i])==0){
			q++;
		}
	}
	if(l==0&&p==0&&q==0){
	   printf("%d is a superprime",n);	
	}
	return 0;
}
