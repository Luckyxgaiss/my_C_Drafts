#include<stdio.h>
int main(){
	int a,b,c=0;
	for(;;){ 
	printf("enter a number:");
	scanf("%d",&a);
	  if(a!=0){
	    for(b=2;b<a;b++){
	      if (a%b==0) c++;
	      else continue;
           }
        if (c==0)  printf("%d is a sushu\n",a);
        else  printf("%d is not a sushu\n",a);
        }
       else break; 
   }
    return 0;
}
