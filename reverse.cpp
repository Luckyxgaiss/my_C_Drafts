#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*函数：inverse
	作用：将buff+star至buff+end之间的数据倒序存储
	参数1：指针首地址
	参数2：要进行倒序的开始位置与首地址间的距离
	参数3：要进行倒序的结束位置与首地址间的距离*/
void inverse(char *buff, int star, int end)		
{
	char *temporary;				//新建char型指针
	int i;							
	temporary = (char*)malloc(sizeof(char)* (end - star));		//申请一块大小为需要进行倒序的数据段的内存
	memset(temporary, 0, end - star);							//将申请下来的内存清零
	for (i = 0; i < (end - star); i++)				//将源数据倒序放置在新申请的内存下
		temporary[i] = buff[end - i-1];
	memcpy(buff + star, temporary, end - star);		//将倒序后的数据替换到源数据内存下
	free(temporary);		//释放申请内存
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


