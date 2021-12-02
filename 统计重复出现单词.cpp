#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n,i=0,e,NUM=0,p=0,k,N[100]={0},c;
	char str[100][100],ch[100][100],st[100][100];
    for(i=0;;i++){//行数 
      e=0;
      NUM++;
    	for(;;){//每一行的各个元素 
    	   c=getchar();
		   if(c=='\n'||isspace(c)||ispunct(c)) break;
		   if(isalpha(c)) {
		   	 str[i][e]=c;
		   	 e++;
		                  }
		   if(c==EOF) goto END;
		}
	}
	END:
	for(i=0;i<NUM;i++){
		strcpy(str[i],strlwr(str[i]));
	}
	strcpy(ch[0],str[0]);
	int w=1;
	for(i=1;i<NUM;i++){
		int l=0;
		for(k=0;k<i;k++){//检查与前面所有行是否有重合 
			if(strcmp(str[i],str[k])==0)
			   l++;
		}
		if(l==0) {
		strcpy(ch[w],str[i]);
		w++;
		p++;}
	}
	for(i=0;i<p;i++){//凭查重后的单词到整个单词数组中寻找 
		for(k=0;k<NUM;k++){
			if(strcmp(ch[i],str[k])==0) {
				N[i]++;
			}
		}
	}
	int MAX=0;
	for(i=0;i<p;i++){
		if(N[i]>MAX) {
			MAX=N[i];
		}
	}
	int ZD[100],r=0;
	for(i=0;i<p;i++){
		if(N[i]==MAX){
			ZD[r]=i;
			r++;
		}
	}
	char D[10]="A";
	int DD;
	for(i=0;i<r;i++){
		if(strcmp(ch[ZD[i]],D)>0){
			strcpy(D,ch[ZD[i]]);
			DD=ZD[i];
		}
	}
	printf("%s %d",ch[DD],DD);
	return 0;
}
