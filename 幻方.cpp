#include <stdio.h>
int main(){
    int n , i , j , k  , x , num[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
         for(k=0;k<n;k++){
         num[i][k]=0;
         }    
    }
    i=0;
    k=(n-1)/2;
    num[i][k]=1;
    for(x=2;x<=n*n;x++){//x用来赋值 
        if(i==0){//如果是在顶边上 
        	i=n-1;//则下一个填充的位置变成第n-1排 
        	if(k==n-1) {//如果是最后一列
        		k=0;//变成第一列 
        		if(num[i][k]!=0){//如果最后一排第一列有数，则返回原位置下方 
        			i=1;
        			k=n-1;
        			num[i][k]=x;
        			continue;
				}
			    else {//如果没有值，直接复制后进入下一轮循环 
			    	num[i][k]=x;
			    	continue;
				}
			}
			else {//如果不是最后一列
				k++;//列数加一 
				if(num[i][k]!=0){//如果有数，返回第一行赋值 
					i=1;
					k-=1;
					num[i][k]=x;
					continue;
				}
				else {//如果没有值，直接复制后进入下一轮循环 
				num[i][k]=x;
				continue;
			    }
			} 	
		}
		else if(i==n-1){
			i--;
			if(k==n-1){
				k=0;
				if(num[i][k]!=0){
					i=0;
					k=n-1;
					num[i][k]=x;
					continue;
				}
				else {
					num[i][k]=x;
					continue;
				}
			}
			else {
				k++;
				if(num[i][k]!=0){
					i=0;
					k-=1;
					num[i][k]=x;
					continue;
				}
				else{
					num[i][k]=x;
					continue;
				}
			}
		}
		else if(k==n-1){
			k=0;
			if(i==n-1){
				i=n-2;
				if(num[i][k]!=0){
					i=0;
					k=n-1;
					num[i][k]=x;
					continue;
				}
				else {
					num[i][k]=x;
					continue;
				}
			}
			else if(i==0){
				i=n-1;
				if(num[i][k]!=0){
					i=1;
					k=n-1;
					num[i][k]=x;
					continue;
				}
				else{
					num[i][k]=x;
					continue;
					} 
			} 
			else{
				i--;
				if(num[i][k]!=0){
					i+=2;
					k=n-1;
					num[i][k]=x;
					continue;
				}
				else{
					num[i][k]=x;
					continue;
				}
			}		
		}
		else{
			i--;
			k++;
			if(num[i][k]!=0){
				i+=2;
				k--;
				num[i][k]=x;
				continue;
			}
			else {
			  num[i][k]=x;
			  continue;
		  }
		}
    }
    for(i=0;i<n;i++){
       for(k=0;k<n;k++){
       printf("%4d ",num[i][k]);
       }
       printf("\n");
    }
    return 0;
}
