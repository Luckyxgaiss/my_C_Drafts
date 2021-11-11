#include<stdio.h>
int shuixianhua(int x){
	int a,b,c;
	a=x%10;
	b=x/10%10;
	c=x/100;
	if(a*a*a+b*b*b+c*c*c==x) return 1;
	else return 0;
} 
int main(){
	int i,n,k,m,l;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(k=0;k<n;k++){
		l=0;
		for(m=a[k][0];m<=a[k][1];m++){
			if(shuixianhua(m)) printf("%d ",m);
			else l++;
		}
		if(l==a[k][1]-a[k][0]+1) printf("-1\n");
		 else printf("\n");
	}
	return 0;
}
