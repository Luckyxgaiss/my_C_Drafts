#include<stdio.h>
void shuzhi(int x,int dex){
	switch(x){
		case 10:printf("A");
		        break;
		case 11:printf("B");
		        break;
		case 12:printf("C");
		        break;
		case 13:printf("D");
		        break;
		case 14:printf("E");
				break;
		case 15:printf("F");
				break;
		default:printf("%d",x);
				break;
	}
}
int main(){
	int i,n=0,index,target,target1,digit[100],root;
	scanf("%d %d",&target,&index);
	root=target;
	if(index<=-2&&index>=-10){
	  for(i=0;;i++){
		target1=target;
		if(target>0){
	   	   target=target/index;
	   	   digit[i]=target1-index*target;
	   	   n++;
	   	   if(target==0) break;
	   	   continue;
	      }
	    if(target<0){
	    	if(target%index==0){
	    	target=target/index;
	    }
	        else target=target/index+1;
	    	digit[i]=target1-index*target;
	    	n++;
	    	if(target==0) break;
	    	continue;
		}  
	  }
	  printf("%d=",root);
	 for(i=n-1;i>=0;i--){
	 	printf("%d",digit[i]);
	 }
	 printf("(base%d)",index);
	 return 0;
    }
    if(index<=-10&&index>=-16){
    	 for(i=0;;i++){
		target1=target;
		if(target>0){
	   	   target/=index;
	   	   digit[i]=target1-index*target;
	   	   n++;
	   	   if(target==0) break;
	   	   continue;
	      }
	    if(target<0){
	    	target=target/index+1;
	    	digit[i]=target1-index*target;
	    	n++;
	    	if(target==0) break;
	    	continue;
		}  
	  }
	  printf("%d=",root);
	  for(i=n-1;i>=0;i--){
	  	shuzhi(digit[i],index);
	  }
	   printf("(base%d)",index);
	}
	return 0;
} 
