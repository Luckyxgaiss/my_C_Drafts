#include<stdio.h>
int main(){
	int n,i,a[100],l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
    	l=0;
    	while(1){
    		if(a[i]==1) {
				printf("true\n");
				break;
			}
    		if(a[i]%2==0){
    		    a[i]/=2;
    		    continue;
		    }
		    if(a[i]%3==0){
		    	a[i]/=3;
		    	continue;
	    	}
		    if(a[i]%5==0){
		    	a[i]/=5;
		    	continue;
	    	}
			if(a[i]%2!=0||a[i]%3!=0&&a[i]%5!=0){
				printf("false\n");
				break;
			}
		}	
	}
	return 0;
}
