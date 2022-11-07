#include <stdio.h>
#include <stdlib.h>

void concat(char * ch1, char * ch2);
void concat_t(char  ch1[], char ch2[]);

int main(int argc, char const *argv[])
{
	char a[10] = {'B','o','n','j','o','u','r','\0'};
	char b[] = {'A', 'u', ' ', 'r', 'e', 'v', 'o', 'i', 'r', '\0'};

	// concat_t(a, b);
	
	concat(&a, &b);
	
	printf("%s\n", a);

	return 0;
}

void concat_t(char  ch1[], char ch2[])
{
	int i;
	for(i = 0; ch1[i] != '\0'; i++);

	for (int j = 0;  ch2[j] !=  '\0'; j++)
	{
		ch1[i] = ch2[j];
		i++;
	}
	
	ch1[i] = '\0';
}


// void concat(char * ch1, char * ch2) 
// {
// 	int i;
// 	for(i = 0; *(&ch1[i]) != '\0'; i++);

// 	for (int j = 0;  *(&ch2[j]) !=  '\0'; j++)
// 	{
// 		*(&ch1[i]) = *(&ch2[j]);
// 		i++;
// 	}
	
// 	*(&ch1[i]) = '\0';
// }


void concat(char * ch1, char * ch2) 
{
	int i;
	for(i = 0; *(ch1+i) != '\0'; i++);

	for (int j = 0;  *(ch2+j) !=  '\0'; j++)
	{
		*(ch1+i) = *(ch2+j);
		i++;
	}
	
	ch1[i] = '\0';
}