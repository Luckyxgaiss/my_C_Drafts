#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int n,i,k=0,l=0,NUM[100]; 
	char a[100][100],b[100][100],c[100][100];
	scanf("%d",&n);
	if(n>100||n<1) return 0;
	for(i=0;i<n;i++){//�����ַ� 
		scanf("%s %s %s",&a[i],&b[i],&c[i]);
	}
	char invalid[]="n/a";
	int d[100]; 
	for(i=0;i<n;i++){//�ѵ�������Ч�ɼ�ɸѡ���� ������ת���֣����浽NUM������ 
		if(strcmp(c[i],invalid)==0)  continue;
		if(isdigit(c[i][0]))	{
		     d[k]=i;//�����ֵ�iֵ���浽d�� 
		     NUM[i]=atoi(c[i]);
		     k++;
		}	
	}
	int MAX=0,MIN=100;
	for(i=0;i<k;i++){
		if(NUM[d[i]]>MAX) MAX=NUM[d[i]];
	}//ɸѡ�����ɼ� ������MAX�� 
    for(i=0;i<k;i++){
    	if(NUM[d[i]]<MIN) MIN=NUM[d[i]];
	}//ɸѡ����С�ɼ� ������MIN��
	int D[100],X[100],p=0,q=0;//���ڴ��沢�е�λ�� 
	for(i=0;i<k;i++){
		if(NUM[d[i]]==MAX) {
			D[p]=d[i];
			p++;
		} 
	}//ѡ�����ɼ����� 
	for(i=0;i<k;i++){
		if(NUM[d[i]]==MIN) {
		    X[q]=d[i];
			q++;	
		}
	}//ѡ����С�ɼ�����
	char DD[10]="A",XX[10]="z";
	int Q,P;
	for(i=0;i<p;i++){//��ɸѡ�����ɼ������ҳ����ֵ�����С�� 
		if(strcmp(a[D[i]],XX)<0){
		  strcpy(XX,a[D[i]]);
		  Q=D[i];
	    }
	}
	for(i=0;i<q;i++){
		if(strcmp(a[X[i]],DD)>0){
		  strcpy(DD,a[X[i]]);
		  P=X[i];
		}
	}
	printf("%s %s\n%s %s",a[Q],b[Q],a[P],b[P]);
	return 0;
}
	
	/////// ֻ�������С�������� 
	
	
	
	
	
	
	
	
	
	
