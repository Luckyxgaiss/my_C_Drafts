#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int n,i,k=0,l=0,NUM[100]; 
	char a[100][100],b[100][100],c[100][100];
	scanf("%d",&n);
	if(n>100||n<1) return 0;
	for(i=0;i<n;i++){//读入字符 
		scanf("%s %s %s",&a[i],&b[i],&c[i]);
	}
	char invalid[]="n/a";
	int d[100]; 
	for(i=0;i<n;i++){//把第三项有效成绩筛选出来 ，马上转数字，储存到NUM数组中 
		if(strcmp(c[i],invalid)==0)  continue;
		if(isdigit(c[i][0]))	{
		     d[k]=i;//是数字的i值储存到d中 
		     NUM[i]=atoi(c[i]);
		     k++;
		}	
	}
	int MAX=0,MIN=100;
	for(i=0;i<k;i++){
		if(NUM[d[i]]>MAX) MAX=NUM[d[i]];
	}//筛选出最大成绩 储存在MAX中 
    for(i=0;i<k;i++){
    	if(NUM[d[i]]<MIN) MIN=NUM[d[i]];
	}//筛选出最小成绩 储存在MIN中
	int D[100],X[100],p=0,q=0;//用于储存并列的位数 
	for(i=0;i<k;i++){
		if(NUM[d[i]]==MAX) {
			D[p]=d[i];
			p++;
		} 
	}//选出最大成绩并列 
	for(i=0;i<k;i++){
		if(NUM[d[i]]==MIN) {
		    X[q]=d[i];
			q++;	
		}
	}//选出最小成绩并列
	char DD[10]="A",XX[10]="z";
	int Q,P;
	for(i=0;i<p;i++){//从筛选的最大成绩行里找出名字典序最小的 
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
	
	/////// 只是输出最小有问题了 
	
	
	
	
	
	
	
	
	
	
