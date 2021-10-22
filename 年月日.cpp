#include<stdio.h>
int main(){
	int month,year,date;
	printf("enter the date(year/month/date):");
    scanf("%d%d%d",&year,&month,&date);
    printf("%d years",year);
    switch(month){ 
       case 1:   printf("January");  break;
	   case 2:   printf("February"); break;
	   case 3:   printf("March");    break;
	   case 4:   printf("April");    break;
	   case 5:   printf("May");      break;
	   case 6:   printf("June");     break;
	   case 7:   printf("July");     break;
	   case 8:   printf("Augest");   break;
	   case 9:   printf("September");break;
	   case 10:  printf("October");  break;
	   case 11:  printf("November"); break;
	   case 12:  printf("December"); break;
	   } 
	switch(date){ 
	   case 1:case 31:case 21:printf("%dst",date);break;
	   case 2:case 22:printf("%dnd",date);break;
	   case 3:case 23:printf("%drd",date);break;
	   default: printf("%dth",date);} 
	return 0;
}

