#include<stdio.h>
 int main(){
 	int grade;
 	printf("enter your grade:");
 	scanf("%d",&grade);
 	switch(grade){
 	  case 4:printf("优秀");  break;
	  case 3:printf("良好");  break;
	  case 2:printf("及格");  break;
	  case 1:printf("补考");  break;
	  case 0:printf("退学");  break;
	  default:printf("非法成绩");  break; 
	 }
 	return 0;
 }
