#include<stdio.h>
#include<string.h>
int main(){
	int n,i,p,q,x,y,l;
	scanf("%d",&n);
	int a[n];
	char str[n][101];
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		x=0;
		y=0;
		l=strlen(str[i]);
		if(l%2==0) {
			printf("NO\n");
			continue;
		}
		if(str[i][(l-1)/2-1]=='S'&&str[i][(l-1)/2]=='C'&&str[i][(l-1)/2+1]=='U'){
		    for(p=0;p<(l-1)/2-1;p++){
		    	if(str[i][p]!='A') x++;
			}
			for(q=(l-1)/2+2;q<l;q++){
				if(str[i][q]!='A') y++;
			}	
			if(x==0&&y==0) {
			    printf("YES\n");
				continue;}
			else {printf("NO\n");
			    continue;}
			}
		else printf("NO\n");
	}
	return 0;
}
