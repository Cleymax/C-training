#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int* p;
	int a = 4, b = 3;

	p = &a;

	printf("%d\n", *p );
	printf("%x\n", &b);
	
	return 0;
}