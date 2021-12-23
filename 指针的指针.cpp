#include <stdio.h>
#include <string.h>
void Exchange(char **str,int n);
int main(){
int n,i,len[101],k;
char ch[101][100],*first[101],**second;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%s",&ch[i]);
  	len[i]=strlen(ch[i]);
    }
  for(i=0;i<n;i++){
 		first[i]=ch[i];
    }
    second=first;
 	Exchange(second,n);
 return 0; 
}
void Exchange(char **str, int n)//**str=**second
{
   int i,k,sequnce[101],num[101],l=0;
   char sort[101][100],x,y,min='z';
   for(i=0;i<101;i++){
   	num[i]=0;
   }
	for(i=0;i<n;i++){
	 	k=0;
	 		while(**(str+i)!='\0'){
	 		    sort[i][k]=**(str+i);
	 		      (*(str+i))++;
	 		      k++;
	 		      num[i]++;
	 		  }
	 }
	/* for(i=0;i<n;i++){
	 	printf("%s\n",sort[i]);
	 }
	 printf("\n\n\n");
	 if(strcmp(sort[1],sort[2])>0)
	    printf("%s\n",sort[2]);
	else printf("%s\n",sort[1]);
	printf("\n\n\n");*/
	for(k=0;k<n-1;k++){
	    for(i=0;i<n-1;i++){
		   char middle[101];
	 	    	if(strcmp(sort[i],sort[i+1])>0){
	 		    	strcpy(middle,sort[i]);
	 			    strcpy(sort[i],sort[i+1]);
	 			    strcpy(sort[i+1],middle);
			 }
		 }
	 }
	for(i=0;i<n;i++){
		printf("%s\n",sort[i]);
			}
}
