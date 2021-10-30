#include<stdio.h>
int main(){
	int A[100],i,d,q;
	for(i=0;i>=0;i+=5){
	    scanf("%d %d %d %d %d",&A[i],&A[i+1],&A[i+2],&A[i+3],&A[i+4]);
	    if(A[i]==0&&A[i+1]==0&A[i+2]==0&&A[i+3]==0&&A[i+4]==0)
	       break;
	    
	                 }
	for(i=0;i>=0;i+=5){
		while(A[i]==A[i+1]&&A[i+1]==A[i+2]&&A[i+2]==A[i+3]&&A[i+3]==A[i+4]&&A[i+4]==0){
			goto END;}
		while(A[i+1]-A[i]==A[i+2]-A[i+1]&&A[i+2]-A[i+1]==A[i+3]-A[i+2]&&A[i+3]-A[i+2]==A[i+4]-A[i+3])
		    { 
		    d=A[i+1]-A[i];
		    printf("case one\n%d %d %d %d %d\n",A[i+4]+d,A[i+4]+2*d,A[i+4]+3*d,A[i+4]+4*d,A[i+4]+5*d);
		    break;
	        }
	    while(A[i]*A[i+2]==A[i+1]*A[i+1]&&A[i+3]*A[i+1]==A[i+2]*A[i+2]&&A[i+4]*A[i+2]==A[i+3]*A[i+3]&&A[i]!=0&&A[i+1]!=0&&A[i+2]!=0&&A[i+3]!=0&&A[i+4]!=0)
	        { 
	    	q=A[i+1]/A[i];
	    	printf("case two\n%d %d %d %d %d\n",A[i+4]*q,A[i+4]*q*q,A[i+4]*q*q*q,A[i+4]*q*q*q*q,A[i+4]*q*q*q*q*q);
	    	break;
		    }
		while(A[i]+A[i+1]==A[i+2]&&A[i+1]+A[i+2]==A[i+3]&&A[i+2]+A[i+3]==A[i+4])
		    { 
			printf("case three\n%d %d %d %d %d\n",A[i+3]+A[i+4],A[i+3]+2*A[i+4],2*A[i+3]+3*A[i+4],3*A[i+3]+5*A[i+4],5*A[i+3]+8*A[i+4]);
			break;
		    }
		
		    
	}
	END:
	return 0;
}
