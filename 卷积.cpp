#include<stdio.h>
int main(){
	int width,height,depth,number,size,lenth,p;
	printf("enter width,height,depth,number,size,lenth:");
	scanf("%d %d %d %d %d %d",&width,&height,&depth,&number,&size,&lenth);
	printf("%d",(width*height-size*size+2*p)/lenth+1);
	return 0;
} 
