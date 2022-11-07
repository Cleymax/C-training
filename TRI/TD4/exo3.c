#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <complex.h>


int factorielle(int x);


int main(int argc, char const *argv[])
{
	printf("factorielle de 4=%d.\n", factorielle(4) );
	return 0;
}

// int factorielle(int x)
// {
// 	int result = 1;

// 	for (int i = 1; i <= x; ++i)
// 	{
// 		result *=i;
// 	}


// 	return result;
// }

// int factorielle(int x)
// {
// 	int result = 1;
// 	int i = 1;
// 	while(i <= x)
// 	{
// 		result*=i;
// 		i++;
// 	}

// 	return result;
// }

int factorielle(int x)
{
	if (x == 1)
	{
		return x;
	}
	else
	{
		return x * factorielle(x -1);
	}
}