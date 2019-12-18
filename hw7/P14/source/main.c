#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;
	char ch;
	int a, count = 0;
	a = fopen_s(&fptr,"D://welcome.txt", "r");
	if (a == NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else printf("Opening file failed!!\n");
	system("pause");
	return 0;
}