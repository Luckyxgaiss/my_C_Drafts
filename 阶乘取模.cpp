#include <stdio.h>
  long long jiecheng(long long i){
      long long  jiechen=1;
     int k;
     if(i==0) return 1;
	for(k=1;k<=i;k++){
	jiechen*=k;
	}
	return jiechen;
     }

int main(){
	int n,i;
     long long k,a[100],sum;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
     scanf("%lld",&a[i]);
     }
     for(i=0;i<n;i++){
         sum=0;
         if(a[i]==0) printf("1");
         for(k=1;k<=a[i];k++){
         	    if(jiecheng(k)<1000000) sum+=k; 
                else sum+=jiecheng(k)%1000000;
          }
          printf("%lld\n",sum%1000000);
        }
    return 0;
}
