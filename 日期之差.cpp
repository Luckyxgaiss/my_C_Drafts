#include<stdio.h>
#include<string.h>
void month(int x){
	char ch[20];
	switch(x){
	 case 1:strcpy(ch,"January");     break;
	 case 2:strcpy(ch,"February");    break;
	 case 3:strcpy(ch,"March");       break;
	 case 4:strcpy(ch,"April");       break;
	 case 5:strcpy(ch,"May");         break;
	 case 6:strcpy(ch,"June");        break;
	 case 7:strcpy(ch,"July");        break;
	 case 8:strcpy(ch,"Augest");      break;
	 case 9:strcpy(ch,"September");   break;
	 case 10:strcpy(ch,"October");    break;
	 case 11:strcpy(ch,"November");   break;
	 case 12:strcpy(ch,"December");   break;
	}
	printf("%s ",ch);
}
int runcountdown(int a,int b){//a:month    b:day
	int x;
	switch(a){
		case 12:x=31-b; break;
		case 11:x=31+30-b; break;
		case 10:x=31+30+31-b; break;
		case 9 :x=31+30+31+30-b; break;
		case 8 :x=31+30+31+30+31-b; break;
		case 7 :x=31+30+31+30+31+31-b; break;
		case 6 :x=31+30+31+30+31+31+30-b; break;
		case 5 :x=31+30+31+30+31+31+30+31-b; break;
		case 4 :x=31+30+31+30+31+31+30+31+30-b; break;
		case 3 :x=31+30+31+30+31+31+30+31+30+31-b; break;
		case 2 :x=31+30+31+30+31+31+30+31+30+31+29-b; break;
		case 1 :x=31+30+31+30+31+31+30+31+30+31+29+31-b; break;
	}
	return x;
}
int pincountdown(int a,int b){//a:month    b:day
	int x;
	switch(a){
		case 12:x=31-b; break;
		case 11:x=31+30-b; break;
		case 10:x=31+30+31-b; break;
		case 9 :x=31+30+31+30-b; break;
		case 8 :x=31+30+31+30+31-b; break;
		case 7 :x=31+30+31+30+31+31-b; break;
		case 6 :x=31+30+31+30+31+31+30-b; break;
		case 5 :x=31+30+31+30+31+31+30+31-b; break;
		case 4 :x=31+30+31+30+31+31+30+31+30-b; break;
		case 3 :x=31+30+31+30+31+31+30+31+30+31-b; break;
		case 2 :x=31+30+31+30+31+31+30+31+30+31+28-b; break;
		case 1 :x=31+30+31+30+31+31+30+31+30+31+28+31-b; break;
	}
	return x;
}
int runcountup(int a,int b){//a:month    b:day
	int x;
	switch(a){
		case 1 :x=b; break;
		case 2 :x=31+b; break;
		case 3 :x=31+29+b; break;
		case 4 :x=31+29+31+b; break;
		case 5 :x=31+29+31+30+b; break;
		case 6 :x=31+29+31+30+31+b; break;
		case 7 :x=31+29+31+30+31+30+b; break;
		case 8 :x=31+29+31+30+31+30+31+b; break;
		case 9 :x=31+29+31+30+31+30+31+31+b; break;
		case 10:x=31+29+31+30+31+30+31+31+30+b; break;
		case 11:x=31+29+31+30+31+30+31+31+30+31+b; break;
		case 12:x=31+29+31+30+31+30+31+31+30+31+30+b; break;
	}
	return x;
}
int pincountup(int a,int b){//a:month    b:day
	int x;
	switch(a){
		case 1 :x=b; break;
		case 2 :x=31+b; break;
		case 3 :x=31+28+b; break;
		case 4 :x=31+28+31+b; break;
		case 5 :x=31+28+31+30+b; break;
		case 6 :x=31+28+31+30+31+b; break;
		case 7 :x=31+28+31+30+31+30+b; break;
		case 8 :x=31+28+31+30+31+30+31+b; break;
		case 9 :x=31+28+31+30+31+30+31+31+b; break;
		case 10:x=31+28+31+30+31+30+31+31+30+b; break;
		case 11:x=31+28+31+30+31+30+31+31+30+31+b; break;
		case 12:x=31+28+31+30+31+30+31+31+30+31+30+b; break;
	}
	return x;
}
int main(){
	int a,b,c,head,foot,body,run,i;
	
	scanf("%d/%d/%d",&a,&b,&c);
	if(a>12){
		month(b);
		printf("%d, %d",c,2000+a);
	}
	if(c>31||b>12){
		month(a);
		printf("%d, %d",b,2000+c);
	}
	if(a<=12&&b<=12&&c<=31){
		run=0;
		if(c>a){
			if(c%4==0){
				head=runcountup(a,b);
			}
			if(c%4!=0){
				head=pincountup(a,b);
			}
			if(a%4==0){
				foot=runcountdown(b,c);
			}
			if(a%4!=0){
				foot=pincountdown(b,c);
			}
			for(i=2000+a+1;i<=2000+c-1;i++){
				if(i%4==0){
					run++;
				}
			}
			body=run*366+(c-a-1-run)*365;
			printf("%d",head+foot+body);
		}
		run=0;
		if(a>c){
			if(a%4==0){
				head=runcountup(b,c);
			}
			if(a%4!=0){
				head=pincountup(b,c);
			}
			if(c%4==0){
				foot=runcountdown(a,b);
			}
			if(c%4!=0){
				foot=pincountdown(a,b);
			}
			for(i=2000+c+1;i<=2000+a-1;i++){
				if(i%4==0){
					run++;
				}
			}
			body=run*366+(a-c-1-run)*365;
			printf("%d",head+foot+body);
		}
		run=0;
		if(a==c==b){
			month(a);
			printf("%d, %d",a,2000+a);
		}
	}
	return 0;
}
