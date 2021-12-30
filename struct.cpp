#include<stdio.h>
#include<ctype.h>
int main(){
	struct student{
		char name[100];
		char number[100];
		int grade;
	};
	struct student list[10];
	int i,k=0,num=0,n,l,cmp[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s %d",&list[i].name,&list[i].number,&list[i].grade);
	}
	for(i=0;i<n;i++){
		if(isdigit(list[i].grade)){
		   cmp[k]=i;
		   k++;  
		   num++; 
	    }
	}
	int max,min;
	for(l=0;l<num-1;l++){
		if(list[cmp[l]].grade>=list[cmp[l+1]].grade){
			max=cmp[l];
			min=cmp[l+1];
		}
		else {
		max=cmp[l+1];
		min=cmp[l];
	     }
	}
	printf("%s %s\n %s %s",list[max].name,list[max].number,list[min].name,list[min].number);
	return 0;
} 
