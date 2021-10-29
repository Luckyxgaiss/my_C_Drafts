#include<stdio.h>
int main(){
	int a[12]={31,28,31,30,3130,31,31,30,31,30,31};
	int year,month,day;
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		int sum=0;
		for(int i=0;i<month-1;i++)
		  sum=sum+a[i];
		  sum=sum=day;
		 if((year%4==0&&year%100!=0)||year%400==0)
		   if (month>2)
		     sum++;
		printf("%d\n",sum); 
	}
	return 0;
} 
