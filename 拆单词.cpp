#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	int i,k,g=0,NUM,c,N[100]={0}; 
	char word[100][100],ch[100][100],str[100][100];//word��ԭʼ����(NUM)��str��ȥ�ո������(g)��ch�ǲ��غ������ (p)
	for(k=0;;k++){//���Ƶ��ʵ��л������Ƕ�ά��������л���
	     for(i=0;;i++){//������ĸ���л� 
	    	c=getchar();
	   	    if(c=='\n'||isspace(c)||ispunct(c)){
	   		break;
		     }
		    if(isalpha(c)) word[k][i]=c;
		    if(c==EOF) break;
	       }
	  if(c==EOF) break;
	}
	NUM=k+1;
	for(i=0;i<NUM;i++){
		if(word[i][0]=='\0') continue;
		strcpy(str[g],word[i]);
		g++;
	}
		for(i=0;i<g;i++){
		    strlwr(str[i]);
	}
	strcpy(ch[0],str[0]);
	int w=1,p=0;
	for(i=1;i<=g;i++){
		int l=0;
		for(k=0;k<i;k++){//�����ǰ���������Ƿ����غ� 
			if(strcmp(str[k],str[i])==0)
			   l++;
		}
		if(l==0) {
		strcpy(ch[w],str[i]);
		w++;
		p++;}
	}
	for(i=0;i<p;i++){//ƾ���غ�ĵ��ʵ���������������Ѱ�� 
		for(k=0;k<g;k++){
			if(strcmp(ch[i],str[k])==0) {
				N[i]++;
			}
		}
	}
	int MAX=0;
	for(i=0;i<p;i++){
		if(N[i]>MAX){
			MAX=N[i];
		}
	}
	int ZD[100],s=0;
	for(i=0;i<p;i++){
		if(N[i]==MAX){
			ZD[s]=i;
			s++;
		}
	}
	char D[10]="A";
	int XX;
	for(i=0;i<s;i++){
		if(strcmp(ch[ZD[i]],D)>0){
			strcpy(D,ch[ZD[i]]);
			XX=N[i];
		}
	}
	for(i=0;i<p;i++){
		printf("%s %d\n",ch[i],N[i]);
	}
	printf("%d\n",MAX);
	for(i=0;i<s;i++){
		printf("%s %d\t",ch[ZD[i]],MAX);
	}
	printf("%s %d",D,MAX);
	return 0;
}
