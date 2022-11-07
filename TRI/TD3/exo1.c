#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	for (int i = 0; i < 255; ++i)
	{
		printf("%d\t%c\t%x\n", i, i,i );
	}
	return 0;
}