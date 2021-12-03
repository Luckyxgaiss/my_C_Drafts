#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include <stdio.h>
int atoi(char *str)
{
	if (!str)
		return -1;
	bool bMinus = false;
	int result = 0;
 
	if (('0'>*str || *str>'9') && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			bMinus = true;
		*str++;
	}
	while (*str != '\0')
	{
		if ('0'> *str || *str>'9')
			break;
		else
			result = result * 10 + (*str++ - '0');
	}
 
	if (*str != '\0')//no-normal end  
		return -2;
 
	return bMinus ? -result : result;
}
void itoa(long i, char *string)
{
	int power = 0, j = 0;
 
	j = i;
	for (power = 1; j>10; j /= 10)
		power *= 10;
 
	for (; power>0; power /= 10)
	{
		*string++ = '0' + i / power;
		i %= power;
	}
	*string = '\0';

}
int main(){
	int n,i,k=0,NUM[100]={-1}; 
	char search[100],a[100][100],b[100][100],c[100][100];
	scanf("%d %s",&n,&search);
	for(i=0;i<n;i++){
		scanf("%s %s %s",&a[i],&b[i],&c[i]);
	}
	char invalid[]="n/a";
	int d[100],MAX=0,sq[100],l,m,g,p,lensearch=strlen(search),lenb; 
	for(i=0;i<n;i++){//�ѵ�������Ч�ɼ�ɸѡ���� ������ת���֣����浽NUM������ 
		if(strcmp(c[i],invalid)==0)  continue;
		if(isdigit(c[i][0]))	{
		     d[k]=i;//�����ֵ�iֵ���浽d�� 
		     NUM[i]=atoi(c[i]);
		     k++;
		}	
	}
	for(i=0;i<k;i++){//��ÿһ����Ч�ɼ���i���������δ��浽sq�У�sq��i�����ǵ�i�е����� 
		l=0;
		for(p=0;p<k;p++){
			if(NUM[d[p]]>NUM[d[i]]){
				l++;
			}
		sq[d[i]]=l+1;
		}
	}
	char paiming[100][100];
	for(i=0;i<n;i++){//�������ַ������ʼ�� 
	    strcpy(paiming[i],"n/a");
	}
	for(i=0;i<k;i++){
		itoa(sq[d[i]],paiming[d[i]]);
	}
	if(isalpha(search[0])){
		if(strcmp(search,"n/a")==0){//�����n/a����c��Ѱ�� 
			for(i=0;i<n;i++){
				if(strcmp(c[i],search)==0){
					printf("%s %s %s %s\n",a[i],b[i],c[i],search);
				}
			}
		}
		else{//����n/a����a�в��� 
		for(i=0;i<n;i++){
			if(strcmp(search,a[i])==0){
				printf("%s %s %s %s\n",a[i],b[i],c[i],paiming[i]);
			}
		}
	  }
	}
	
	if(isdigit(search[0])){
		for(i=0;i<n;i++){//����Ѱ��c���� 
			if(strcmp(search,c[i])==0){
				printf("%s %s %s %s\n",a[i],b[i],c[i],paiming[i]);
			}
		}
		for(i=0;i<n;i++){
			char move[10];
			lenb=strlen(b[i]);
			g=0;
			for(m=0;m<=lenb-lensearch;m++){
				for(l=0;l<lensearch;l++){
					move[l]=b[i][m];
					m++;
				}
				if(strcmp(move,search)==0) g++;
				m-=(lensearch-1);
			}
			if(g!=0) printf("%s %s %s %s\n",a[i],b[i],c[i],paiming[i]);
		}
	}
	return 0;
} 
