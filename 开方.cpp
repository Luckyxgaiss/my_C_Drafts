#include<stdio.h>
int main(void)

{
	float target,left=1.0f, right=2.0f, mid;//target为被开方数 
	printf("请输入开方数：\n");
	scanf("%f",&target);
	while((right-left)>0.000001){
		mid=(right+left)/2;
	if(mid*mid<target)
	  left=mid;
	else
	  right=mid;
    }
	 printf("the result is %f",mid);  
		return 0;
}
