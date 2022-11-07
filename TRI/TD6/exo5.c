#include <stdio.h>
#include <stdlib.h>

int palindrome(char chaine[]);

int main(int argc, char const *argv[])
{
	char a[] = {'k','a','y','a','k','\0'};
	int result  = palindrome(a);

	printf("%s est un palindrome: %s\n", a, (result ? "OUI": "NON"));
	return 0;
}

int palindrome(char chaine[])
{
	int i =  0;
	for (i = 0; chaine[i] != '\0'; i++);

	int result = 1;

	for (int j = 0; j < i; ++j)
	{
		if (chaine[j] != chaine[i-j-1])
		{
			result = 0;
		}
	}


	return result;
}