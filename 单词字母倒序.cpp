#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
   int l,w,i,k,m;
   char str[10000],ch[1000];
   fgets(str,10000,stdin);
   l=strlen(str);
   for(i=0;i<l;i++){
   	//if(isspace(str[i])) {putchar('\0');   continue;}//����ǿո񵱼�����ո� 
   	//if(ispunct(str[i])) {putchar(str[i]); continue;}//����Ǳ�㵱�������� 
   	if(isalpha(str[i])){//�������ĸ�������ַ�ѭ�� 
   		for(k=0;;k++){
   			ch[k]=str[i];//ch[]����һ��ѭ��ˢ��һ�Σ����ڴ�������ĸ�� 
   			if(isspace(str[i+1])||ispunct(str[i+1])){//�ж���һ�����������ĸ����m���浱ǰi+1��ֵ 		
   				break;//�����洢i+1��ֵ�˳� 
			   }
		    else i++; 
		   }
		//char H[k+1];
		//strcpy(H,ch);
		for(m=k;m>=0;m--){//��������������ĸ�� 
			printf("%c",ch[m]);
		}
	   }
	else{
		putchar(str[i]);
	}
   }
	  return 0;
	  
	  
}
