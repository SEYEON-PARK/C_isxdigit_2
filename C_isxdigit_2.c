#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'A'; // 초기화

	printf("0이 아니면, 16진수입니다. \n");
	printf("%d", isxdigit(a));

	return 0;
}
