#include<stdio.h>
int judge(int x,int y,int z){
    if(x*x+y*y==z*z||x*x+z*z==y*y||z*z+y*y==x*x) return 1;
    return 0;
}
int main(){
	int i,n,a[n],b[n],c[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++){
		if(judge(a[i],b[i],c[i])&&a[i]>0&&b[i]>0&&c[i]>0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
