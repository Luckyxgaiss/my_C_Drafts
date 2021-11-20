#include<stdio.h>
#include<string.h>
int main(){
	int n,l,i,k,p,q;
	char ch[1000];
	scanf("%d",&n);
	getchar();
	fgets(ch,1000,stdin);
	l=strlen(ch);
	char H[l],T[l];
	strcpy(H,ch);
	strcpy(T,H);
	p=l-n;
	for(i=0;i<=n;i++){
		H[i]=H[p];
		p++;
	}
	q=0;
	for(i=n;i<l;i++){
		H[i]=T[q];
		q++;
	}
	for(i=0;i<l;i++){
		printf("%c",H[i]);
	}
	return 0;
} 
