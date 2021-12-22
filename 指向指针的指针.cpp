#include <stdio.h>
#include <string.h>
void Exchange(char **str,int n);
int main()
{
int n,i,len[101],k;
char ch[101][100],*first[101],**second[101];
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%s",&ch[i]);
  	len[i]=strlen(ch[i]);
  }
 for(i=0;i<n;i++){
 		first[i]=ch[i];
 }
 /*for(i=0;i<n;i++){
 	for(k=0;k<len[i];k++){
 		printf("%c",*first[i]);
 		first[i]++;
	 }
	 printf("\n");
 }*/
 for(i=0;i<n;i++){
   
    	second[i]=&first[i];

 }
/*for(i=0;i<n;i++){
 	for(k=0;k<len[i];k++){
 		printf("%c",**second[i]);
 		(*second[i])++;
	 }
	 printf("\n");
 }*/
 for(i=n-1;i>=0;i--){
 	Exchange(second[i],len[i]);
 }
 return 0; 
}
void Exchange(char **str, int n)//**str=**second[i]
{
	int i,k;
   char sort[101],x,y,min='z';
 /*for(k=0;k<n-1;k++){
   for(i=0;i<n-1;i++){
   	  	if(**str>*((*str)++)){
            x=**str;	  		
   	  		y=*((*str)++);
   	  		**str=y;
   	  		*((*str)++)=x;
			 }
			(*str)++;
   }
}
 	for(k=n-1;k>=0;k--){
 		printf("%c",**str);
 		(*str)++;
	 }*/
	 for(i=0;i<n;i++){
	 	sort[i]=**str;
	 	(*str)++;
	 }
	/* for(i=0;i<n;i++){
	 	printf("%c",sort[i]);
	 }*/
	 for(i=0;i<n-1;i++){
	 	for(k=0;k<n-1;k++){
	 		if(sort[k]>sort[k+1]){
	 			x=sort[k];
	 			y=sort[k+1];
	 			sort[k]=y;
	 			sort[k+1]=x;
			 }
		 }
	 }
	 for(i=0;i<n;i++){
	 	printf("%c",sort[i]);
	 }
	 printf("\n");
}
