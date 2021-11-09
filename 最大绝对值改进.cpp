#include<stdio.h>
int def(int e){
	int f;
	f=-e;
	return f;
}
int main(){
	int n,a[n],i,m,X,Y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(m=0;m<n-1;m++){
			if(a[m]>=a[m+1]){
				X=a[m];
				Y=a[m+1];
				a[m]=Y;
				a[m+1]=X; 
			}
		}
	}
	if(def(a[0])>=a[n-1])  printf("%d",a[0]);
	else printf("%d",a[n-1]);
	return 0;
	
} 
