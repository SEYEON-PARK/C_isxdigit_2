#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'A';

	printf("0�� �ƴϸ�, 16�����Դϴ�. \n");
	printf("%d", isxdigit(a));

	return 0;
}