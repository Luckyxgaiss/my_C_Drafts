#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
   int l,w,i,k,m;
   char str[10000],ch[1000];
   fgets(str,10000,stdin);
   l=strlen(str);
   for(i=0;i<l;i++){
   	//if(isspace(str[i])) {putchar('\0');   continue;}//如果是空格当即输出空格 
   	//if(ispunct(str[i])) {putchar(str[i]); continue;}//如果是标点当即输出标点 
   	if(isalpha(str[i])){//如果是字母则进入存字符循环 
   		for(k=0;;k++){
   			ch[k]=str[i];//ch[]数组一个循环刷新一次，用于储存连字母串 
   			if(isspace(str[i+1])||ispunct(str[i+1])){//判断下一个如果不是字母则用m储存当前i+1的值 		
   				break;//并不存储i+1的值退出 
			   }
		    else i++; 
		   }
		//char H[k+1];
		//strcpy(H,ch);
		for(m=k;m>=0;m--){//当即输出存入的字母串 
			printf("%c",ch[m]);
		}
	   }
	else{
		putchar(str[i]);
	}
   }
	  return 0;
	  
	  
}
