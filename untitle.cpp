#include<stdio.h>
int main(){
	char buffer[200];
	FILE *pf=fopen("untitle.cpp","r");
	while(!feof(pf)){
		fgets(buffer,200,pf);
		printf("%s",buffer);
	}
	fclose(pf);
	return 0;
}
