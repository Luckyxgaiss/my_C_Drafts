#include<stdio.h>
#define Root 100.0
int main(){
	int i,yearnum,year,lowrate;
	double A[5];
	printf("enter the lowrate:");
	scanf("%d",&lowrate);
	printf("enter the yearnumber:");
	scanf("%d",&yearnum);
	printf("\nYears");
	for(i=0;i<=4;i++){
		printf("%6d%%",lowrate+i);
		A[i]=Root;
	}
	printf("\n");
	for(year=1;year<=yearnum;year++){
		printf("%3d  ",year);
		for(i=0;i<=4;i++){
			A[i]+=(lowrate+i)/100.0*A[i];
			printf("%7.2f",A[i]);
		}
	printf("\n");
	}
	return 0;
	    
} 
