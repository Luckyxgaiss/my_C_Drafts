#include<stdio.h>
int main(){
	int target,i,num=0,bill[6]={1,5,10,20,50,100};
	scanf("%d",&target);
	while(1){
		if(target==0) break;
		for(i=5;;i--){
			if(target>=bill[i]) {
				target-=bill[i];
			    num++;
			    break;
			}
		}	
	}
	printf("max=%d",num);
	return 0;
} 
