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
    for(x=2;x<=n*n;x++){//x������ֵ 
        if(i==0){//������ڶ����� 
        	i=n-1;//����һ������λ�ñ�ɵ�n-1�� 
        	if(k==n-1) {//��������һ��
        		k=0;//��ɵ�һ�� 
        		if(num[i][k]!=0){//������һ�ŵ�һ���������򷵻�ԭλ���·� 
        			i=1;
        			k=n-1;
        			num[i][k]=x;
        			continue;
				}
			    else {//���û��ֵ��ֱ�Ӹ��ƺ������һ��ѭ�� 
			    	num[i][k]=x;
			    	continue;
				}
			}
			else {//����������һ��
				k++;//������һ 
				if(num[i][k]!=0){//������������ص�һ�и�ֵ 
					i=1;
					k-=1;
					num[i][k]=x;
					continue;
				}
				else {//���û��ֵ��ֱ�Ӹ��ƺ������һ��ѭ�� 
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
