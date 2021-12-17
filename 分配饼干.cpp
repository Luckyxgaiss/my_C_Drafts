#include<stdio.h>
void sort(int a[],int n){
	int *p=a,i,mid,k;
	for(i=0;i<n;i++){
		for(k=i;k<n;k++){
			if(*(p+i)>*(p+i+1)){
				mid=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=mid;
			}
		}
	}
}
int main(){
	int i,k,child[100],satis=0,numchild,numbiscuit,biscuit[100];
	scanf("%d %d",&numchild,&numbiscuit);
	for(i=0;i<numchild;i++){
		scanf("%d",&child[i]);
	}
	for(i=0;i<numbiscuit;i++){
		scanf("%d",&biscuit[i]);
	}
	sort(child,numchild);
	sort(biscuit,numbiscuit);
	for(i=0,k=0;;){
		if(i==numbiscuit||k==numchild){
			break;
		}
		if(biscuit[i]>=child[k]){
			i++;
			k++;
			satis++;
		}
		if(biscuit[i]<child[k]){
			i++;
		}
	}
	printf("max=%d",satis);
	return 0;
}
