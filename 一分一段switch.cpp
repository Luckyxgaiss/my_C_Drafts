#include<stdio.h>
 int main(){
 	int grade;
 	printf("enter your grade:");
 	scanf("%d",&grade);
 	switch(grade){
 	  case 4:printf("����");  break;
	  case 3:printf("����");  break;
	  case 2:printf("����");  break;
	  case 1:printf("����");  break;
	  case 0:printf("��ѧ");  break;
	  default:printf("�Ƿ��ɼ�");  break; 
	 }
 	return 0;
 }
