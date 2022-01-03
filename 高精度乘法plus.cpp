#include<stdio.h>
#include<string.h>
#include<ctype.h>
int my_atoi(char ch){
    int num;
    num=ch-'0';
    return num;
}
char my_itoa(int num){
	char ch;
	ch=num+'0';
	return ch;
}
int main(){
	int len1,len2,i,k;
	char num1[100],num2[100];
	scanf("%s %s",&num1,&num2);
    len1=strlen(num1);
    len2=strlen(num2);
    char yinshu[100][100];
    int single,single_1,carry,x,y,gewei,begin,max,min;
    if(len1>len2){
    	x=0;
    	begin=99;
        max=len1;
		min=len2;
      for(i=len2-1;i>=0;i--,x++){
      	carry=0; 
      	y=begin--;
       	for(k=len1-1;k>=0;k--){
	  	  single=my_atoi(num1[k])*my_atoi(num2[i]);
		  single_1=single+carry;
		  gewei=single_1%10;
		  carry=single_1/10;
		  yinshu[x][y--]=my_itoa(gewei);
	    }
	    yinshu[x][y]=my_itoa(carry);
	  }	
    }
	if(len1<=len2){
		x=0;
		begin=99;
		max=len2;
		min=len1;
      for(i=len1-1;i>=0;i--,x++){
      	carry=0; 
      	y=begin--;
       	for(k=len2-1;k>=0;k--){
	  	  single=my_atoi(num2[k])*my_atoi(num1[i]);
		  single_1=single+carry;
		  gewei=single_1%10;
		  carry=single_1/10;
		  yinshu[x][y--]=my_itoa(gewei);
	    }
	    yinshu[x][y]=my_itoa(carry);
	  }	
	}
	printf("原始位数：\n");
	for(i=0;i<min;i++){
	   for(k=0;k<100;k++){
	   	if(isdigit(yinshu[i][k])){  
	   	   printf("%c",yinshu[i][k]);
	     }
	   }	
	   printf("\n");
	}
	char result[1000];
	int sum,sum_1,l=999,index=0;
	carry=0;
	for(i=99;i>=0;i--){
		for(k=0;k<min;k++){
			if(yinshu[k][i]!='\0'){
				index++;
			}
		}
		if(index==0) break;
		sum=0;
		for(k=0;k<min;k++){
			if(isdigit(yinshu[k][i])){
			sum+=my_atoi(yinshu[k][i]);
		   }
		}
		sum_1=sum+carry;
		gewei=sum_1%10;
		carry=sum_1/10;
		result[l--]=my_itoa(gewei);
	}
	result[l]=my_itoa(carry);
	int start;
	for(i=0;i<1000;i++){
		if(isdigit(result[i])&&my_atoi(result[i])!=0){
			start=i;
			break;
		} 
	}
	for(i=start;i<1000;i++){
		printf("%c",result[i]);
	}
	return 0;
} 
