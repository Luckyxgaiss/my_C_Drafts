#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*������inverse
	���ã���buff+star��buff+end֮������ݵ���洢
	����1��ָ���׵�ַ
	����2��Ҫ���е���Ŀ�ʼλ�����׵�ַ��ľ���
	����3��Ҫ���е���Ľ���λ�����׵�ַ��ľ���*/
void inverse(char *buff, int star, int end)		
{
	char *temporary;				//�½�char��ָ��
	int i;							
	temporary = (char*)malloc(sizeof(char)* (end - star));		//����һ���СΪ��Ҫ���е�������ݶε��ڴ�
	memset(temporary, 0, end - star);							//�������������ڴ�����
	for (i = 0; i < (end - star); i++)				//��Դ���ݵ����������������ڴ���
		temporary[i] = buff[end - i-1];
	memcpy(buff + star, temporary, end - star);		//�������������滻��Դ�����ڴ���
	free(temporary);		//�ͷ������ڴ�
}
int main()
{
	char buff[1000];
	char ch;
	int word_long = 0, word_flag = 0;
	int i=0;
	gets(buff);
	do
	{
		if (buff[i++] == ' ')
		{
			inverse(buff, word_flag, word_flag+word_long);
			word_flag += word_long+1;
			word_long = 0;
		}
		else
			word_long++;
	} while (buff[i] != '\0');
	inverse(buff, word_flag, word_flag + word_long);
	puts(buff);
	getchar();
	return 0;
}


