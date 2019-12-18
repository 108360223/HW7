#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr1, * fptr2;
	char ch;
	int a, b;
	a = fopen_s(&fptr1,
		"D://welcome.txt", "r");
	b = fopen_s(&fptr2,
		"D://output.txt", "w");
	if (a == 0 && b == 0)
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("Copy finished.\n");
	}
	else printf("Opening file failed.\n");
	system("pause");
	return 0;
}