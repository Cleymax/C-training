#include <stdio.h>


int main(void)
{
	int a = 97;
	int b = 0x61;
	int c = 0141;
	char d= 'B';
	char e = '2';
	char f = 50;
	char g = 130;
	unsigned char h = 130;
	int i = 'B';
	int j = -126;
	unsigned int k = -126;

	printf("a\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", a,a,a,a);

	printf("b\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", b,b,b,b);

	printf("c\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n",c,c,c,c);

	printf("d\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", d,d,d,d);

	printf("e\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", e,e,e,e);

	printf("f\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", f,f,f,f);

	printf("g\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n",g,g,g,g);

	printf("h\n");
	printf("\tDecimal=%u, Hex=0x%x, Octale=%o, ASCII=%c\n", h,h,h,h);

	printf("i\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", i,i,i,i);

	printf("j\n");
	printf("\tDecimal=%d, Hex=0x%x, Octale=%o, ASCII=%c\n", j,j,j,j);

	printf("k\n");
	printf("\tDecimal=%u, Hex=0x%x, Octale=%o, ASCII=%c\n", k,k,k,k);
}