#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE* fptr;
	char str[MAX], ch;
	int a, i = 0;
	fptr = fopen("D://welcome.txt", "a");
	printf("Please enter the string, press enter to end the input:\n");
	while ((ch = _getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
		fflush(stdin);

	}

	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\nThe added file is finished!!\n");
	system("pause");
	return 0;
}
