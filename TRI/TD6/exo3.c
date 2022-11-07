#include <stdio.h>
#include <stdlib.h>

void fonction1(void);
void fonction2(void);
void fonction3(void);
void fonction4(void);
void fonction5(void);

int main(void)
{
  fonction2();
}
     
void fonction1(void)
{
  int i = 32;
  int* p;
  p=&i;
}

void fonction2(void)
{
     int x=17;
     int* p=&x;
     *p=17;
}

void fonction3(void)
{
     double *q;
     int x=17;
     int* p=&x;
     q=p;
}

void fonction4(void)
{
     int x;
     int*p;
     x=&p;
}     


void fonction5(void)
{
     char mot[10];
     char car='A';
     char* pc=&car;
     mot[0]=*pc;
}
