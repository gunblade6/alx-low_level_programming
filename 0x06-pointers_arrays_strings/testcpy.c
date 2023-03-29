#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[10] = "12345";

	char dest1[50] = "abcdefghijklmno";
	strncpy(dest1, src, 3);

	printf("%s", dest1);
}
