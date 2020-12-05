#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("This is the square of the first ten intengers");

   int i;
   int square;
   for (i = 1; i <= 10; i++)
    {
    square = i * i;
    printf("\n The square of %d = %d * %d = %d", i , i, i, square);

   }
    return 0;
}
