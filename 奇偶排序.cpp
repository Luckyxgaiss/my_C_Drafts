#include<stdio.h>
int main(){
	int n,i,r,t,X,Y,u,v,k;
	scanf("%d",&n);
	int a[n][10000],L[10000],O[10000],J[10000];
	char s;
	for(i=0;i<n;i++){
		for(k=0;;k++){
			scanf("%d",&a[i][k]);
			L[i]++;
			s=getchar();
			if(s=='\n') break;
		}
	}
	for(i=0;i<n;i++){//ѭ���жϲ����ÿһ��
	int p=0,q=0; 
		for(k=0;k<L[i];k++){//��һ�е������� 
			if(a[i][k]%2==0) {O[p]=a[i][k]; p++;}
			else {J[q]=a[i][k]; q++;}
		}
		for(r=0;r<q-1;r++){//���������� 
			for(t=0;t<q-1;t++){
				if(J[t]>=J[t+1]) {
					X=J[t];
					Y=J[t+1];
					J[t]=Y;
					J[t+1]=X;
				}
			}
		}
		for(v=0;v<q;v++){//������������� 
			printf("%d ",J[v]);
		}
		for(r=0;r<p-1;r++){//��ż������ 
			for(t=0;t<p-1;t++){
				if(O[t]>=O[t+1]) {
					X=O[t];
					Y=O[t+1];
					O[t]=Y;
					O[t+1]=X;
				}
			}
		}
		for(u=0;u<p;u++){//���ż�������� 
			printf("%d ",O[u]);
		}
		printf("\n");
	}
	return 0;
} 
