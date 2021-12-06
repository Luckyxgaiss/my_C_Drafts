#include<stdio.h>
int main(){
	int n[100],m,i,q,p,k,l,x,y,r,width[100],a[100][100],sq[100][100],paixu[100];
	for(m=0;;m++){
	scanf("%d %d",&width[m],&n[m]);
	for(i=0;i<n[m];i++){
		scanf("%d",&a[m][i]);
	}
	if(getchar()==EOF) break;
}
    for(r=0;r<m;r++){
	if(width[r]%2==0) {
		printf("ERROR");
		return 0;
	}
	for(i=0;i<(width[r]-1)/2;i++){
		sq[r][i]=a[r][i];
	}
	for(i=n[r]-(width[r]-1)/2;i<n[r];i++){
		sq[r][i]=a[r][i];
	}
	for(i=(width[r]-1)/2;i<n[r]-(width[r]-1)/2;i++){
           int head=i-(width[r]-1)/2;
	    for(k=0;k<width[r];k++){//¸³Öµ 
	    	paixu[k]=a[r][head];
	    	head++;
		}
		for(k=0;k<width[r]-1;k++){//ÅÅÐò 
			for(l=0;l<width[r]-1;l++){
				if(paixu[l]>paixu[l+1]){
					x=paixu[l];
					y=paixu[l+1];
					paixu[l]=y;
					paixu[l+1]=x;
				}
			}
		}
	sq[r][i]=paixu[(width[r]-1)/2];
	}
	for(i=0;i<n[r];i++){
		printf("%d ",sq[r][i]);
	}
	printf("\n");
}
	return 0;
} 
