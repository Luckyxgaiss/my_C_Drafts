//输入n个气球的范围，计算最少需要用多少支箭能吧所有气球都射穿 
#include<stdio.h>
int ZD(int x,int y){
	if(x>=y){
		return x; 
	}
	if(x<=y){
		return y;
	}
}
int ZX(int x,int y){
	if(x<=y){
		return x;
	}
	if(x>y){
		return y;
	}
}
int main(){
	int edge[100][2],n,i,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&edge[i][0],&edge[i][1]);
	}
	int min=edge[0][0],max=edge[0][1];
	for(i=1;i<n;i++){
		if(edge[i][0]>max||edge[i][1]<min){
			num++;
		}
		else{
			max=ZX(max,edge[i][1]);
			min=ZD(min,edge[i][0]);
		}
	}
	printf("需要%d支箭",num);
	return 0;
}
