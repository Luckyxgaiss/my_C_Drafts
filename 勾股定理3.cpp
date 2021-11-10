#include<stdio.h>
int judge(unsigned int a,unsigned int b,unsigned int c){
	if(a*a+b*b==c*c) return 1;
	return 0; 
}
int main(){
	int n,i,l,k,X,Y,m;
	scanf("%d",&n);
	int  s[n][3];
	for(i=0;i<n;i++){
		scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);
	}
	for(m=0;m<n;m++){
	     for(l=0;l<2;l++){
		      for(k=0;k<2;k++){
			       if(s[m][k]>=s[m][k+1])  {
			            	X=s[m][k];
				            Y=s[m][k+1];
				            s[m][k]=Y;
				            s[m][k+1]=X;
			                 } 
		               }
	            }
        }
    for(m=0;m<n;m++){
    	if(judge(s[m][0],s[m][1],s[m][2])) printf("Yes\n");
    	else printf("No\n");
	}
	return 0;
    
} 
