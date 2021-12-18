#include<stdio.h>
#include<math.h>
int isprime(long long x){
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
	int q,p,i,k=0,len=0,prime[100],m;
	for(i=2;i<100;i++){
		if(isprime(i)){
			prime[k]=i;
			printf("%d\n",prime[k]);
			k++;
			len++;
		}
	}
	for(i=0;i<len;i++){
		for(m=0;m<len;m++){
			if(isprime(pow(prime[i],prime[m]))&&isprime(pow(prime[m],prime[i]))){
				printf("p=%d q=%d",prime[i],prime[m]);
				continue;
			}
			else continue;
		}
	}
	return 0;
}
