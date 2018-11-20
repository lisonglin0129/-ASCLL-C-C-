#include <stdio.h>
#include <malloc.h>
#include "lib.h"
char* asc_to_str(long code)
{
	long i = 0;
	char *result = (char*)malloc((sizeof(char)*2)*8);
	
	if (0 < code && 160 > code) 
	{
		return (char)code;
	}
	if (-20319 > code || -10247 < code)
	{
	
		return  " ";
	}
	i = 0;
	while (sizeof(index) > i) {
	
		if (code < index[i])
		{
			break;
		}
	
		result = data[i];
		i = -~i;
	}
	return result;
}


char* Begin(const char *param)
{

	long li_string = strlen(param), i = 0,j=0,str_ord = 0,str_end_ord = 0;
	char *res = (char*)malloc((sizeof(char) * 2) * 8);
	char *result = (char*)malloc(sizeof(char) * 1024);
	sprintf(result, "%s","");
	for (i = 0; i < li_string; i++)
	{
		str_ord = as_code(*(param + i));
		if (str_ord > 160) {
			str_end_ord = as_code(*(param + (++i)));
			str_ord = str_ord * 256 + str_end_ord - 65536;
			res = asc_to_str(str_ord);
			sprintf(result, "%s %s \0", result,res);
		}
	}
	return result;
}
void main()
{

	char *p = "否则将导致语音芯片驱动不成功甚至导致语音芯片烧坏， 以下为该模块的 2 种驱动方式的端口连接"; 
	printf("中文字符串:%s\n拼音字符串:%s\n", p,Begin(p));
	STOP;
}