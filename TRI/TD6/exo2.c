#include <stdio.h>
#include <stdlib.h>


int main(void)
{
 int i = 18, *iPtr;
 float f = 3.6f, *fPtr;
 double d = 0.5, *dPtr;

 iPtr = &i;
 fPtr = &f;
 dPtr = &d;

 (*dPtr) = d + 3.0 * (*iPtr) + i / (*fPtr) - (*dPtr);


 printf("%f\n", d);
 return 0;
}